
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hdmi_core_data {int base; } ;
struct cec_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hdmi_core_data* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_3, u8 VAR_4)
{
 struct hdmi_core_data *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 if (VAR_4 == VAR_0) {
  FUNC_2(VAR_5->base, VAR_2, 0);
  FUNC_2(VAR_5->base, VAR_1, 0);
  return 0;
 }
 if (VAR_4 <= 7) {
  VAR_6 = FUNC_1(VAR_5->base, VAR_2);
  VAR_6 |= 1 << VAR_4;
  FUNC_2(VAR_5->base, VAR_2, VAR_6);
 } else {
  VAR_6 = FUNC_1(VAR_5->base, VAR_1);
  VAR_6 |= 1 << (VAR_4 - 8);
  FUNC_2(VAR_5->base, VAR_1, VAR_6);
 }
 return 0;
}
