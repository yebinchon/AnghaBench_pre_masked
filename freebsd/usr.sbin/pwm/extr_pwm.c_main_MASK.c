
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int period; int duty; int enable; } ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long const VAR_2 ;
 unsigned long const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int,unsigned long const*,int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int,int *) ;
 int FUNC_6 (int) ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int,char**,char*) ;
 int FUNC_10 (int,unsigned long const,struct pwm_state*) ;
 int FUNC_11 (unsigned long const*) ;
 int FUNC_12 (char*,int ) ;
 int VAR_11 ;
 int FUNC_13 (char*,int,int,int) ;
 int FUNC_14 (int ) ;
 int VAR_12 ;
 char* FUNC_15 (int ) ;
 int FUNC_16 (int ,char**,int) ;
 int FUNC_17 () ;

int
FUNC_18(int VAR_13, char *VAR_14[])
{
 struct pwm_state VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;
 int VAR_19, VAR_20;
 cap_rights_t VAR_21;
 const unsigned long VAR_22[] = {VAR_2, VAR_3};
 char *VAR_23;
 bool VAR_24;

 VAR_19 = 0;
 VAR_24 = 0;
 VAR_16 = -1;
 VAR_17 = VAR_18 = -1;

 while ((VAR_20 = FUNC_9(VAR_13, VAR_14, "f:EDCp:d:")) != -1) {
  switch (VAR_20) {
  case 'E':
   if (VAR_19 & (VAR_4 | VAR_8))
    FUNC_17();
   VAR_19 |= VAR_6;
   break;
  case 'D':
   if (VAR_19 & (VAR_6 | VAR_8))
    FUNC_17();
   VAR_19 |= VAR_4;
   break;
  case 'C':
   if (VAR_19)
    FUNC_17();
   VAR_19 = VAR_8;
   break;
  case 'p':
   if (VAR_19 & VAR_8)
    FUNC_17();
   VAR_19 |= VAR_7;
   VAR_17 = FUNC_16(VAR_11, ((void*)0), 10);
   break;
  case 'd':
   if (VAR_19 & VAR_8)
    FUNC_17();
   VAR_19 |= VAR_5;
   VAR_18 = FUNC_16(VAR_11, &VAR_23, 10);
   if (*VAR_23 == '%') {
    if (VAR_18 < 0 || VAR_18 > 100) {
     FUNC_8(VAR_12,
         "Invalid duty percentage\n");
     FUNC_17();
    }
   } else if (*VAR_23 != '\0')
    FUNC_17();
   break;
  case 'f':
   VAR_24 = 1;
   FUNC_14(VAR_11);
   break;
  case '?':
   FUNC_17();
   break;
  }
 }

 if (VAR_19 == 0)
  FUNC_17();

 if ((VAR_16 = FUNC_12(VAR_9, VAR_1)) == -1) {
  FUNC_8(VAR_12, "pwm: cannot open %s: %s\n",
      VAR_9, FUNC_15(VAR_10));
  if (VAR_24)
   FUNC_7(1);
  else
   FUNC_17();
 }

 if (FUNC_4() < 0) {
  FUNC_8(VAR_12, "can't limit stdio rights");
  goto fail;
 }
 FUNC_1();
 FUNC_0(&VAR_21, VAR_0);
 if (FUNC_5(VAR_16, &VAR_21) < 0) {
  FUNC_8(VAR_12, "cap_right_limit() failed\n");
  goto fail;
 }
 if (FUNC_3(VAR_16, VAR_22, FUNC_11(VAR_22)) < 0) {
  FUNC_8(VAR_12, "caph_ioctls_limit() failed\n");
  goto fail;
 }
 if (FUNC_2() < 0) {
  FUNC_8(VAR_12, "failed to enter capability mode\n");
  goto fail;
 }


 if (FUNC_10(VAR_16, VAR_2, &VAR_15) == -1) {
  FUNC_8(VAR_12, "Cannot get current state of the pwm controller\n");
  goto fail;
 }

 if (VAR_19 == VAR_8) {
  FUNC_13("period: %u\nduty: %u\nenabled:%d\n",
      VAR_15.period,
      VAR_15.duty,
      VAR_15.enable);
  goto fail;
 } else {
  if (VAR_19 & VAR_6)
   VAR_15.enable = 1;
  if (VAR_19 & VAR_4)
   VAR_15.enable = 0;
  if (VAR_19 & VAR_7)
   VAR_15.period = VAR_17;
  if (VAR_19 & VAR_5) {
   if (*VAR_23 != '\0')
    VAR_15.duty = VAR_15.period * VAR_18 / 100;
   else
    VAR_15.duty = VAR_18;
  }

  if (FUNC_10(VAR_16, VAR_3, &VAR_15) == -1) {
   FUNC_8(VAR_12,
     "Cannot configure the pwm controller\n");
   goto fail;
  }
 }

 FUNC_6(VAR_16);
 return (0);

fail:
 FUNC_6(VAR_16);
 return (1);
}
