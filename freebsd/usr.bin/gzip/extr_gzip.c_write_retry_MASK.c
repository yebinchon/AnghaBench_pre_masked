
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 size_t FUNC_0 (size_t,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int,char const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(int VAR_1, const void *VAR_2, size_t VAR_3)
{
 const char *VAR_4 = VAR_2;
 size_t VAR_5 = FUNC_0(VAR_3, (size_t) VAR_0);

 while (VAR_5 > 0) {
  ssize_t VAR_6;

  VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_5);
  if (VAR_6 == -1) {
   return VAR_6;
  } else if (VAR_6 == 0) {
   FUNC_1();
  }
  VAR_4 += VAR_6;
  VAR_5 -= VAR_6;
 }

 return VAR_3 - VAR_5;
}
