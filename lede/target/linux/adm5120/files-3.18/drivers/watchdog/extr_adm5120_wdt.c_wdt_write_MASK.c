
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char,char const*) ;
 int VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_3, const char *VAR_4, size_t VAR_5, loff_t *VAR_6)
{

 if (VAR_5) {
  if (!VAR_2) {
   size_t VAR_7;


   VAR_1 = 0;

   for (VAR_7 = 0; VAR_7 != VAR_5; VAR_7++) {
    char VAR_8;
    if (FUNC_0(VAR_8, VAR_4 + VAR_7))
     return -VAR_0;
    if (VAR_8 == 'V')
     VAR_1 = 1;
   }
  }
  FUNC_1();
  return VAR_5;
 }
 return 0;
}
