
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class_attribute {int dummy; } ;
struct class {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*,char*,unsigned int*,unsigned int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct class *VAR_3, struct class_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7, VAR_8;

 if (FUNC_3(VAR_5, "%u:%u", &VAR_7, &VAR_8) == 2) {

  if (!FUNC_4(VAR_2))
   return -VAR_1;

  FUNC_2(FUNC_0(VAR_7, VAR_8), ((void*)0));

  FUNC_1(VAR_2);

  return VAR_6;
 }

 return -VAR_0;
}
