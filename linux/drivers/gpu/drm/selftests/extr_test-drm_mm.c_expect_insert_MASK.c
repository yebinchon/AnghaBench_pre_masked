
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct insert_mode {int name; int mode; } ;
struct drm_mm_node {int dummy; } ;
struct drm_mm {int dummy; } ;


 int FUNC_0 (struct drm_mm_node*,struct drm_mm*,int ,int ,unsigned long) ;
 int FUNC_1 (struct drm_mm*,struct drm_mm_node*,int ,int ,unsigned long,int ) ;
 int FUNC_2 (struct drm_mm_node*) ;
 int FUNC_3 (char*,int ,int ,unsigned long,int ,int) ;

__attribute__((used)) static bool FUNC_4(struct drm_mm *VAR_0, struct drm_mm_node *VAR_1,
     u64 VAR_2, u64 VAR_3, unsigned long VAR_4,
     const struct insert_mode *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1,
      VAR_2, VAR_3, VAR_4,
      VAR_5->mode);
 if (VAR_6) {
  FUNC_3("insert (size=%llu, alignment=%llu, color=%lu, mode=%s) failed with err=%d\n",
         VAR_2, VAR_3, VAR_4, VAR_5->name, VAR_6);
  return 0;
 }

 if (!FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4)) {
  FUNC_2(VAR_1);
  return 0;
 }

 return 1;
}
