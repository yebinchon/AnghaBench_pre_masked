
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_rsb_device {int dummy; } ;
struct sunxi_rsb_ctx {int size; struct sunxi_rsb_device* rdev; } ;
struct regmap_config {int val_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sunxi_rsb_ctx* FUNC_0 (int ) ;
 int VAR_2 ;
 struct sunxi_rsb_ctx* FUNC_1 (int,int ) ;

__attribute__((used)) static struct sunxi_rsb_ctx *FUNC_2(struct sunxi_rsb_device *VAR_3,
  const struct regmap_config *VAR_4)
{
 struct sunxi_rsb_ctx *VAR_5;

 switch (VAR_4->val_bits) {
 case 8:
 case 16:
 case 32:
  break;
 default:
  return FUNC_0(-VAR_0);
 }

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_5->rdev = VAR_3;
 VAR_5->size = VAR_4->val_bits / 8;

 return VAR_5;
}
