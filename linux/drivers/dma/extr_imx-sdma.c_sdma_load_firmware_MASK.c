
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_script_start_addrs {int ram_code_start_addr; } ;
struct sdma_firmware_header {scalar_t__ magic; int ram_code_start; int ram_code_size; int version_major; int script_addrs_start; int version_minor; } ;
struct sdma_engine {int dev; int clk_ahb; int clk_ipg; int script_number; } ;
struct firmware {int size; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct sdma_engine*,struct sdma_script_start_addrs const*) ;
 int FUNC_6 (struct sdma_engine*,unsigned short*,int,int ) ;

__attribute__((used)) static void FUNC_7(const struct firmware *VAR_5, void *VAR_6)
{
 struct sdma_engine *VAR_7 = VAR_6;
 const struct sdma_firmware_header *VAR_8;
 const struct sdma_script_start_addrs *VAR_9;
 unsigned short *VAR_10;

 if (!VAR_5) {
  FUNC_3(VAR_7->dev, "external firmware not found, using ROM firmware\n");

  return;
 }

 if (VAR_5->size < sizeof(*VAR_8))
  goto err_firmware;

 VAR_8 = (struct sdma_firmware_header *)VAR_5->data;

 if (VAR_8->magic != VAR_0)
  goto err_firmware;
 if (VAR_8->ram_code_start + VAR_8->ram_code_size > VAR_5->size)
  goto err_firmware;
 switch (VAR_8->version_major) {
 case 1:
  VAR_7->script_number = VAR_1;
  break;
 case 2:
  VAR_7->script_number = VAR_2;
  break;
 case 3:
  VAR_7->script_number = VAR_3;
  break;
 case 4:
  VAR_7->script_number = VAR_4;
  break;
 default:
  FUNC_2(VAR_7->dev, "unknown firmware version\n");
  goto err_firmware;
 }

 VAR_9 = (void *)VAR_8 + VAR_8->script_addrs_start;
 VAR_10 = (void *)VAR_8 + VAR_8->ram_code_start;

 FUNC_1(VAR_7->clk_ipg);
 FUNC_1(VAR_7->clk_ahb);

 FUNC_6(VAR_7, VAR_10,
   VAR_8->ram_code_size,
   VAR_9->ram_code_start_addr);
 FUNC_0(VAR_7->clk_ipg);
 FUNC_0(VAR_7->clk_ahb);

 FUNC_5(VAR_7, VAR_9);

 FUNC_3(VAR_7->dev, "loaded firmware %d.%d\n",
   VAR_8->version_major,
   VAR_8->version_minor);

err_firmware:
 FUNC_4(VAR_5);
}
