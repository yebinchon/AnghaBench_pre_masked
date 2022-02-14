
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dbi {scalar_t__ reset; } ;
struct TYPE_2__ {struct device* dev; } ;
struct mipi_dbi_dev {scalar_t__ regulator; struct mipi_dbi dbi; TYPE_1__ drm; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct mipi_dbi*,int ) ;
 scalar_t__ FUNC_2 (struct mipi_dbi*) ;
 int FUNC_3 (struct mipi_dbi*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct mipi_dbi_dev *VAR_1, bool VAR_2)
{
 struct device *VAR_3 = VAR_1->drm.dev;
 struct mipi_dbi *VAR_4 = &VAR_1->dbi;
 int VAR_5;

 if (VAR_1->regulator) {
  VAR_5 = FUNC_6(VAR_1->regulator);
  if (VAR_5) {
   FUNC_0(VAR_3, "Failed to enable regulator (%d)\n", VAR_5);
   return VAR_5;
  }
 }

 if (VAR_2 && FUNC_2(VAR_4))
  return 1;

 FUNC_3(VAR_4);
 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_3, "Failed to send reset command (%d)\n", VAR_5);
  if (VAR_1->regulator)
   FUNC_5(VAR_1->regulator);
  return VAR_5;
 }






 if (VAR_4->reset)
  FUNC_7(5000, 20000);
 else
  FUNC_4(120);

 return 0;
}
