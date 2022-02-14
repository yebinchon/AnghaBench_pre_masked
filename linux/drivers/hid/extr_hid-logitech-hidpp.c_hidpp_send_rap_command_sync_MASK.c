
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sub_id; int reg_address; int params; } ;
struct hidpp_report {int report_id; TYPE_1__ rap; } ;
struct hidpp_device {int very_long_report_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct hidpp_device*,struct hidpp_report*,struct hidpp_report*) ;
 int FUNC_1 (struct hidpp_report*) ;
 struct hidpp_report* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int*,int) ;

__attribute__((used)) static int FUNC_4(struct hidpp_device *VAR_5,
 u8 VAR_6, u8 VAR_7, u8 VAR_8, u8 *VAR_9, int VAR_10,
 struct hidpp_report *VAR_11)
{
 struct hidpp_report *VAR_12;
 int VAR_13, VAR_14;

 switch (VAR_6) {
 case 129:
  VAR_14 = VAR_4 - 4;
  break;
 case 130:
  VAR_14 = VAR_3 - 4;
  break;
 case 128:
  VAR_14 = VAR_5->very_long_report_length - 4;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_10 > VAR_14)
  return -VAR_0;

 VAR_12 = FUNC_2(sizeof(struct hidpp_report), VAR_2);
 if (!VAR_12)
  return -VAR_1;
 VAR_12->report_id = VAR_6;
 VAR_12->rap.sub_id = VAR_7;
 VAR_12->rap.reg_address = VAR_8;
 FUNC_3(&VAR_12->rap.params, VAR_9, VAR_10);

 VAR_13 = FUNC_0(VAR_5, VAR_12, VAR_11);
 FUNC_1(VAR_12);
 return VAR_13;
}
