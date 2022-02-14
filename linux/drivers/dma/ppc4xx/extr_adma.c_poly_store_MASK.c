
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned long) ;
 int VAR_3 ;
 int FUNC_2 (char const*,char*,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device_driver *VAR_4, const char *VAR_5,
     size_t VAR_6)
{
 unsigned long VAR_7, VAR_8;






 if (!VAR_6 || VAR_6 > 6)
  return -VAR_1;


 FUNC_2(VAR_5, "%lx", &VAR_8);

 if (VAR_8 & ~0x1FF)
  return -VAR_1;

 VAR_8 &= 0xFF;
 VAR_7 = FUNC_0(VAR_3, VAR_0);
 VAR_7 &= ~(0xFF << VAR_2);
 VAR_7 |= VAR_8 << VAR_2;
 FUNC_1(VAR_3, VAR_0, VAR_7);

 return VAR_6;
}
