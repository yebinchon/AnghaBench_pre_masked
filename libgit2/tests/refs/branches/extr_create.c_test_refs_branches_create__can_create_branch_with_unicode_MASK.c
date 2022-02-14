
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const**) ;
 int FUNC_1 (char const*,char const*) ;
 int * VAR_0 ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int **,int ,char const*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const**,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int VAR_1 ;
 int FUNC_14 (int *,int ) ;
 int VAR_2 ;

void FUNC_15(void)
{
 const char *VAR_3 = "\xC3\x85\x73\x74\x72\xC3\xB6\x6D";
 const char *VAR_4 = "\x41\xCC\x8A\x73\x74\x72\x6F\xCC\x88\x6D";
 const char *VAR_5 = "\xF0\x9F\x8D\xB7";
 const char *VAR_6[] = { VAR_3, VAR_4, VAR_5 };
 const char *VAR_7[] = { VAR_4, VAR_3, ((void*)0) };
 const char *VAR_8[] = { VAR_3, VAR_4, VAR_5 };
 unsigned int VAR_9;
 bool VAR_10 =
  FUNC_10(FUNC_13(VAR_1));

 FUNC_14(&VAR_2, VAR_1);

 if (FUNC_4(VAR_1, "core.precomposeunicode"))
  VAR_8[1] = VAR_3;

 else if (VAR_10)
  VAR_8[0] = VAR_4;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6); ++VAR_9) {
  const char *VAR_11;
  FUNC_3(FUNC_5(
   &VAR_0, VAR_1, VAR_6[VAR_9], VAR_2, 0));
  FUNC_3(FUNC_9(
   FUNC_12(VAR_0), FUNC_8(VAR_2)));

  FUNC_3(FUNC_7(&VAR_11, VAR_0));
  FUNC_2(VAR_8[VAR_9], VAR_11);
  FUNC_1(VAR_8[VAR_9], VAR_6[VAR_9]);
  if (VAR_10 && VAR_7[VAR_9])
   FUNC_1(VAR_8[VAR_9], VAR_7[VAR_9]);

  FUNC_3(FUNC_6(VAR_0));
  FUNC_11(VAR_0);
  VAR_0 = ((void*)0);
 }
}
