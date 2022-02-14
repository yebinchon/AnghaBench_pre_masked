
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; unsigned long start; int flags; void* end; } ;
struct TYPE_3__ {char* name; unsigned long start; int flags; void* end; } ;
struct xtalk_bridge_platform_data {int masterwid; unsigned long mem_offset; unsigned long io_offset; TYPE_2__ io; TYPE_1__ mem; int nasid; scalar_t__ intr_addr; int bridge_addr; } ;
struct platform_device {int dummy; } ;
typedef int nasid_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct xtalk_bridge_platform_data*) ;
 struct xtalk_bridge_platform_data* FUNC_4 (int,int ) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,struct xtalk_bridge_platform_data*,int) ;
 struct platform_device* FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*,int ,int) ;

__attribute__((used)) static void FUNC_10(nasid_t VAR_7, int VAR_8, int VAR_9)
{
 struct xtalk_bridge_platform_data *VAR_10;
 struct platform_device *VAR_11;
 unsigned long VAR_12;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_0);
 if (!VAR_10)
  goto no_mem;
 VAR_11 = FUNC_7("xtalk-bridge", VAR_4);
 if (!VAR_11) {
  FUNC_3(VAR_10);
  goto no_mem;
 }

 VAR_12 = FUNC_1(VAR_7);

 VAR_10->bridge_addr = FUNC_2(VAR_7, VAR_8);
 VAR_10->intr_addr = FUNC_0(47) + 0x01800000 + VAR_3;
 VAR_10->nasid = VAR_7;
 VAR_10->masterwid = VAR_9;

 VAR_10->mem.name = "Bridge PCI MEM";
 VAR_10->mem.start = VAR_12 + (VAR_8 << VAR_6);
 VAR_10->mem.end = VAR_10->mem.start + VAR_5 - 1;
 VAR_10->mem.flags = VAR_2;
 VAR_10->mem_offset = VAR_12;

 VAR_10->io.name = "Bridge PCI IO";
 VAR_10->io.start = VAR_12 + (VAR_8 << VAR_6);
 VAR_10->io.end = VAR_10->io.start + VAR_5 - 1;
 VAR_10->io.flags = VAR_1;
 VAR_10->io_offset = VAR_12;

 FUNC_6(VAR_11, VAR_10, sizeof(*VAR_10));
 FUNC_5(VAR_11);
 FUNC_8("xtalk:n%d/%x bridge widget\n", VAR_7, VAR_8);
 return;

no_mem:
 FUNC_9("xtalk:n%d/%x bridge create out of memory\n", VAR_7, VAR_8);
}
