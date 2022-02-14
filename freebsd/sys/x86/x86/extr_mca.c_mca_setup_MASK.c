
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,char*,int ,int*,int ,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int ,int ,char*) ;
 int FUNC_4 (int *,int ,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int *) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 () ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_13 (int *,char*,int *,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

__attribute__((used)) static void
FUNC_14(uint64_t VAR_31)
{






 if (VAR_12 == VAR_0 &&
     FUNC_0(VAR_11) == 0x10 && VAR_10)
  VAR_30 = 1;

 VAR_13 = VAR_31 & VAR_6;
 FUNC_13(&VAR_16, "mca", ((void*)0), VAR_7);
 FUNC_1(&VAR_19);
 FUNC_1(&VAR_18);
 FUNC_6(&VAR_23, 0, VAR_22, ((void*)0));
 FUNC_9(&VAR_25, 1);
 FUNC_1(&VAR_15);
 FUNC_6(&VAR_21, 0, VAR_20, ((void*)0));
 FUNC_12();
 FUNC_2(((void*)0), FUNC_5(VAR_9), VAR_8,
     "count", VAR_2, (int *)(uintptr_t)&VAR_14, 0,
     "Record count");
 FUNC_4(((void*)0), FUNC_5(VAR_9), VAR_8,
     "maxcount", VAR_5 | VAR_4 | VAR_1,
     &VAR_17, 0, VAR_26, "I",
     "Maximum record count (-1 is unlimited)");
 FUNC_4(((void*)0), FUNC_5(VAR_9), VAR_8,
     "interval", VAR_5 | VAR_3 | VAR_1, &VAR_24,
     0, VAR_29, "I",
     "Periodic interval in seconds to scan for machine checks");
 FUNC_3(((void*)0), FUNC_5(VAR_9), VAR_8,
     "records", VAR_2, VAR_27, "Machine check records");
 FUNC_4(((void*)0), FUNC_5(VAR_9), VAR_8,
     "force_scan", VAR_5 | VAR_3 | VAR_1, ((void*)0), 0,
     VAR_28, "I", "Force an immediate scan for machine checks");






}
