
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_device {TYPE_1__* agp; } ;
struct drm_agp_mem {unsigned long handle; unsigned long pages; int head; scalar_t__ bound; struct agp_memory* memory; } ;
struct drm_agp_buffer {int size; unsigned long handle; int physical; scalar_t__ type; } ;
struct agp_memory {int physical; scalar_t__ key; } ;
struct TYPE_2__ {int memory; int bridge; int acquired; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct agp_memory* FUNC_0 (int ,unsigned long,scalar_t__) ;
 int FUNC_1 (struct drm_agp_mem*) ;
 struct drm_agp_mem* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(struct drm_device *VAR_4, struct drm_agp_buffer *VAR_5)
{
 struct drm_agp_mem *VAR_6;
 struct agp_memory *VAR_7;
 unsigned long VAR_8;
 u32 VAR_9;

 if (!VAR_4->agp || !VAR_4->agp->acquired)
  return -VAR_0;
 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_8 = (VAR_5->size + VAR_3 - 1) / VAR_3;
 VAR_9 = (u32) VAR_5->type;
 VAR_7 = FUNC_0(VAR_4->agp->bridge, VAR_8, VAR_9);
 if (!VAR_7) {
  FUNC_1(VAR_6);
  return -VAR_1;
 }

 VAR_6->handle = (unsigned long)VAR_7->key + 1;
 VAR_6->memory = VAR_7;
 VAR_6->bound = 0;
 VAR_6->pages = VAR_8;
 FUNC_3(&VAR_6->head, &VAR_4->agp->memory);

 VAR_5->handle = VAR_6->handle;
 VAR_5->physical = VAR_7->physical;

 return 0;
}
