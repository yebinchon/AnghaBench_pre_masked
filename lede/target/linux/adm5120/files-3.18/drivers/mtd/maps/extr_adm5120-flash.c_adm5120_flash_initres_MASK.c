
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct map_info {int * virt; int phys; int name; } ;
struct TYPE_2__ {int window_size; struct map_info map; } ;
struct adm5120_flash_info {TYPE_1__ amap; int * res; } ;


 int VAR_0 ;
 int FUNC_0 (struct map_info*,char*) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct adm5120_flash_info *VAR_1)
{
 struct map_info *VAR_2 = &VAR_1->amap.map;
 int VAR_3 = 0;

 VAR_1->res = FUNC_2(VAR_2->phys, VAR_1->amap.window_size,
   VAR_2->name);
 if (VAR_1->res == ((void*)0)) {
  FUNC_0(VAR_2, "could not reserve memory region\n");
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_2->virt = FUNC_1(VAR_2->phys, VAR_1->amap.window_size);
 if (VAR_2->virt == ((void*)0)) {
  FUNC_0(VAR_2, "failed to ioremap flash region\n");
  VAR_3 = -VAR_0;
  goto out;
 }

out:
 return VAR_3;
}
