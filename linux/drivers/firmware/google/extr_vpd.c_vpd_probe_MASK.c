
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbmem_addr; } ;
struct coreboot_device {TYPE_1__ cbmem_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct coreboot_device *VAR_3)
{
 int VAR_4;

 VAR_2 = FUNC_0("vpd", VAR_1);
 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3->cbmem_ref.cbmem_addr);
 if (VAR_4) {
  FUNC_1(VAR_2);
  return VAR_4;
 }

 return 0;
}
