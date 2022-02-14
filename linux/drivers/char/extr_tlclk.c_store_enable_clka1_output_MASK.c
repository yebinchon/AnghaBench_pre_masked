
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int,unsigned char) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,unsigned long) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (char const*,char*,unsigned long*) ;
 int FUNC_5 (char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
   struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned char VAR_8;

 FUNC_4(VAR_4, "%lX", &VAR_7);
 FUNC_1(VAR_2, "tmp = 0x%lX\n", VAR_7);

 VAR_8 = (unsigned char)VAR_7;
 FUNC_2(&VAR_1, VAR_6);
 FUNC_0(VAR_0, 0xfb, VAR_8 << 2);
 FUNC_3(&VAR_1, VAR_6);

 return FUNC_5(VAR_4, VAR_5);
}
