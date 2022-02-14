
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_entry {int name; } ;
struct ref_dir {int dummy; } ;


 int FUNC_0 (struct ref_dir*,struct ref_entry*) ;
 struct ref_dir* FUNC_1 (struct ref_dir*,int ,int) ;

int FUNC_2(struct ref_dir *VAR_0, struct ref_entry *VAR_1)
{
 VAR_0 = FUNC_1(VAR_0, VAR_1->name, 1);
 if (!VAR_0)
  return -1;
 FUNC_0(VAR_0, VAR_1);
 return 0;
}
