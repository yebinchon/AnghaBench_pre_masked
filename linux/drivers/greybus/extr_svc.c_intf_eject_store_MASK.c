
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,char*,unsigned short) ;
 int FUNC_1 (struct gb_svc*,unsigned short) ;
 int FUNC_2 (char const*,int,unsigned short*) ;
 struct gb_svc* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, const char *VAR_2,
    size_t VAR_3)
{
 struct gb_svc *VAR_4 = FUNC_3(VAR_0);
 unsigned short VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, 10, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(VAR_0, "Forcibly trying to eject interface %d\n", VAR_5);

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_3;
}
