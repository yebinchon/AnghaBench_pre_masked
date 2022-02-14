
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Linetype ;
typedef size_t Comment_state ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int * VAR_16 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int,char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (char const*,scalar_t__,int ) ;
 int VAR_17 ;
 int FUNC_5 (char const**) ;
 scalar_t__ FUNC_6 (char const**) ;
 scalar_t__* VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 char* VAR_21 ;
 int VAR_22 ;
 size_t VAR_23 ;
 int * VAR_24 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 char* FUNC_9 (char*,char*) ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 char* FUNC_10 (char const*) ;
 char* FUNC_11 () ;
 char* FUNC_12 (char const*) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (char const*,int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (char const*,char*,int) ;
 scalar_t__ FUNC_17 (char const*,char) ;
 char const* VAR_28 ;
 int ** VAR_29 ;

__attribute__((used)) static Linetype
FUNC_18(void)
{
 const char *VAR_30;
 int VAR_31;
 Linetype VAR_32;
 Comment_state VAR_33;

 VAR_33 = VAR_19;
 VAR_30 = FUNC_11();
 if (VAR_30 == ((void*)0))
  return (VAR_8);
 if (VAR_25 == ((void*)0)) {
  if (FUNC_17(VAR_28, '\n') == FUNC_17(VAR_28, '\r') + 1)
   VAR_25 = VAR_26;
  else
   VAR_25 = VAR_27;
 }
 if (*VAR_30 == '\0') {
  VAR_32 = VAR_12;
  goto done;
 }
 VAR_21 = VAR_28 + (VAR_30 - VAR_28);
 if ((VAR_30 = FUNC_9("ifdef", VAR_21)) != ((void*)0) ||
     (VAR_30 = FUNC_9("ifndef", VAR_21)) != ((void*)0)) {
  VAR_30 = FUNC_10(VAR_30);
  if ((VAR_31 = FUNC_5(&VAR_30)) < 0)
   VAR_32 = VAR_11;
  else {
   VAR_32 = (VAR_21[2] == 'n')
       ? VAR_9 : VAR_13;
   if (VAR_29[VAR_31] == ((void*)0))
    VAR_32 = (VAR_32 == VAR_13)
        ? VAR_9 : VAR_13;
   if (VAR_18[VAR_31])
    VAR_32 = (VAR_32 == VAR_13)
        ? VAR_14 : VAR_10;
  }
 } else if ((VAR_30 = FUNC_9("if", VAR_21)) != ((void*)0))
  VAR_32 = FUNC_6(&VAR_30);
 else if ((VAR_30 = FUNC_9("elif", VAR_21)) != ((void*)0))
  VAR_32 = FUNC_8(FUNC_6(&VAR_30));
 else if ((VAR_30 = FUNC_9("else", VAR_21)) != ((void*)0))
  VAR_32 = VAR_5;
 else if ((VAR_30 = FUNC_9("endif", VAR_21)) != ((void*)0))
  VAR_32 = VAR_7;
 else {
  VAR_30 = FUNC_13(VAR_21);

  if (FUNC_16(VAR_30, "\\\r\n", 3) == 0 ||
      FUNC_16(VAR_30, "\\\n", 2) == 0)
   FUNC_0();
  VAR_30 = FUNC_12(VAR_30);
  VAR_32 = VAR_12;
  goto done;
 }
 VAR_30 = FUNC_10(VAR_30);
 if (*VAR_30 != '\0') {
  VAR_30 = FUNC_12(VAR_30);
  if (VAR_32 == VAR_13 || VAR_32 == VAR_9 ||
      VAR_32 == VAR_14 || VAR_32 == VAR_10)
   VAR_32 = VAR_11;
  if (VAR_32 == VAR_6 || VAR_32 == VAR_3)
   VAR_32 = VAR_4;
 }


 if (VAR_23 == VAR_1) {
  long VAR_34 = VAR_30 - VAR_28;
  if (FUNC_4(VAR_28 + VAR_34, VAR_15 - VAR_34, VAR_20) == ((void*)0)) {
   if (FUNC_3(VAR_20))
    FUNC_2(2, "can't read %s", VAR_17);

   FUNC_14(VAR_28 + VAR_34, VAR_25);
   VAR_30 += FUNC_15(VAR_25);
   VAR_23 = VAR_2;
  } else {
   VAR_23 = VAR_0;
  }
 }
 if (VAR_32 != VAR_12 && (VAR_33 || VAR_23 != VAR_2)) {
  VAR_32 = FUNC_7(VAR_32);
  VAR_23 = VAR_0;
 }
done:
 FUNC_1("parser line %d state %s comment %s line", VAR_22,
     VAR_16[VAR_19], VAR_24[VAR_23]);
 return (VAR_32);
}
