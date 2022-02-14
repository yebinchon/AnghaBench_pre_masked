
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int FILE ;


 int VAR_0 ;
 size_t FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (int *,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_2, off_t VAR_3, char *VAR_4, int VAR_5)
{
 size_t VAR_6;

 if (VAR_5) {
  if (FUNC_3(VAR_2, VAR_3, VAR_1) == -1)
   FUNC_1(1, ((void*)0));
 }
 else {
  while (VAR_3 > 0) {
   VAR_6 = FUNC_0(VAR_0, VAR_3);
   if (FUNC_2(VAR_4, sizeof(char), VAR_6, VAR_2) != VAR_6)
    FUNC_1(1, "cannot read buffer");
   VAR_3 -= VAR_6;
  }
 }
}
