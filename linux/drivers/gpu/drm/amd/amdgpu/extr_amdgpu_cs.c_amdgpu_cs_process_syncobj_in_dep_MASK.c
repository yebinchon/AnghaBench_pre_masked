
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_amdgpu_cs_chunk_sem {int handle; } ;
struct amdgpu_cs_parser {int dummy; } ;
struct amdgpu_cs_chunk {int length_dw; scalar_t__ kdata; } ;


 int FUNC_0 (struct amdgpu_cs_parser*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_cs_parser *VAR_0,
         struct amdgpu_cs_chunk *VAR_1)
{
 struct drm_amdgpu_cs_chunk_sem *VAR_2;
 unsigned VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = (struct drm_amdgpu_cs_chunk_sem *)VAR_1->kdata;
 VAR_3 = VAR_1->length_dw * 4 /
  sizeof(struct drm_amdgpu_cs_chunk_sem);
 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  VAR_5 = FUNC_0(VAR_0, VAR_2[VAR_4].handle,
         0, 0);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
