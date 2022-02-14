
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {scalar_t__* duration; scalar_t__ duration_adjusted; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,int,int,int,char*) ;
 struct tpm_chip* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3, struct device_attribute *VAR_4,
         char *VAR_5)
{
 struct tpm_chip *VAR_6 = FUNC_2(VAR_3);

 if (VAR_6->duration[VAR_0] == 0)
  return 0;

 return FUNC_1(VAR_5, "%d %d %d [%s]\n",
         FUNC_0(VAR_6->duration[VAR_2]),
         FUNC_0(VAR_6->duration[VAR_1]),
         FUNC_0(VAR_6->duration[VAR_0]),
         VAR_6->duration_adjusted
         ? "adjusted" : "original");
}
