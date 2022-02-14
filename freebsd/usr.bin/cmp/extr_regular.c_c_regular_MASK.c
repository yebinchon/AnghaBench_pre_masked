
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct sigaction {int sa_handler; int sa_flags; int sa_mask; } ;
typedef scalar_t__ off_t ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char const*,scalar_t__,int,char const*,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (char const*,char const*,scalar_t__,scalar_t__) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int ) ;
 size_t FUNC_10 () ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,long long,char,char) ;
 char* FUNC_13 (char*,int,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_14 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_15 (int *) ;
 scalar_t__ VAR_9 ;

void
FUNC_16(int VAR_10, const char *VAR_11, off_t VAR_12, off_t VAR_13,
    int VAR_14, const char *VAR_15, off_t VAR_16, off_t VAR_17)
{
 struct sigaction VAR_18, VAR_19;
 cap_rights_t VAR_20;
 u_char VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25, *VAR_26, *VAR_27;
 off_t VAR_28, VAR_29, VAR_30;
 off_t VAR_31, VAR_32, VAR_33;
 size_t VAR_34;
 int VAR_35;

 if (VAR_12 > VAR_13)
  FUNC_7(VAR_11);
 VAR_13 -= VAR_12;
 if (VAR_16 > VAR_17)
  FUNC_7(VAR_15);
 VAR_17 -= VAR_16;

 if (VAR_8 && VAR_13 != VAR_17)
  FUNC_9(VAR_1);

 VAR_34 = FUNC_10();
 VAR_31 = (off_t)VAR_34 - 1;
 VAR_32 = FUNC_1(VAR_12);
 VAR_33 = FUNC_1(VAR_16);

 VAR_29 = FUNC_0(VAR_13, VAR_17);

 if ((VAR_24 = FUNC_13(((void*)0), VAR_10, VAR_32)) == ((void*)0)) {
  FUNC_2(VAR_10, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16);
  return;
 }

 if ((VAR_25 = FUNC_13(((void*)0), VAR_14, VAR_33)) == ((void*)0)) {
  FUNC_11(VAR_24, VAR_3);
  FUNC_2(VAR_10, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16);
  return;
 }

 if (FUNC_5(VAR_10, FUNC_3(&VAR_20, VAR_0)) < 0)
  FUNC_8(1, "unable to limit rights for %s", VAR_11);
 if (FUNC_5(VAR_14, FUNC_3(&VAR_20, VAR_0)) < 0)
  FUNC_8(1, "unable to limit rights for %s", VAR_15);
 if (FUNC_4() < 0)
  FUNC_8(VAR_2, "unable to enter capability mode");

 FUNC_15(&VAR_18.sa_mask);
 VAR_18.sa_flags = VAR_4;
 VAR_18.sa_handler = VAR_7;
 if (FUNC_14(VAR_5, &VAR_18, &VAR_19))
  FUNC_8(VAR_2, "sigaction()");

 VAR_35 = 0;
 VAR_26 = VAR_24 + VAR_3;
 VAR_27 = VAR_25 + VAR_3;
 VAR_22 = VAR_24 + (VAR_12 - VAR_32);
 VAR_23 = VAR_25 + (VAR_16 - VAR_33);

 for (VAR_28 = VAR_30 = 1; VAR_29--; ++VAR_28) {
  if ((VAR_21 = *VAR_22) != *VAR_23) {
   if (VAR_9) {
    VAR_35 = 1;
    (void)FUNC_12("%08llx %02x %02x\n",
        (long long)VAR_28 - 1, VAR_21, *VAR_23);
   } else if (VAR_6) {
    VAR_35 = 1;
    (void)FUNC_12("%6lld %3o %3o\n",
        (long long)VAR_28, VAR_21, *VAR_23);
   } else
    FUNC_6(VAR_11, VAR_15, VAR_28, VAR_30);

  }
  if (VAR_21 == '\n')
   ++VAR_30;
  if (++VAR_22 == VAR_26) {
   VAR_32 += VAR_3;
   if ((VAR_22 = VAR_24 = FUNC_13(VAR_24, VAR_10, VAR_32)) == ((void*)0)) {
    FUNC_11(VAR_25, VAR_3);
    FUNC_8(VAR_2, "remmap %s", VAR_11);
   }
   VAR_26 = VAR_24 + VAR_3;
  }
  if (++VAR_23 == VAR_27) {
   VAR_33 += VAR_3;
   if ((VAR_23 = VAR_25 = FUNC_13(VAR_25, VAR_14, VAR_33)) == ((void*)0)) {
    FUNC_11(VAR_24, VAR_3);
    FUNC_8(VAR_2, "remmap %s", VAR_15);
   }
   VAR_27 = VAR_25 + VAR_3;
  }
 }
 FUNC_11(VAR_24, VAR_3);
 FUNC_11(VAR_25, VAR_3);

 if (FUNC_14(VAR_5, &VAR_19, ((void*)0)))
  FUNC_8(VAR_2, "sigaction()");

 if (VAR_13 != VAR_17)
  FUNC_7 (VAR_13 > VAR_17 ? VAR_15 : VAR_11);
 if (VAR_35)
  FUNC_9(VAR_1);
}
