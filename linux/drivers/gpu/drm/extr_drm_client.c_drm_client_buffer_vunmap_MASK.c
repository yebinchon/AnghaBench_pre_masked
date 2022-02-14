
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_client_buffer {int * vaddr; int gem; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct drm_client_buffer *VAR_0)
{
 FUNC_0(VAR_0->gem, VAR_0->vaddr);
 VAR_0->vaddr = ((void*)0);
}
