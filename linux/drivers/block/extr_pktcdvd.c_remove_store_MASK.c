
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class_attribute {int dummy; } ;
struct class {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct class *VAR_1, struct class_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 unsigned int VAR_5, VAR_6;
 if (FUNC_2(VAR_3, "%u:%u", &VAR_5, &VAR_6) == 2) {
  FUNC_1(FUNC_0(VAR_5, VAR_6));
  return VAR_4;
 }
 return -VAR_0;
}
