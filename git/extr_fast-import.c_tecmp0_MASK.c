
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree_entry {TYPE_1__* versions; TYPE_2__* name; } ;
struct TYPE_4__ {int str_len; int str_dat; } ;
struct TYPE_3__ {int mode; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1 (const void *VAR_0, const void *VAR_1)
{
 struct tree_entry *VAR_2 = *((struct tree_entry**)VAR_0);
 struct tree_entry *VAR_3 = *((struct tree_entry**)VAR_1);
 return FUNC_0(
  VAR_2->name->str_dat, VAR_2->name->str_len, VAR_2->versions[0].mode,
  VAR_3->name->str_dat, VAR_3->name->str_len, VAR_3->versions[0].mode);
}
