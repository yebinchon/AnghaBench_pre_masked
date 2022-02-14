
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uclogic_params {scalar_t__ pen_unused; } ;
struct uclogic_drvdata {struct uclogic_params params; } ;
struct hid_usage {int dummy; } ;
struct hid_input {int dummy; } ;
struct hid_field {scalar_t__ application; } ;
struct hid_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct uclogic_drvdata* FUNC_0 (struct hid_device*) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_1,
     struct hid_input *VAR_2,
     struct hid_field *VAR_3,
     struct hid_usage *VAR_4,
     unsigned long **VAR_5,
     int *VAR_6)
{
 struct uclogic_drvdata *VAR_7 = FUNC_0(VAR_1);
 struct uclogic_params *VAR_8 = &VAR_7->params;


 if (VAR_8->pen_unused && (VAR_3->application == VAR_0))
  return -1;


 return 0;
}
