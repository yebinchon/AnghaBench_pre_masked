
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_ldb_channel {int ddc; int edid; scalar_t__ panel; } ;
struct imx_ldb {struct imx_ldb_channel* channel; } ;
struct device {int dummy; } ;


 struct imx_ldb* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1,
 void *VAR_2)
{
 struct imx_ldb *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  struct imx_ldb_channel *VAR_5 = &VAR_3->channel[VAR_4];

  if (VAR_5->panel)
   FUNC_1(VAR_5->panel);

  FUNC_3(VAR_5->edid);
  FUNC_2(VAR_5->ddc);
 }
}
