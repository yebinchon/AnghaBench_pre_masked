
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 () ;
 char* VAR_6 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(int VAR_7)
{

 if (VAR_7 == VAR_2) {
  if (VAR_5 == VAR_1)
   return 0;
  FUNC_3(1);
 }
 if (VAR_7 >= 'A' && VAR_7 <= 'Z')
  VAR_7 += 'a' - 'A';
 if (VAR_3 == 0) {
  if (VAR_7 == FUNC_0('l')) {
   FUNC_10(VAR_4);
   return 0;
  }
  if (VAR_7 == FUNC_0('g')) {
   FUNC_9();
   return 0;
  }
  if (VAR_7 != ':')
   return 0;
  FUNC_7(VAR_0, 0);
  FUNC_1();
 }
 if (VAR_7 == FUNC_2() && VAR_3 > 0) {
  if (VAR_3 == 1 && VAR_6[0] == ':')
   return 0;
  VAR_3--;
  goto doerase;
 }
 if (VAR_7 == FUNC_0('w') && VAR_3 > 0) {
  while (--VAR_3 >= 0 && FUNC_5(VAR_6[VAR_3]))
   ;
  VAR_3++;
  while (--VAR_3 >= 0 && !FUNC_5(VAR_6[VAR_3]))
   if (VAR_3 == 0 && VAR_6[0] == ':')
    return 1;
  VAR_3++;
  goto doerase;
 }
 if (VAR_7 == FUNC_6() && VAR_3 > 0) {
  VAR_3 = 0;
  if (VAR_6[0] == ':')
   VAR_3++;
doerase:
  FUNC_7(VAR_0, VAR_3);
  FUNC_1();
  return 0;
 }
 if (FUNC_4(VAR_7) || VAR_7 == ' ') {
  VAR_6[VAR_3] = VAR_7;
  FUNC_8(VAR_0, VAR_3, VAR_7);
  VAR_3++;
 }

 if (VAR_3 == 0 || (VAR_7 != '\r' && VAR_7 != '\n'))
  return 0;

 return 1;
}
