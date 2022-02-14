
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 char VAR_17 ;
 scalar_t__ FUNC_1 (char,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (int *) ;
 int * VAR_19 ;
 int FUNC_4 (char*,int,size_t,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char) ;
 int FUNC_10 (char,int *) ;
 size_t FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ) ;
 int VAR_20 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int (*) (int )) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,size_t) ;

void
FUNC_19(void)
{
 char VAR_21[VAR_1];
 char *VAR_22;
 ssize_t VAR_23;
 size_t VAR_24;
 sigset_t VAR_25, VAR_26;

 FUNC_15(VAR_9, FUNC_0);
 FUNC_15(VAR_11, FUNC_0);
 FUNC_15(VAR_7, FUNC_5);
 FUNC_15(VAR_13, FUNC_8);
 FUNC_15(VAR_10, FUNC_6);
 FUNC_15(VAR_8, FUNC_8);
 FUNC_15(VAR_12, FUNC_7);
 (void) FUNC_12(VAR_20);
 FUNC_16(VAR_14, ((void*)0), &VAR_26);
 for (;;) {
  FUNC_16(VAR_15, &VAR_26, ((void*)0));
  VAR_23 = FUNC_11(VAR_5, VAR_21, VAR_1);
  if (VAR_23 <= 0) {

   if (VAR_23 == 0 ||
       (VAR_23 < 0 && (VAR_18 == VAR_2 || VAR_18 == VAR_3))) {
    FUNC_14(&VAR_25);
    FUNC_13(&VAR_25, VAR_13);
    FUNC_16(VAR_14, &VAR_25, ((void*)0));
    FUNC_8(VAR_8);

   }
   continue;
  }
  VAR_24 = VAR_23;
  FUNC_14(&VAR_25);
  FUNC_13(&VAR_25, VAR_7);
  FUNC_13(&VAR_25, VAR_13);
  FUNC_13(&VAR_25, VAR_10);
  FUNC_13(&VAR_25, VAR_12);
  FUNC_16(VAR_14, &VAR_25, ((void*)0));
  for (VAR_22 = VAR_21; VAR_22 < VAR_21 + VAR_24; VAR_22++)
   *VAR_22 &= VAR_17;
  FUNC_18(VAR_16, VAR_21, VAR_24);
  if (FUNC_2(FUNC_17(VAR_6)) && VAR_19 != ((void*)0)) {
   if (!FUNC_2(FUNC_17(VAR_0))) {
    FUNC_4(VAR_21, 1, VAR_24, VAR_19);
   } else {
    for (VAR_22 = VAR_21; VAR_22 < VAR_21 + VAR_24; VAR_22++)
     if ((*VAR_22 >= ' ' && *VAR_22 <= '~') ||
         FUNC_1(*VAR_22, FUNC_17(VAR_4)))
      FUNC_10(*VAR_22, VAR_19);
   }
   for (VAR_22 = VAR_21; VAR_22 < VAR_21 + VAR_24; VAR_22++) {
    if (!FUNC_9(*VAR_22)) {
     FUNC_3(VAR_19);
     break;
    }
   }
  }
 }
}
