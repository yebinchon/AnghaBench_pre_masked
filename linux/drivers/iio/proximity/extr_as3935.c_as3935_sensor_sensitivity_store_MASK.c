
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct as3935_state {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct as3935_state*,int ,unsigned long) ;
 int FUNC_1 (struct device*) ;
 struct as3935_state* FUNC_2 (int ) ;
 int FUNC_3 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct as3935_state *VAR_7 = FUNC_2(FUNC_1(VAR_3));
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3((const char *) VAR_5, 10, &VAR_8);
 if (VAR_9)
  return -VAR_2;

 if (VAR_8 > VAR_1)
  return -VAR_2;

 FUNC_0(VAR_7, VAR_0, VAR_8 << 1);

 return VAR_6;
}
