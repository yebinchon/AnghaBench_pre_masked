
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct touchscreen_properties {int dummy; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,unsigned int) ;
 int FUNC_1 (struct touchscreen_properties const*,unsigned int*,unsigned int*) ;

void FUNC_2(struct input_dev *VAR_4,
       const struct touchscreen_properties *VAR_5,
       unsigned int VAR_6, unsigned int VAR_7,
       bool VAR_8)
{
 FUNC_1(VAR_5, &VAR_6, &VAR_7);
 FUNC_0(VAR_4, VAR_8 ? VAR_0 : VAR_2, VAR_6);
 FUNC_0(VAR_4, VAR_8 ? VAR_1 : VAR_3, VAR_7);
}
