
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct efivar_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct efivar_entry*) ;
 int FUNC_1 (int ,struct efivar_entry*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct efivar_entry*) ;
 struct efivar_entry* FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_3)
{
 struct efivar_entry *VAR_4;
 int VAR_5;


 while (1) {
  VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
  if (!VAR_4)
   return;

  VAR_5 = FUNC_1(VAR_2, VAR_4,
      0, &VAR_1);
  if (!VAR_5)
   break;

  FUNC_0(VAR_4);
 }

 FUNC_2(VAR_4);
}
