
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int,scalar_t__,int ) ;
 int FUNC_2 (int,char) ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(void)
{
 off_t VAR_4;


 if ((VAR_0 % 8) == 0) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   if (!FUNC_2(VAR_4 + 1, ' '))
    break;
  if (VAR_4 == VAR_0) {
   VAR_2 -= VAR_0;
   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += 8)
    VAR_1[VAR_2++] = '\t';
  }
 }

 if (FUNC_1(VAR_1, 1, VAR_2, VAR_3) != VAR_2) {
  FUNC_3("write");
  FUNC_0(1);
 }
 VAR_2 = 0;
}
