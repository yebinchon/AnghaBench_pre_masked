
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pktsize; int numpkts; int so; } ;
typedef TYPE_1__ test_pipe_thread_data_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int,int,char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char*,int,int ) ;

__attribute__((used)) static void*
FUNC_6(void* VAR_1)
{
 test_pipe_thread_data_t* VAR_2 = VAR_1;
 char VAR_3[VAR_2->pktsize];
 char VAR_4[VAR_2->pktsize];
 ssize_t VAR_5;
 int VAR_6, VAR_7;

 for(VAR_6=0; VAR_6 < VAR_2->numpkts; VAR_6++) {
  FUNC_3(VAR_4, VAR_6, VAR_2->pktsize);
  VAR_5 = FUNC_5(VAR_2->so, VAR_3, VAR_2->pktsize, VAR_0);
  if (VAR_5 < 0) {
   FUNC_4("recv");
   FUNC_1("recv returned < 0");
  }
  FUNC_0(VAR_2->pktsize, VAR_5,
         "expected %zd=send(...) but got %zd",
     VAR_2->pktsize, VAR_5);
  VAR_7 = FUNC_2(VAR_4, VAR_3, VAR_2->pktsize);
  FUNC_0(0, VAR_7,
         "Received data miscompare on packet %d", VAR_6);
 }
 return (0);
}
