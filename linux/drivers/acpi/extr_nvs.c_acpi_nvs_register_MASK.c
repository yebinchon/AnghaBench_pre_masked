
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvs_region {int node; void* size; void* phys_start; } ;
typedef void* __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvs_region* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (void*,void*) ;

int FUNC_3(__u64 VAR_3, __u64 VAR_4)
{
 struct nvs_region *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->phys_start = VAR_3;
 VAR_5->size = VAR_4;
 FUNC_1(&VAR_5->node, &VAR_2);

 return FUNC_2(VAR_3, VAR_4);
}
