
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int *,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,scalar_t__*) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;

__attribute__((used)) static void FUNC_9(int VAR_21)
{
 int VAR_22 = -VAR_0;

 if (VAR_20)
  goto out;

 if ((VAR_7 >= 0) && (VAR_7 != VAR_21))
  goto out;

 VAR_19 = VAR_21;

 VAR_22 = FUNC_0(VAR_21, &VAR_8, ((void*)0), &VAR_20);
 if (VAR_22 < 0) {
  FUNC_6("Unable to register with ipmi\n");
  goto out;
 }

 VAR_22 = FUNC_2(VAR_20,
         &VAR_9,
         &VAR_10);
 if (VAR_22) {
  FUNC_8("Unable to get IPMI version, assuming 1.0\n");
  VAR_9 = 1;
  VAR_10 = 0;
 }

 VAR_22 = FUNC_4(&VAR_12);
 if (VAR_22 < 0) {
  FUNC_1(VAR_20);
  VAR_20 = ((void*)0);
  FUNC_6("Unable to register misc device\n");
 }
 out:
 if ((VAR_16) && (VAR_22 == 0)) {

  VAR_16 = 0;
  VAR_11 = VAR_6;
  FUNC_3(VAR_1);
  FUNC_7("Starting now!\n");
 } else {

  VAR_11 = VAR_4;
  FUNC_3(VAR_2);
 }
}
