
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blockif_ctxt {scalar_t__ bc_magic; int bc_candelete; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

int
FUNC_1(struct blockif_ctxt *VAR_1)
{

 FUNC_0(VAR_1->bc_magic == VAR_0);
 return (VAR_1->bc_candelete);
}
