
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int,int ) ;

int FUNC_8(int VAR_7, char *VAR_8[])
{
 int VAR_9, VAR_10;
 char *VAR_11;

 while (--VAR_7) {
  if (*(VAR_11 = *++VAR_8) == '-') {
   switch (*++VAR_11) {
   case 'l':
    if ((VAR_10 = FUNC_0(++VAR_11)) > 0)
     VAR_3 = VAR_10;
    break;
   }
  }
 }

 while ((VAR_9 = FUNC_3()) != VAR_0) {
  if (VAR_9 == '\031') {
   if ((VAR_9 = FUNC_3()) == '\1') {
    VAR_4 = 0;
    FUNC_1(VAR_6);
    FUNC_5(FUNC_4(), VAR_1);
    continue;
   } else {
    FUNC_7(VAR_9, VAR_5);
    VAR_9 = '\031';
   }
  } else if (VAR_9 & 0x80) {
   FUNC_2(VAR_2[VAR_9 & 0x7F], VAR_6);
   continue;
  } else if (VAR_9 == '\n')
   VAR_4++;
  else if (VAR_9 == '\f')
   VAR_4 = VAR_3;
  FUNC_6(VAR_9);
  if (VAR_4 >= VAR_3) {
   VAR_4 = 0;
   FUNC_1(VAR_6);
  }
 }
 return 0;
}
