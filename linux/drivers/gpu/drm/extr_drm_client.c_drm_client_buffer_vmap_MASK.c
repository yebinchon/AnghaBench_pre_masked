
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_client_buffer {void* vaddr; int gem; } ;


 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;

void *FUNC_2(struct drm_client_buffer *VAR_0)
{
 void *VAR_1;

 if (VAR_0->vaddr)
  return VAR_0->vaddr;
 VAR_1 = FUNC_1(VAR_0->gem);
 if (FUNC_0(VAR_1))
  return VAR_1;

 VAR_0->vaddr = VAR_1;

 return VAR_1;
}
