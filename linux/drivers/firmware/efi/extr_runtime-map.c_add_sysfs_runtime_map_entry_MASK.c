
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_4__ {int * kset; } ;
struct efi_runtime_map_entry {TYPE_1__ kobj; int md; } ;
typedef int efi_memory_desc_t ;


 int VAR_0 ;
 struct efi_runtime_map_entry* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,char*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (char*,int *,struct kobject*) ;
 int FUNC_5 (int *) ;
 struct efi_runtime_map_entry* FUNC_6 (int,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static struct efi_runtime_map_entry *
FUNC_8(struct kobject *VAR_4, int VAR_5,
       efi_memory_desc_t *VAR_6)
{
 int VAR_7;
 struct efi_runtime_map_entry *VAR_8;

 if (!VAR_2) {
  VAR_2 = FUNC_4("runtime-map", ((void*)0), VAR_4);
  if (!VAR_2)
   return FUNC_0(-VAR_0);
 }

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  FUNC_5(VAR_2);
  VAR_2 = ((void*)0);
  return FUNC_0(-VAR_0);
 }

 FUNC_7(&VAR_8->md, VAR_6, sizeof(efi_memory_desc_t));

 FUNC_2(&VAR_8->kobj, &VAR_3);
 VAR_8->kobj.kset = VAR_2;
 VAR_7 = FUNC_1(&VAR_8->kobj, ((void*)0), "%d", VAR_5);
 if (VAR_7) {
  FUNC_3(&VAR_8->kobj);
  FUNC_5(VAR_2);
  VAR_2 = ((void*)0);
  return FUNC_0(VAR_7);
 }

 return VAR_8;
}
