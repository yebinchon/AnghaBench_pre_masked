
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmb_entry {int vpn; int ppn; int flags; int entry; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pmb_entry *VAR_1)
{
 unsigned long VAR_2, VAR_3;

 VAR_2 = FUNC_3(VAR_1->entry);
 VAR_3 = FUNC_4(VAR_1->entry);

 FUNC_2();


 FUNC_0(VAR_1->vpn | VAR_0, VAR_2);
 FUNC_0(VAR_1->ppn | VAR_1->flags | VAR_0, VAR_3);

 FUNC_1();
}
