
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int start; int size; } ;
struct drm_mm {int dummy; } ;
typedef int rsvd_lo ;
typedef int rsvd_hi ;
typedef int node ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_mm_node*) ;
 int FUNC_1 (struct drm_mm*,int ,int) ;
 int FUNC_2 (struct drm_mm*,struct drm_mm_node*,int,int ,int ,unsigned int) ;
 int FUNC_3 (struct drm_mm_node*) ;
 int FUNC_4 (struct drm_mm*,struct drm_mm_node*) ;
 int FUNC_5 (struct drm_mm*) ;
 int FUNC_6 (struct drm_mm_node*,int ,int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_2)
{
 struct drm_mm VAR_3;
 struct drm_mm_node VAR_4, VAR_5, VAR_6;
 int VAR_7;

 FUNC_1(&VAR_3, 0, 7);

 FUNC_6(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.start = 1;
 VAR_4.size = 1;
 VAR_7 = FUNC_4(&VAR_3, &VAR_4);
 if (VAR_7) {
  FUNC_7("Could not reserve low node\n");
  goto err;
 }

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.start = 5;
 VAR_5.size = 1;
 VAR_7 = FUNC_4(&VAR_3, &VAR_5);
 if (VAR_7) {
  FUNC_7("Could not reserve low node\n");
  goto err_lo;
 }

 if (!FUNC_0(&VAR_4) || !FUNC_0(&VAR_5)) {
  FUNC_7("Expected a hole after lo and high nodes!\n");
  VAR_7 = -VAR_1;
  goto err_hi;
 }

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_7 = FUNC_2(&VAR_3, &VAR_6,
      2, 0, 0,
      VAR_2 | VAR_0);
 if (!VAR_7) {
  FUNC_7("Unexpectedly inserted the node into the wrong hole: node.start=%llx\n",
         VAR_6.start);
  VAR_7 = -VAR_1;
  goto err_node;
 }

 VAR_7 = FUNC_2(&VAR_3, &VAR_6, 2, 0, 0, VAR_2);
 if (VAR_7) {
  FUNC_7("Could not insert the node into the available hole!\n");
  VAR_7 = -VAR_1;
  goto err_hi;
 }

err_node:
 FUNC_3(&VAR_6);
err_hi:
 FUNC_3(&VAR_5);
err_lo:
 FUNC_3(&VAR_4);
err:
 FUNC_5(&VAR_3);
 return VAR_7;
}
