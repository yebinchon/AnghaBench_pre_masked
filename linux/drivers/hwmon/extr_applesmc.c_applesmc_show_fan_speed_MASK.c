
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int newkey ;


 int VAR_0 ;
 int FUNC_0 (char*,int*,int) ;
 int * VAR_1 ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (char*,int ,char*,unsigned int) ;
 int FUNC_3 (struct device_attribute*) ;
 size_t FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6 = 0;
 char VAR_7[5];
 u8 VAR_8[2];

 FUNC_1(VAR_7, sizeof(VAR_7), VAR_1[FUNC_4(VAR_3)],
    FUNC_3(VAR_3));

 VAR_5 = FUNC_0(VAR_7, VAR_8, 2);
 VAR_6 = ((VAR_8[0] << 8 | VAR_8[1]) >> 2);

 if (VAR_5)
  return VAR_5;
 else
  return FUNC_2(VAR_4, VAR_0, "%u\n", VAR_6);
}
