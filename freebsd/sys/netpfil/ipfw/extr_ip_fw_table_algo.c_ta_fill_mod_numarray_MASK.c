
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct table_info {int dummy; } ;
struct numarray_cfg {scalar_t__ size; int used; int main_ptr; } ;
struct numarray {int dummy; } ;
struct mod_item {scalar_t__ size; int main_ptr; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, struct table_info *VAR_1, void *VAR_2,
    uint64_t *VAR_3)
{
 struct mod_item *VAR_4;
 struct numarray_cfg *VAR_5;

 VAR_4 = (struct mod_item *)VAR_2;
 VAR_5 = (struct numarray_cfg *)VAR_0;


 if (VAR_5->size >= VAR_4->size) {
  *VAR_3 = 0;
  return (0);
 }

 FUNC_0(VAR_4->main_ptr, VAR_5->main_ptr, VAR_5->used * sizeof(struct numarray));

 return (0);
}
