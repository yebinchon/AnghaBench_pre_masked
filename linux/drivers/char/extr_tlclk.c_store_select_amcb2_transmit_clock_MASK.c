
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;



 unsigned char VAR_0 ;



 unsigned char VAR_1 ;
 int FUNC_0 (int ,int,unsigned char) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,unsigned long) ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (char const*,char*,unsigned long*) ;
 int FUNC_5 (char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6,
  struct device_attribute *VAR_7, const char *VAR_8, size_t VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned char VAR_12;

 FUNC_4(VAR_8, "%lX", &VAR_11);
 FUNC_1(VAR_6, "tmp = 0x%lX\n", VAR_11);

 VAR_12 = (unsigned char)VAR_11;
 FUNC_2(&VAR_5, VAR_10);
 if ((VAR_12 == VAR_1) || (VAR_12 == VAR_0)) {
  FUNC_0(VAR_4, 0xc7, 0x28);
  FUNC_0(VAR_3, 0xfb, ~VAR_12);
 } else if (VAR_12 >= 128) {
  FUNC_0(VAR_4, 0xc7, 0x38);
  switch (VAR_12) {
  case 128:
   FUNC_0(VAR_2, 0xfc, 2);
   break;
  case 131:
   FUNC_0(VAR_2, 0xfc, 0);
   break;
  case 130:
   FUNC_0(VAR_2, 0xfc, 3);
   break;
  case 129:
   FUNC_0(VAR_2, 0xfc, 1);
   break;
  }
 } else {
  FUNC_0(VAR_4, 0xc7, VAR_12 << 3);
 }
 FUNC_3(&VAR_5, VAR_10);

 return FUNC_5(VAR_8, VAR_9);
}
