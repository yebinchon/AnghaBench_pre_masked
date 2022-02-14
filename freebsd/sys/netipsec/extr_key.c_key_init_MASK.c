
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int getspi_count; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 int VAR_8 ;
 int FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,int ,int *) ;
 int VAR_30 ;
 void* FUNC_10 (int ,int ,int *) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 TYPE_1__ VAR_34 ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,int,int *,int *,int *,int *,int ,int ) ;

void
FUNC_14(void)
{
 int VAR_35;

 for (VAR_35 = 0; VAR_35 < VAR_1; VAR_35++) {
  FUNC_7(&VAR_27[VAR_35]);
  FUNC_7(&VAR_28[VAR_35]);
 }

 VAR_17 = FUNC_13("IPsec SA lft_c",
     sizeof(uint64_t) * 2, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_10, VAR_11);

 FUNC_7(&VAR_21);
 VAR_26 = FUNC_10(VAR_9, VAR_5, &VAR_25);
 VAR_23 = FUNC_10(VAR_8, VAR_2, &VAR_22);
 VAR_20 = FUNC_10(VAR_7, VAR_3,
     &VAR_19);
 VAR_13 = FUNC_10(VAR_0, VAR_4,
     &VAR_12);
 VAR_15 = FUNC_10(VAR_0, VAR_4,
     &VAR_14);

 FUNC_12();

 for (VAR_35 = 0; VAR_35 <= VAR_6; VAR_35++)
  FUNC_2(&VAR_18[VAR_35]);

 FUNC_2(&VAR_16);
 FUNC_2(&VAR_24);

 if (!FUNC_1(VAR_30))
  return;

 FUNC_6();
 FUNC_3();
 FUNC_4();
 FUNC_0();
 FUNC_5();


 FUNC_8(&VAR_33, 1);
 FUNC_9(&VAR_33, VAR_31, VAR_32, ((void*)0));



 VAR_34.getspi_count = 1;

 if (VAR_29)
  FUNC_11("IPsec: Initialized Security Association Processing.\n");
}
