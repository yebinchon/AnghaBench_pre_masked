
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct bwstring {int dummy; } ;
typedef int bwstring_iterator ;


 size_t FUNC_0 (struct bwstring*) ;
 int FUNC_1 (struct bwstring*) ;
 int FUNC_2 (struct bwstring*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (struct bwstring*,struct bwstring*,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,size_t*) ;

int
FUNC_9(struct bwstring *VAR_0, struct bwstring *VAR_1)
{
 bwstring_iterator VAR_2, VAR_3;
 wchar_t VAR_4, VAR_5;
 size_t VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 if (VAR_0 == VAR_1)
  return (0);

 VAR_10 = FUNC_6(VAR_0, VAR_1, 0);
 if (VAR_10 == 0)
  return (0);

 VAR_6 = VAR_8 = FUNC_0(VAR_0);
 VAR_7 = VAR_9 = FUNC_0(VAR_1);

 if (VAR_8 < 1)
  return (-1);
 if (VAR_9 < 1)
  return (+1);

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_1(VAR_1);

 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_3(VAR_3);

 if (VAR_4 == L'.' && (VAR_8 == 1))
  return (-1);

 if (VAR_5 == L'.' && (VAR_9 == 1))
  return (+1);

 if (VAR_8 == 2 && VAR_4 == L'.' &&
     FUNC_3(FUNC_5(VAR_2, 1)) == L'.')
  return (-1);
 if (VAR_9 == 2 && VAR_5 == L'.' &&
     FUNC_3(FUNC_5(VAR_3, 1)) == L'.')
  return (+1);

 if (VAR_4 == L'.' && VAR_5 != L'.')
  return (-1);
 if (VAR_4 != L'.' && VAR_5 == L'.')
  return (+1);

 if (VAR_4 == L'.' && VAR_5 == L'.') {
  VAR_2 = FUNC_5(VAR_2, 1);
  VAR_3 = FUNC_5(VAR_3, 1);
 }

 FUNC_8(VAR_2, FUNC_2(VAR_0), &VAR_6);
 FUNC_8(VAR_3, FUNC_2(VAR_1), &VAR_7);

 if ((VAR_6 == VAR_7) && (FUNC_4(VAR_2, VAR_3, VAR_6) == 0))
  return (VAR_10);

 VAR_11 = FUNC_7(VAR_2, FUNC_5(VAR_2, VAR_6), VAR_3,
     FUNC_5(VAR_3, VAR_7));

 if (VAR_11 == 0)
   VAR_11 = VAR_10;

 return (VAR_11);
}
