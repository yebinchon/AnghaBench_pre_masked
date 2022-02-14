
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {scalar_t__ name; void* data; int * ops; } ;
struct dw_hdmi {int dev; TYPE_2__ phy; TYPE_1__* plat_data; } ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ name; int configure; } ;
struct TYPE_5__ {scalar_t__ phy_name; int configure_phy; void* phy_data; int * phy_ops; scalar_t__ phy_force_vendor; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct dw_hdmi*,int ) ;

__attribute__((used)) static int FUNC_3(struct dw_hdmi *VAR_5)
{
 unsigned int VAR_6;
 u8 VAR_7;

 VAR_7 = VAR_5->plat_data->phy_force_vendor ?
    VAR_0 :
    FUNC_2(VAR_5, VAR_2);

 if (VAR_7 == VAR_0) {

  if (!VAR_5->plat_data->phy_ops || !VAR_5->plat_data->phy_name) {
   FUNC_1(VAR_5->dev,
    "Vendor HDMI PHY not supported by glue layer\n");
   return -VAR_1;
  }

  VAR_5->phy.ops = VAR_5->plat_data->phy_ops;
  VAR_5->phy.data = VAR_5->plat_data->phy_data;
  VAR_5->phy.name = VAR_5->plat_data->phy_name;
  return 0;
 }


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); ++VAR_6) {
  if (VAR_3[VAR_6].type == VAR_7) {
   VAR_5->phy.ops = &VAR_4;
   VAR_5->phy.name = VAR_3[VAR_6].name;
   VAR_5->phy.data = (void *)&VAR_3[VAR_6];

   if (!VAR_3[VAR_6].configure &&
       !VAR_5->plat_data->configure_phy) {
    FUNC_1(VAR_5->dev, "%s requires platform support\n",
     VAR_5->phy.name);
    return -VAR_1;
   }

   return 0;
  }
 }

 FUNC_1(VAR_5->dev, "Unsupported HDMI PHY type (%02x)\n", VAR_7);
 return -VAR_1;
}
