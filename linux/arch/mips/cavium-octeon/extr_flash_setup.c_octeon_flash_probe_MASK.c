
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int base; scalar_t__ width; scalar_t__ en; } ;
union cvmx_mio_boot_reg_cfgx {TYPE_2__ s; int u64; } ;
typedef int u32 ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_11__ {char* name; int phys; int size; int copy_to; int copy_from; int write; int read; scalar_t__ bankwidth; int virt; } ;
struct TYPE_10__ {int owner; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (char*,TYPE_5__*) ;
 TYPE_5__ VAR_1 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int ,int *,int *,int ) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct device_node*,char*,int *) ;
 int VAR_7 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 union cvmx_mio_boot_reg_cfgx VAR_9;
 u32 VAR_10;
 int VAR_11;
 struct device_node *VAR_12 = VAR_8->dev.of_node;

 VAR_11 = FUNC_7(VAR_12, "reg", &VAR_10);
 if (VAR_11)
  return VAR_11;





 VAR_9.u64 = FUNC_2(FUNC_0(VAR_10));
 if (VAR_9.s.en) {
  VAR_1.name = "phys_mapped_flash";
  VAR_1.phys = VAR_9.s.base << 16;
  VAR_1.size = 0x1fc00000 - VAR_1.phys;

  VAR_1.bankwidth = VAR_9.s.width + 1;
  VAR_1.virt = FUNC_4(VAR_1.phys, VAR_1.size);
  FUNC_9("Bootbus flash: Setting flash for %luMB flash at "
     "0x%08llx\n", VAR_1.size >> 20, VAR_1.phys);
  FUNC_1(!FUNC_5(VAR_1.bankwidth));
  VAR_1.read = VAR_5;
  VAR_1.write = VAR_6;
  VAR_1.copy_from = VAR_3;
  VAR_1.copy_to = VAR_4;
  VAR_2 = FUNC_3("cfi_probe", &VAR_1);
  if (VAR_2) {
   VAR_2->owner = VAR_0;
   FUNC_6(VAR_2, VAR_7,
        ((void*)0), ((void*)0), 0);
  } else {
   FUNC_8("Failed to register MTD device for flash\n");
  }
 }
 return 0;
}
