
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct validate_op {int list; } ;
struct nouveau_cli {int dummy; } ;
struct nouveau_channel {int dummy; } ;
struct drm_nouveau_gem_pushbuf_bo {int dummy; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct nouveau_cli*,char*) ;
 int VAR_1 ;
 struct nouveau_cli* FUNC_2 (struct drm_file*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct validate_op*,struct nouveau_channel*,int *,int *) ;
 int FUNC_5 (struct nouveau_channel*,struct drm_file*,struct drm_nouveau_gem_pushbuf_bo*,int,struct validate_op*) ;
 int FUNC_6 (struct nouveau_channel*,struct nouveau_cli*,int *,struct drm_nouveau_gem_pushbuf_bo*,int ) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_channel *VAR_2,
        struct drm_file *VAR_3,
        struct drm_nouveau_gem_pushbuf_bo *VAR_4,
        uint64_t VAR_5, int VAR_6,
        struct validate_op *VAR_7, int *VAR_8)
{
 struct nouveau_cli *VAR_9 = FUNC_2(VAR_3);
 int VAR_10;

 FUNC_0(&VAR_7->list);

 if (VAR_6 == 0)
  return 0;

 VAR_10 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7);
 if (FUNC_3(VAR_10)) {
  if (VAR_10 != -VAR_0)
   FUNC_1(VAR_1, VAR_9, "validate_init\n");
  return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_2, VAR_9, &VAR_7->list, VAR_4, VAR_5);
 if (FUNC_3(VAR_10 < 0)) {
  if (VAR_10 != -VAR_0)
   FUNC_1(VAR_1, VAR_9, "validating bo list\n");
  FUNC_4(VAR_7, VAR_2, ((void*)0), ((void*)0));
  return VAR_10;
 }
 *VAR_8 = VAR_10;
 return 0;
}
