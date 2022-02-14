
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct colopt {char* member_0; int member_2; int mask; char* name; unsigned int value; int member_1; } ;


 int FUNC_0 (struct colopt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_9, int VAR_10, unsigned int *VAR_11,
   int *VAR_12)
{
 struct colopt VAR_13[] = {
  { "always", VAR_4, 129 },
  { "never", VAR_3, 129 },
  { "auto", VAR_0, 129 },
  { "plain", VAR_5, 128 },
  { "column", VAR_1, 128 },
  { "row", VAR_6, 128 },
  { "dense", VAR_2, 0 },
 };
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_13); VAR_14++) {
  int VAR_15 = 1, VAR_16 = VAR_10, VAR_17;
  const char *VAR_18 = VAR_9;

  if (!VAR_13[VAR_14].mask) {
   if (VAR_16 > 2 && !FUNC_3(VAR_18, "no", 2)) {
    VAR_18 += 2;
    VAR_16 -= 2;
    VAR_15 = 0;
   }
  }

  VAR_17 = FUNC_2(VAR_13[VAR_14].name);
  if (VAR_16 != VAR_17 ||
      FUNC_3(VAR_18, VAR_13[VAR_14].name, VAR_17))
   continue;

  switch (VAR_13[VAR_14].mask) {
  case 129:
   *VAR_12 |= VAR_7;
   break;
  case 128:
   *VAR_12 |= VAR_8;
   break;
  }

  if (VAR_13[VAR_14].mask)
   *VAR_11 = (*VAR_11 & ~VAR_13[VAR_14].mask) | VAR_13[VAR_14].value;
  else {
   if (VAR_15)
    *VAR_11 |= VAR_13[VAR_14].value;
   else
    *VAR_11 &= ~VAR_13[VAR_14].value;
  }
  return 0;
 }

 return FUNC_1("unsupported option '%s'", VAR_9);
}
