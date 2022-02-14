
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_amdgpu_cs_chunk_sem {int handle; } ;
struct amdgpu_cs_parser {scalar_t__ num_post_deps; TYPE_1__* post_deps; int filp; } ;
struct amdgpu_cs_chunk {int length_dw; scalar_t__ kdata; } ;
struct TYPE_2__ {scalar_t__ point; int * chain; int syncobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_cs_parser *VAR_3,
          struct amdgpu_cs_chunk *VAR_4)
{
 struct drm_amdgpu_cs_chunk_sem *VAR_5;
 unsigned VAR_6;
 int VAR_7;

 VAR_5 = (struct drm_amdgpu_cs_chunk_sem *)VAR_4->kdata;
 VAR_6 = VAR_4->length_dw * 4 /
  sizeof(struct drm_amdgpu_cs_chunk_sem);

 if (VAR_3->post_deps)
  return -VAR_0;

 VAR_3->post_deps = FUNC_1(VAR_6, sizeof(*VAR_3->post_deps),
         VAR_2);
 VAR_3->num_post_deps = 0;

 if (!VAR_3->post_deps)
  return -VAR_1;


 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  VAR_3->post_deps[VAR_7].syncobj =
   FUNC_0(VAR_3->filp, VAR_5[VAR_7].handle);
  if (!VAR_3->post_deps[VAR_7].syncobj)
   return -VAR_0;
  VAR_3->post_deps[VAR_7].chain = ((void*)0);
  VAR_3->post_deps[VAR_7].point = 0;
  VAR_3->num_post_deps++;
 }

 return 0;
}
