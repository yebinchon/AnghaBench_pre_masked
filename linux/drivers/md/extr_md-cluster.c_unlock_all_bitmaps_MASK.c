
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nodes; } ;
struct mddev {TYPE_1__ bitmap_info; struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {scalar_t__* other_bitmap_lockres; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mddev *VAR_0)
{
 struct md_cluster_info *VAR_1 = VAR_0->cluster_info;
 int VAR_2;


 if (VAR_1->other_bitmap_lockres) {
  for (VAR_2 = 0; VAR_2 < VAR_0->bitmap_info.nodes - 1; VAR_2++) {
   if (VAR_1->other_bitmap_lockres[VAR_2]) {
    FUNC_1(VAR_1->other_bitmap_lockres[VAR_2]);
   }
  }
  FUNC_0(VAR_1->other_bitmap_lockres);
 }
}
