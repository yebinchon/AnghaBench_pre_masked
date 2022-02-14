
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct efivar_entry {struct list_head list; } ;


 int FUNC_0 (struct efivar_entry*,int) ;

__attribute__((used)) static int FUNC_1(struct efivar_entry *VAR_0,
           struct efivar_entry *VAR_1,
           struct list_head *VAR_2, bool VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, 1);

 if (VAR_4)
  return VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_0(VAR_1, &VAR_1->list != VAR_2);
 return VAR_4;
}
