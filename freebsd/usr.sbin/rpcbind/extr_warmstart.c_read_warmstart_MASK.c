
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct pmaplist {int dummy; } ;
typedef struct pmaplist* rpcblist_ptr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pmaplist* VAR_4 ;
 struct pmaplist* VAR_5 ;
 int FUNC_0 (int ,int ,struct pmaplist**) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void
FUNC_2(void)
{
 rpcblist_ptr VAR_8 = ((void*)0);



 int VAR_9, VAR_10 = VAR_3;

 VAR_9 = FUNC_0(VAR_2, (xdrproc_t)VAR_7, &VAR_8);
 if (VAR_9 == VAR_0)
  return;



 if (VAR_10 == VAR_0) {
  FUNC_1((xdrproc_t) VAR_7, (char *)&VAR_8);
  return;
 }
 FUNC_1((xdrproc_t) VAR_7, (char *)&VAR_5);
 VAR_5 = VAR_8;




}
