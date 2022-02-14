
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct resource_map {int r_size; int r_vaddr; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, struct resource *VAR_4,
    struct resource_map *VAR_5)
{




 switch (VAR_3) {
 case 128:
  FUNC_0((vm_offset_t)VAR_5->r_vaddr, VAR_5->r_size);

 case 129:
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
