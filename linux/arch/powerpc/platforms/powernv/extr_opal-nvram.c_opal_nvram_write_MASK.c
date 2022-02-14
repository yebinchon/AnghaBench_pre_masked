
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef scalar_t__ s64 ;
typedef int loff_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_7(char *VAR_5, size_t VAR_6, loff_t *VAR_7)
{
 s64 VAR_8 = VAR_1;
 int VAR_9;

 if (*VAR_7 >= VAR_4)
  return 0;
 VAR_9 = *VAR_7;
 if ((VAR_9 + VAR_6) > VAR_4)
  VAR_6 = VAR_4 - VAR_9;

 while (VAR_8 == VAR_1 || VAR_8 == VAR_3) {
  VAR_8 = FUNC_6(FUNC_0(VAR_5), VAR_6, VAR_9);
  if (VAR_8 == VAR_3) {
   if (FUNC_1() || FUNC_2())
    FUNC_3(VAR_2);
   else
    FUNC_4(VAR_2);
   FUNC_5(((void*)0));
  } else if (VAR_8 == VAR_1) {
   if (FUNC_1() || FUNC_2())
    FUNC_3(VAR_2);
   else
    FUNC_4(VAR_2);
  }
 }

 if (VAR_8)
  return -VAR_0;

 *VAR_7 += VAR_6;
 return VAR_6;
}
