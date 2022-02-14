
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct device {int dummy; } ;
struct cros_ec_keyb {int* valid_keys; int cols; struct device* dev; } ;


 int FUNC_0 (struct device*,char*,int,int,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct cros_ec_keyb *VAR_0, uint8_t *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 struct device *VAR_6 = VAR_0->dev;
 uint8_t *VAR_7 = VAR_0->valid_keys;
 for (VAR_2 = 0; VAR_2 < VAR_0->cols; VAR_2++) {
  VAR_4 = VAR_1[VAR_2] & VAR_7[VAR_2];
  for (VAR_3 = VAR_2 + 1; VAR_3 < VAR_0->cols; VAR_3++) {
   VAR_5 = VAR_1[VAR_3] & VAR_7[VAR_3];
   if (FUNC_1(VAR_4 & VAR_5) > 1) {
    FUNC_0(VAR_6, "ghost found at: B[%02d]:0x%02x & B[%02d]:0x%02x",
     VAR_2, VAR_4, VAR_3, VAR_5);
    return 1;
   }
  }
 }

 return 0;
}
