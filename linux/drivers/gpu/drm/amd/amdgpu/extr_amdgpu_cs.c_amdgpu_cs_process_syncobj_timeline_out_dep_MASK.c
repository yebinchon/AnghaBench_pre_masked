
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_amdgpu_cs_chunk_syncobj {scalar_t__ point; int handle; } ;
struct amdgpu_cs_post_dep {scalar_t__ point; int * chain; int syncobj; } ;
struct amdgpu_cs_parser {scalar_t__ num_post_deps; int filp; struct amdgpu_cs_post_dep* post_deps; } ;
struct amdgpu_cs_chunk {int length_dw; scalar_t__ kdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 struct amdgpu_cs_post_dep* FUNC_3 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_cs_parser *VAR_3,
            struct amdgpu_cs_chunk *VAR_4)
{
 struct drm_amdgpu_cs_chunk_syncobj *VAR_5;
 unsigned VAR_6;
 int VAR_7;

 VAR_5 = (struct drm_amdgpu_cs_chunk_syncobj *)VAR_4->kdata;
 VAR_6 = VAR_4->length_dw * 4 /
  sizeof(struct drm_amdgpu_cs_chunk_syncobj);

 if (VAR_3->post_deps)
  return -VAR_0;

 VAR_3->post_deps = FUNC_3(VAR_6, sizeof(*VAR_3->post_deps),
         VAR_2);
 VAR_3->num_post_deps = 0;

 if (!VAR_3->post_deps)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  struct amdgpu_cs_post_dep *VAR_8 = &VAR_3->post_deps[VAR_7];

  VAR_8->chain = ((void*)0);
  if (VAR_5[VAR_7].point) {
   VAR_8->chain = FUNC_2(sizeof(*VAR_8->chain), VAR_2);
   if (!VAR_8->chain)
    return -VAR_1;
  }

  VAR_8->syncobj = FUNC_0(VAR_3->filp,
      VAR_5[VAR_7].handle);
  if (!VAR_8->syncobj) {
   FUNC_1(VAR_8->chain);
   return -VAR_0;
  }
  VAR_8->point = VAR_5[VAR_7].point;
  VAR_3->num_post_deps++;
 }

 return 0;
}
