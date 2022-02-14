
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nodes; } ;
struct mddev {TYPE_1__ bitmap_info; struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {TYPE_2__** other_bitmap_lockres; } ;
struct dlm_lock_resource {int dummy; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__** FUNC_1 (int,int,int ) ;
 TYPE_2__* FUNC_2 (struct mddev*,char*,int *,int) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_7(struct mddev *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8 = 1, VAR_9 = 0;
 char VAR_10[64];
 struct md_cluster_info *VAR_11 = VAR_4->cluster_info;

 VAR_11->other_bitmap_lockres =
  FUNC_1(VAR_4->bitmap_info.nodes - 1,
   sizeof(struct dlm_lock_resource *), VAR_3);
 if (!VAR_11->other_bitmap_lockres) {
  FUNC_4("md: can't alloc mem for other bitmap locks\n");
  return 0;
 }

 VAR_6 = FUNC_5(VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_4->bitmap_info.nodes; VAR_5++) {
  if (VAR_5 == VAR_6)
   continue;

  FUNC_3(VAR_10, '\0', 64);
  FUNC_6(VAR_10, 64, "bitmap%04d", VAR_5);
  VAR_11->other_bitmap_lockres[VAR_9] = FUNC_2(VAR_4, VAR_10, ((void*)0), 1);
  if (!VAR_11->other_bitmap_lockres[VAR_9])
   return -VAR_2;

  VAR_11->other_bitmap_lockres[VAR_9]->flags |= VAR_0;
  VAR_7 = FUNC_0(VAR_11->other_bitmap_lockres[VAR_9], VAR_1);
  if (VAR_7)
   VAR_8 = -1;
  VAR_9++;
 }

 return VAR_8;
}
