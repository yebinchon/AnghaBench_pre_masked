
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_lsm6dsx_hw {TYPE_2__* settings; int dev; int regmap; } ;
struct TYPE_5__ {int wai; TYPE_1__* id; } ;
struct TYPE_4__ {int hw_id; char* name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct st_lsm6dsx_hw *VAR_4, int VAR_5,
       const char **VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   if (VAR_5 == VAR_3[VAR_8].id[VAR_9].hw_id)
    break;
  }
  if (VAR_9 < VAR_1)
   break;
 }

 if (VAR_8 == FUNC_0(VAR_3)) {
  FUNC_1(VAR_4->dev, "unsupported hw id [%02x]\n", VAR_5);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_4->regmap, VAR_2, &VAR_10);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4->dev, "failed to read whoami register\n");
  return VAR_7;
 }

 if (VAR_10 != VAR_3[VAR_8].wai) {
  FUNC_1(VAR_4->dev, "unsupported whoami [%02x]\n", VAR_10);
  return -VAR_0;
 }

 *VAR_6 = VAR_3[VAR_8].id[VAR_9].name;
 VAR_4->settings = &VAR_3[VAR_8];

 return 0;
}
