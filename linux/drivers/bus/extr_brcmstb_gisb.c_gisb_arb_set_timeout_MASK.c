
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct brcmstb_gisb_arb_device {int lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct brcmstb_gisb_arb_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct brcmstb_gisb_arb_device*,int,int ) ;
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct brcmstb_gisb_arb_device *VAR_6 = FUNC_0(VAR_2);
 int VAR_7, VAR_8;

 VAR_8 = FUNC_2(VAR_4, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 == 0 || VAR_7 >= 0xffffffff)
  return -VAR_1;

 FUNC_3(&VAR_6->lock);
 FUNC_1(VAR_6, VAR_7, VAR_0);
 FUNC_4(&VAR_6->lock);

 return VAR_5;
}
