
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pktsize; int numpkts; int so; } ;
typedef TYPE_1__ test_pipe_thread_data_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int,scalar_t__,char*,int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*,int,int ) ;

__attribute__((used)) static void*
FUNC_5(void* VAR_1)
{
 test_pipe_thread_data_t* VAR_2 = VAR_1;
 char VAR_3[VAR_2->pktsize];
 ssize_t VAR_4;
 int VAR_5;

 for(VAR_5=0; VAR_5 < VAR_2->numpkts; VAR_5++) {
   FUNC_2(VAR_3, VAR_5, VAR_2->pktsize);
   VAR_4 = FUNC_4(VAR_2->so, VAR_3, VAR_2->pktsize, VAR_0);
   if (VAR_4 < 0) {
    FUNC_3("send");
    FUNC_1("send returned < 0");
   }
   FUNC_0(VAR_2->pktsize, VAR_4,
          "expected %zd=send(...) but got %zd",
           VAR_2->pktsize, VAR_4);
 }
 return (0);
}
