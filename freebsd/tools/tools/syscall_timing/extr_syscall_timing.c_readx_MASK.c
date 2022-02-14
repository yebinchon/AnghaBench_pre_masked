
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, char *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;

 do {
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  if (VAR_3 == -1)
   FUNC_1(1, "read");
  FUNC_0((size_t)VAR_3 <= VAR_2);
  VAR_2 -= VAR_3;
  VAR_1 += VAR_3;
 } while (VAR_2 > 0);
}
