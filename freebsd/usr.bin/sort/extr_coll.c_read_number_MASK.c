
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
struct bwstring {int dummy; } ;
typedef int bwstring_iterator ;


 size_t VAR_0 ;
 int FUNC_0 (struct bwstring*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,unsigned char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct bwstring *VAR_4, int *VAR_5, wchar_t *VAR_6, size_t *VAR_7, wchar_t *VAR_8, size_t *VAR_9, unsigned char *VAR_10)
{
 bwstring_iterator VAR_11;

 VAR_11 = FUNC_0(VAR_4);


 VAR_8[0] = 0;

 while (FUNC_3(FUNC_1(VAR_11)))
  VAR_11 = FUNC_2(VAR_11, 1);

 if (FUNC_1(VAR_11) == (wchar_t)VAR_2) {
  *VAR_5 = -1;
  VAR_11 = FUNC_2(VAR_11, 1);
 }


 while (FUNC_4(FUNC_1(VAR_11)) &&
     (FUNC_1(VAR_11) == L'0'))
  VAR_11 = FUNC_2(VAR_11, 1);

 while (FUNC_1(VAR_11) && *VAR_7 < VAR_0) {
  if (FUNC_4(FUNC_1(VAR_11))) {
   VAR_6[*VAR_7] = FUNC_1(VAR_11);
   VAR_11 = FUNC_2(VAR_11, 1);
   *VAR_7 += 1;
  } else if (VAR_3 &&
      (FUNC_1(VAR_11) == (wchar_t)VAR_3))
   VAR_11 = FUNC_2(VAR_11, 1);
  else
   break;
 }

 VAR_6[*VAR_7] = 0;

 if (FUNC_1(VAR_11) == (wchar_t)VAR_1) {
  VAR_11 = FUNC_2(VAR_11, 1);
  while (FUNC_4(FUNC_1(VAR_11)) &&
      *VAR_9 < VAR_0) {
   VAR_8[*VAR_9] = FUNC_1(VAR_11);
   VAR_11 = FUNC_2(VAR_11, 1);
   *VAR_9 += 1;
  }
  VAR_8[*VAR_9] = 0;

  while (*VAR_9 > 0 && VAR_8[*VAR_9 - 1] == L'0') {
   --(*VAR_9);
   VAR_8[*VAR_9] = L'\0';
  }
 }

 FUNC_5(FUNC_1(VAR_11),VAR_10);

 if ((*VAR_7 + *VAR_9) == 0)
  *VAR_5 = 0;

 return (0);
}
