
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpe {unsigned long ntcs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long FUNC_0 () ;
 struct vpe* FUNC_1 (unsigned long) ;
 unsigned long VAR_1 ;
 int FUNC_2 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct vpe *VAR_6 = FUNC_1(FUNC_0());
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, 0, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 == 0 || VAR_7 > (VAR_1 - FUNC_0()))
  return -VAR_0;

 VAR_6->ntcs = VAR_7;

 return VAR_5;
}
