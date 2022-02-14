
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s16 ;
struct TYPE_2__ {char** index; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,int ,char*,int) ;
 size_t FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
   struct device_attribute *VAR_3, char *VAR_4)
{
 const char *VAR_5 = VAR_1.index[FUNC_2(VAR_3)];
 int VAR_6;
 s16 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_5, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_8 = 250 * (VAR_7 >> 6);

 return FUNC_1(VAR_4, VAR_0, "%d\n", VAR_8);
}
