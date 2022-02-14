
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmb_entry {int entry; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct pmb_entry *VAR_1)
{
 unsigned long VAR_2, VAR_3;
 unsigned long VAR_4, VAR_5;

 VAR_2 = FUNC_1(VAR_1->entry);
 VAR_3 = FUNC_2(VAR_1->entry);

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_0(VAR_3);


 FUNC_3(VAR_4 & ~VAR_0, VAR_2);
 FUNC_3(VAR_5 & ~VAR_0, VAR_3);
}
