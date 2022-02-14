
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hm_adl; } ;
typedef TYPE_1__ hwmon_ctx_t ;
struct TYPE_8__ {TYPE_1__* hwmon_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_9__ {void* lib; } ;
typedef TYPE_3__ ADL_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ,int ) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_3 (hashcat_ctx_t *VAR_43)
{
  hwmon_ctx_t *VAR_44 = VAR_43->hwmon_ctx;

  ADL_PTR *VAR_45 = (ADL_PTR *) VAR_44->hm_adl;

  FUNC_2 (VAR_45, 0, sizeof (ADL_PTR));
  if (!VAR_45->lib)
  {



    return -1;
  }

  FUNC_0(VAR_45, VAR_16, VAR_14, VAR_0, 0);
  FUNC_0(VAR_45, VAR_15, VAR_13, VAR_0, 0);
  FUNC_0(VAR_45, VAR_9, VAR_4, VAR_0, 0);
  FUNC_0(VAR_45, VAR_7, VAR_2, VAR_0, 0);
  FUNC_0(VAR_45, VAR_12, VAR_11, VAR_0, 0);
  FUNC_0(VAR_45, VAR_8, VAR_3, VAR_0, 0);
  FUNC_0(VAR_45, VAR_10, VAR_5, VAR_0, 0);
  FUNC_0(VAR_45, VAR_34, VAR_21, VAR_0, 0);
  FUNC_0(VAR_45, VAR_33, VAR_20, VAR_0, 0);
  FUNC_0(VAR_45, VAR_41, VAR_28, VAR_0, 0);
  FUNC_0(VAR_45, VAR_30, VAR_17, VAR_0, 0);
  FUNC_0(VAR_45, VAR_31, VAR_18, VAR_0, 0);
  FUNC_0(VAR_45, VAR_32, VAR_19, VAR_0, 0);
  FUNC_0(VAR_45, VAR_37, VAR_24, VAR_0, 0);
  FUNC_0(VAR_45, VAR_6, VAR_1, VAR_0, 0);
  FUNC_0(VAR_45, VAR_42, VAR_29, VAR_0, 0);
  FUNC_0(VAR_45, VAR_35, VAR_22, VAR_0, 0);
  FUNC_0(VAR_45, VAR_38, VAR_25, VAR_0, 0);
  FUNC_0(VAR_45, VAR_36, VAR_23, VAR_0, 0);
  FUNC_0(VAR_45, VAR_39, VAR_26, VAR_0, 0);
  FUNC_0(VAR_45, VAR_40, VAR_27, VAR_0, 0);

  return 0;
}
