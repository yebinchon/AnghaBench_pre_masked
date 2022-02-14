
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vc4_label {char const* name; scalar_t__ num_allocated; scalar_t__ size_allocated; } ;
struct vc4_dev {int num_labels; struct vc4_label* bo_labels; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 struct vc4_label* FUNC_2 (struct vc4_label*,int,int ) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int FUNC_4(struct vc4_dev *VAR_1, const char *VAR_2)
{
 int VAR_3;
 int VAR_4 = -1;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_labels; VAR_3++) {
  if (!VAR_1->bo_labels[VAR_3].name) {
   VAR_4 = VAR_3;
  } else if (FUNC_3(VAR_1->bo_labels[VAR_3].name, VAR_2) == 0) {
   FUNC_1(VAR_2);
   return VAR_3;
  }
 }

 if (VAR_4 != -1) {
  FUNC_0(VAR_1->bo_labels[VAR_4].num_allocated != 0);
  VAR_1->bo_labels[VAR_4].name = VAR_2;
  return VAR_4;
 } else {
  u32 VAR_5 = VAR_1->num_labels + 1;
  struct vc4_label *VAR_6 =
   FUNC_2(VAR_1->bo_labels,
     VAR_5 * sizeof(*VAR_6),
     VAR_0);

  if (!VAR_6) {
   FUNC_1(VAR_2);
   return -1;
  }

  VAR_4 = VAR_1->num_labels;
  VAR_1->bo_labels = VAR_6;
  VAR_1->num_labels = VAR_5;

  VAR_1->bo_labels[VAR_4].name = VAR_2;
  VAR_1->bo_labels[VAR_4].num_allocated = 0;
  VAR_1->bo_labels[VAR_4].size_allocated = 0;

  return VAR_4;
 }
}
