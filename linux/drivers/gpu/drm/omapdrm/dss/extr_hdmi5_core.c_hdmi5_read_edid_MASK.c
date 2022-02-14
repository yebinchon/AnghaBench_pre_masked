
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdmi_core_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdmi_core_data*,int*,int) ;
 int FUNC_1 (struct hdmi_core_data*) ;
 int FUNC_2 (struct hdmi_core_data*) ;

int FUNC_3(struct hdmi_core_data *VAR_2, u8 *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = (VAR_4 / 128) - 1;

 if (VAR_4 < 128)
  return -VAR_1;

 FUNC_1(VAR_2);

 VAR_5 = FUNC_0(VAR_2, VAR_3, 0);
 if (VAR_5)
  goto out;

 VAR_6 = VAR_3[0x7e];

 if (VAR_6 > VAR_8)
  VAR_6 = VAR_8;

 for (VAR_7 = 1; VAR_7 <= VAR_6; VAR_7++) {
  VAR_5 = FUNC_0(VAR_2, VAR_3 + VAR_7 * VAR_0, VAR_7);
  if (VAR_5)
   goto out;
 }

out:
 FUNC_2(VAR_2);

 return VAR_5 ? VAR_5 : VAR_4;
}
