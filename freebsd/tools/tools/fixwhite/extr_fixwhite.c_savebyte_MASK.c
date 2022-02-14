
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(char VAR_4)
{

 if (VAR_2 >= VAR_3) {
  VAR_3 += 128;
  VAR_1 = FUNC_2(VAR_1, VAR_3);
  if (VAR_1 == ((void*)0)) {
   FUNC_1("malloc");
   FUNC_0(1);
  }
 }
 VAR_1[VAR_2++] = VAR_4;

 switch (VAR_4) {
 case '\n':
  VAR_0 = 0;
  break;
 case ' ':
  VAR_0++;
  break;
 case '\t':
  VAR_0 = (VAR_0 / 8 + 1) * 8;
  break;
 }
}
