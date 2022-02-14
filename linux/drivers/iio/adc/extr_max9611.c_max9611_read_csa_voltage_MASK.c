
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct max9611_dev {int dummy; } ;
typedef enum max9611_csa_gain { ____Placeholder_max9611_csa_gain } max9611_csa_gain ;
typedef enum max9611_conf_ids { ____Placeholder_max9611_conf_ids } max9611_conf_ids ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct max9611_dev*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct max9611_dev *VAR_4,
        u16 *VAR_5,
        enum max9611_csa_gain *VAR_6)
{
 enum max9611_conf_ids VAR_7[] = {
  VAR_0,
  VAR_1,
  VAR_2
 };
 unsigned int VAR_8;
 int VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7); ++VAR_8) {
  VAR_9 = FUNC_1(VAR_4, VAR_7[VAR_8], VAR_5);
  if (VAR_9)
   return VAR_9;

  if (*VAR_5 > 0) {
   *VAR_6 = (enum max9611_csa_gain)VAR_7[VAR_8];
   return 0;
  }
 }

 return -VAR_3;
}
