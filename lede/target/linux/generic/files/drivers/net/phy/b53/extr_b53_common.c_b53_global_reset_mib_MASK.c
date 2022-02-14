
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct switch_val {int dummy; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b53_device*,int ,int ,int*) ;
 int FUNC_1 (struct b53_device*,int ,int ,int) ;
 int FUNC_2 (int) ;
 struct b53_device* FUNC_3 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_4(struct switch_dev *VAR_3,
    const struct switch_attr *VAR_4,
    struct switch_val *VAR_5)
{
 struct b53_device *VAR_6 = FUNC_3(VAR_3);
 u8 VAR_7;

 FUNC_0(VAR_6, VAR_1, VAR_0, &VAR_7);

 FUNC_1(VAR_6, VAR_1, VAR_0, VAR_7 | VAR_2);
 FUNC_2(1);
 FUNC_1(VAR_6, VAR_1, VAR_0, VAR_7 & ~VAR_2);
 FUNC_2(1);

 return 0;
}
