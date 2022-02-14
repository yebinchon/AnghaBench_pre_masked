
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isku_report_button {int data1; int event; } ;
struct isku_device {int dummy; } ;




 int FUNC_0 (struct isku_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct isku_device *VAR_0,
  u8 const *VAR_1)
{
 struct isku_report_button const *VAR_2;

 switch (VAR_1[0]) {
 case 128:
  VAR_2 = (struct isku_report_button const *)VAR_1;
  switch (VAR_2->event) {
  case 129:
   FUNC_0(VAR_0, VAR_2->data1 - 1);
   break;
  }
  break;
 }
}
