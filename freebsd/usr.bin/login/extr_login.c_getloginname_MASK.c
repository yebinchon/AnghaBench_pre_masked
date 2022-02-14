
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,char*) ;
 char* VAR_5 ;
 int FUNC_7 (char*) ;
 int VAR_6 ;

__attribute__((used)) static char *
FUNC_8(void)
{
 char *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_1);
 if (VAR_7 == ((void*)0))
  FUNC_2(1, "malloc()");
 do {
  (void)FUNC_6("%s", VAR_5);
  for (VAR_8 = VAR_7; (VAR_9 = FUNC_3()) != '\n'; ) {
   if (VAR_9 == VAR_0) {
    FUNC_0(VAR_6);
    FUNC_1(VAR_2, 0);
   }
   if (VAR_8 < VAR_7 + VAR_1 - 1)
    *VAR_8++ = VAR_9;
  }
 } while (VAR_8 == VAR_7);

 *VAR_8 = '\0';
 if (VAR_7[0] == '-') {
  VAR_4 = 0;
  FUNC_5(VAR_7, VAR_7 + 1, FUNC_7(VAR_7));
 } else {
  VAR_4 = VAR_3;
 }
 return VAR_7;
}
