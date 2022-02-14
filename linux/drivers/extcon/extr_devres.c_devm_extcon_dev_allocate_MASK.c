
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct extcon_dev {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct extcon_dev* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct extcon_dev*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct extcon_dev**) ;
 struct extcon_dev** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct extcon_dev**) ;
 struct extcon_dev* FUNC_5 (unsigned int const*) ;

struct extcon_dev *FUNC_6(struct device *VAR_3,
     const unsigned int *VAR_4)
{
 struct extcon_dev **VAR_5, *VAR_6;

 VAR_5 = FUNC_3(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_5(VAR_4);
 if (FUNC_1(VAR_6)) {
  FUNC_4(VAR_5);
  return VAR_6;
 }

 VAR_6->dev.parent = VAR_3;

 *VAR_5 = VAR_6;
 FUNC_2(VAR_3, VAR_5);

 return VAR_6;
}
