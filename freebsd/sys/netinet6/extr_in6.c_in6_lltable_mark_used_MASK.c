
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llentry {int lle_hittime; scalar_t__ r_skip_req; } ;


 int FUNC_0 (struct llentry*) ;
 int FUNC_1 (struct llentry*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct llentry *VAR_1)
{

 FUNC_0(VAR_1);
 VAR_1->r_skip_req = 0;






 VAR_1->lle_hittime = VAR_0;
 FUNC_1(VAR_1);
}
