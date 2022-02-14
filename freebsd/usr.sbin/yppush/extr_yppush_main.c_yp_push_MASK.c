
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct jobs {unsigned long tid; unsigned long prognum; scalar_t__ stat; struct jobs* next; scalar_t__ polled; void* map; void* server; int port; } ;
struct TYPE_4__ {int xp_port; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,unsigned long,int,int ,int ) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 struct jobs* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (struct jobs*) ;
 int FUNC_7 (scalar_t__,unsigned long) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_8(char *VAR_8, char *VAR_9, unsigned long VAR_10)
{
 unsigned long VAR_11;
 int VAR_12 = VAR_1;
 SVCXPRT *VAR_13;
 struct jobs *VAR_14;




 if ((VAR_14 = (struct jobs *)FUNC_0(sizeof (struct jobs))) == ((void*)0)) {
  FUNC_4("malloc failed");
  FUNC_5 (1);
 }





 VAR_13 = FUNC_3(VAR_12);
 for (VAR_11 = 0x40000000; VAR_11 < 0x5FFFFFFF; VAR_11++) {
  if (FUNC_2(VAR_13, VAR_11, 1,
      VAR_7, VAR_0) == VAR_2)
   break;
 }
 if (VAR_11 == 0x5FFFFFFF) {
  FUNC_4 ("can't register yppush_xfrrespprog_1");
  FUNC_5 (1);
 }


 VAR_14->stat = 0;
 VAR_14->tid = VAR_10;
 VAR_14->port = VAR_13->xp_port;
 VAR_14->server = FUNC_1(VAR_8);
 VAR_14->map = FUNC_1(VAR_9);
 VAR_14->prognum = VAR_11;
 VAR_14->polled = 0;
 VAR_14->next = VAR_5;
 VAR_5 = VAR_14;

 if (VAR_4) {
  FUNC_4("initiating transfer: %s -> %s (transid = %lu)",
   VAR_6, VAR_8, VAR_10);
 }






 if (FUNC_6(VAR_14)){

  FUNC_7(VAR_14->stat ? VAR_14->stat :
   VAR_3,VAR_14->tid);
 } else {
  if (VAR_4 > 1)
   FUNC_4("%s has been called", VAR_8);
 }

 return(0);
}
