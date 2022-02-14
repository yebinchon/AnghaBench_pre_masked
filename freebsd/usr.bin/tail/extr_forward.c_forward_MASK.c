
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_size; } ;
typedef int off_t ;
typedef enum STYLE { ____Placeholder_STYLE } STYLE ;
typedef int FILE ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *,char const*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,char const*,int ,struct stat*) ;
 int VAR_3 ;

void
FUNC_11(FILE *VAR_4, const char *VAR_5, enum STYLE VAR_6, off_t VAR_7, struct stat *VAR_8)
{
 int VAR_9;

 switch(VAR_6) {
 case 131:
  if (VAR_7 == 0)
   break;
  if (FUNC_0(VAR_8->st_mode)) {
   if (VAR_8->st_size < VAR_7)
    VAR_7 = VAR_8->st_size;
   if (FUNC_4(VAR_4, VAR_7, VAR_2) == -1) {
    FUNC_6(VAR_5);
    return;
   }
  } else while (VAR_7--)
   if ((VAR_9 = FUNC_5(VAR_4)) == VAR_0) {
    if (FUNC_2(VAR_4)) {
     FUNC_6(VAR_5);
     return;
    }
    break;
   }
  break;
 case 130:
  if (VAR_7 == 0)
   break;
  for (;;) {
   if ((VAR_9 = FUNC_5(VAR_4)) == VAR_0) {
    if (FUNC_2(VAR_4)) {
     FUNC_6(VAR_5);
     return;
    }
    break;
   }
   if (VAR_9 == '\n' && !--VAR_7)
    break;
  }
  break;
 case 129:
  if (FUNC_0(VAR_8->st_mode)) {
   if (VAR_8->st_size >= VAR_7 &&
       FUNC_4(VAR_4, -VAR_7, VAR_1) == -1) {
    FUNC_6(VAR_5);
    return;
   }
  } else if (VAR_7 == 0) {
   while (FUNC_5(VAR_4) != VAR_0);
   if (FUNC_2(VAR_4)) {
    FUNC_6(VAR_5);
    return;
   }
  } else
   if (FUNC_1(VAR_4, VAR_5, VAR_7))
    return;
  break;
 case 128:
  if (FUNC_0(VAR_8->st_mode))
   if (!VAR_7) {
    if (FUNC_4(VAR_4, (off_t)0, VAR_1) == -1) {
     FUNC_6(VAR_5);
     return;
    }
   } else
    FUNC_10(VAR_4, VAR_5, VAR_7, VAR_8);
  else if (VAR_7 == 0) {
   while (FUNC_5(VAR_4) != VAR_0);
   if (FUNC_2(VAR_4)) {
    FUNC_6(VAR_5);
    return;
   }
  } else
   if (FUNC_7(VAR_4, VAR_5, VAR_7))
    return;
  break;
 default:
  break;
 }

 while ((VAR_9 = FUNC_5(VAR_4)) != VAR_0)
  if (FUNC_9(VAR_9) == VAR_0)
   FUNC_8();
 if (FUNC_2(VAR_4)) {
  FUNC_6(VAR_5);
  return;
 }
 (void)FUNC_3(VAR_3);
}
