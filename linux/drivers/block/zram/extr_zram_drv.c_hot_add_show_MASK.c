
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class_attribute {int dummy; } ;
struct class {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,int) ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_4(struct class *VAR_2,
   struct class_attribute *VAR_3,
   char *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_1);
 VAR_5 = FUNC_3();
 FUNC_1(&VAR_1);

 if (VAR_5 < 0)
  return VAR_5;
 return FUNC_2(VAR_4, VAR_0, "%d\n", VAR_5);
}
