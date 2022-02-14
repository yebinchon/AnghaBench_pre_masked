
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct drm_mm_node {void* size; void* start; } ;



__attribute__((used)) static struct drm_mm_node *FUNC_0(struct drm_mm_node *VAR_0,
        u64 VAR_1, u64 VAR_2)
{
 VAR_0->start = VAR_1;
 VAR_0->size = VAR_2;
 return VAR_0;
}
