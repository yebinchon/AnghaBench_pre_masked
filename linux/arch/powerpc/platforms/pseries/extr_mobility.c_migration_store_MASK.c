
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct class_attribute {int dummy; } ;
struct class {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static ssize_t FUNC_6(struct class *VAR_1,
          struct class_attribute *VAR_2, const char *VAR_3,
          size_t VAR_4)
{
 u64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_5();

 do {
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 == -VAR_0)
   FUNC_3(1);
 } while (VAR_6 == -VAR_0);

 if (VAR_6)
  return VAR_6;

 FUNC_1();

 FUNC_4();

 return VAR_4;
}
