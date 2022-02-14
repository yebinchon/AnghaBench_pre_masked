
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int newkey ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 int FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;
 char VAR_6[5];
 u8 VAR_7[17];

 FUNC_1(VAR_6, sizeof(VAR_6), VAR_0, FUNC_3(VAR_3));

 VAR_5 = FUNC_0(VAR_6, VAR_7, 16);
 VAR_7[16] = 0;

 if (VAR_5)
  return VAR_5;
 else
  return FUNC_2(VAR_4, VAR_1, "%s\n", VAR_7+4);
}
