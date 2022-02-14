
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfl_feature_id {scalar_t__ id; } ;
struct dfl_feature_driver {struct dfl_feature_id* id_table; } ;
struct dfl_feature {scalar_t__ id; } ;



__attribute__((used)) static bool FUNC_0(struct dfl_feature *VAR_0,
      struct dfl_feature_driver *VAR_1)
{
 const struct dfl_feature_id *VAR_2 = VAR_1->id_table;

 if (VAR_2) {
  while (VAR_2->id) {
   if (VAR_2->id == VAR_0->id)
    return 1;
   VAR_2++;
  }
 }
 return 0;
}
