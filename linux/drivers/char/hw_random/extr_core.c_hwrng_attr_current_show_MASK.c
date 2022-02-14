
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {char* name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct hwrng*) ;
 int VAR_0 ;
 int FUNC_1 (struct hwrng*) ;
 struct hwrng* FUNC_2 () ;
 int FUNC_3 (struct hwrng*) ;
 int FUNC_4 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
           struct device_attribute *VAR_2,
           char *VAR_3)
{
 ssize_t VAR_4;
 struct hwrng *VAR_5;

 VAR_5 = FUNC_2();
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4 = FUNC_4(VAR_3, VAR_0, "%s\n", VAR_5 ? VAR_5->name : "none");
 FUNC_3(VAR_5);

 return VAR_4;
}
