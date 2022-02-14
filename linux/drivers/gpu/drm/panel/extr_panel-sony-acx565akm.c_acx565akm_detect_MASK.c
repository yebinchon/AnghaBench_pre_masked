
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct acx565akm_panel {int enabled; char* name; int has_bc; int has_cabc; int reset_gpio; int revision; TYPE_1__* spi; int * display_id; int model; } ;
typedef int __be32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acx565akm_panel*,int ,int *,int) ;
 int FUNC_2 (int *,char*,char*,int,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,char*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct acx565akm_panel *VAR_7)
{
 __be32 VAR_8;
 u32 VAR_9;
 int VAR_10 = 0;





 FUNC_5(VAR_7->reset_gpio, 1);
 FUNC_6(5000, 10000);

 FUNC_1(VAR_7, VAR_6, (u8 *)&VAR_8, 4);
 VAR_9 = FUNC_0(VAR_8);
 VAR_7->enabled = (VAR_9 & (1 << 17)) && (VAR_9 & (1 << 10));

 FUNC_2(&VAR_7->spi->dev,
  "LCD panel %s by bootloader (status 0x%04x)\n",
  VAR_7->enabled ? "enabled" : "disabled ", VAR_9);

 FUNC_1(VAR_7, VAR_5, VAR_7->display_id, 3);
 FUNC_2(&VAR_7->spi->dev, "MIPI display ID: %02x%02x%02x\n",
  VAR_7->display_id[0], VAR_7->display_id[1], VAR_7->display_id[2]);

 switch (VAR_7->display_id[0]) {
 case 0x10:
  VAR_7->model = VAR_1;
  VAR_7->name = "acx565akm";
  VAR_7->has_bc = 1;
  VAR_7->has_cabc = 1;
  break;
 case 0x29:
  VAR_7->model = VAR_2;
  VAR_7->name = "l4f00311";
  break;
 case 0x45:
  VAR_7->model = VAR_3;
  VAR_7->name = "lph8923";
  break;
 case 0x83:
  VAR_7->model = VAR_4;
  VAR_7->name = "ls041y3";
  break;
 default:
  VAR_7->name = "unknown";
  FUNC_3(&VAR_7->spi->dev, "unknown display ID\n");
  VAR_10 = -VAR_0;
  goto done;
 }

 VAR_7->revision = VAR_7->display_id[1];

 FUNC_4(&VAR_7->spi->dev, "%s rev %02x panel detected\n",
   VAR_7->name, VAR_7->revision);

done:
 if (!VAR_7->enabled)
  FUNC_5(VAR_7->reset_gpio, 0);

 return VAR_10;
}
