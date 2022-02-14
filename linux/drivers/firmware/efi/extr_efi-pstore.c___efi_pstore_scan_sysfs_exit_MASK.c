
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efivar_entry {int scanning; int list; scalar_t__ deleting; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct efivar_entry*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(struct efivar_entry *VAR_1,
      bool VAR_2)
{
 if (VAR_1->deleting) {
  FUNC_3(&VAR_1->list);
  FUNC_1();
  FUNC_2(VAR_1);
  if (FUNC_0())
   return -VAR_0;
 } else if (VAR_2)
  VAR_1->scanning = 0;

 return 0;
}
