
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union extcon_property_value {scalar_t__ intval; } ;
typedef int u8 ;
struct extcon_dev {int dummy; } ;
struct cdn_dp_port {struct extcon_dev* extcon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct extcon_dev*,int ,int ,union extcon_property_value*) ;
 int FUNC_1 (struct extcon_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct cdn_dp_port *VAR_2)
{
 struct extcon_dev *VAR_3 = VAR_2->extcon;
 union extcon_property_value VAR_4;
 int VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (VAR_5 > 0) {
  FUNC_0(VAR_3, VAR_0,
        VAR_1, &VAR_4);
  if (VAR_4.intval)
   VAR_6 = 2;
  else
   VAR_6 = 4;
 } else {
  VAR_6 = 0;
 }

 return VAR_6;
}
