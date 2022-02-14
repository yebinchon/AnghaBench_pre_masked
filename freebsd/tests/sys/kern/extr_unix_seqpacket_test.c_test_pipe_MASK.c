
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t pktsize; int numpkts; int so; } ;
typedef TYPE_1__ test_pipe_thread_data_t ;
typedef int sndbufsize ;
typedef int rcvbufsize ;
typedef int pthread_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int *,int *,int ,void*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int,int ,int ,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(int VAR_5, int VAR_6)
{
 test_pipe_thread_data_t VAR_7, VAR_8;
 pthread_t VAR_9, VAR_10;
 int VAR_11[2];
 const size_t VAR_12 = FUNC_2(VAR_5, VAR_6) / 4;
 int VAR_13;


 FUNC_4(VAR_11);

 FUNC_0(0, FUNC_7(VAR_11[0], VAR_0, VAR_2, &VAR_5,
     sizeof(VAR_5)));
 FUNC_0(0, FUNC_7(VAR_11[1], VAR_0, VAR_1, &VAR_6,
     sizeof(VAR_6)));


 VAR_13 = FUNC_1(VAR_5, VAR_6) * 8 / VAR_12;


 VAR_7.pktsize = VAR_12;
 VAR_7.numpkts = VAR_13;
 VAR_7.so = VAR_11[0];
 VAR_8.pktsize = VAR_12;
 VAR_8.numpkts = VAR_13;
 VAR_8.so = VAR_11[1];
 FUNC_0(0, FUNC_5(&VAR_9, ((void*)0), VAR_4,
          (void*)&VAR_7));





 FUNC_8(1000);
 FUNC_0(0, FUNC_5(&VAR_10, ((void*)0), VAR_3,
          (void*)&VAR_8));


 FUNC_0(0, FUNC_6(VAR_9, ((void*)0)));
 FUNC_0(0, FUNC_6(VAR_10, ((void*)0)));
 FUNC_3(VAR_11[0]);
 FUNC_3(VAR_11[1]);
}
