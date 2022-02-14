
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_8__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_9__ {int * lib; } ;
typedef TYPE_3__ OCL_PTR ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int) ;
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
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

int FUNC_3 (hashcat_ctx_t *VAR_65)
{
  backend_ctx_t *VAR_66 = VAR_65->backend_ctx;

  OCL_PTR *VAR_67 = (OCL_PTR *) VAR_66->ocl;

  FUNC_2 (VAR_67, 0, sizeof (OCL_PTR));
  VAR_67->lib = FUNC_1 ("libOpenCL.so");

  if (VAR_67->lib == ((void*)0)) VAR_67->lib = FUNC_1 ("libOpenCL.so.1");


  if (VAR_67->lib == ((void*)0)) return -1;

  FUNC_0 (VAR_67, VAR_33, VAR_0, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_34, VAR_1, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_35, VAR_2, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_36, VAR_3, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_37, VAR_4, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_38, VAR_5, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_39, VAR_6, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_40, VAR_7, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_41, VAR_8, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_42, VAR_9, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_43, VAR_10, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_44, VAR_11, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_45, VAR_12, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_46, VAR_13, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_47, VAR_14, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_48, VAR_15, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_49, VAR_16, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_50, VAR_17, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_52, VAR_19, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_53, VAR_20, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_54, VAR_21, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_55, VAR_22, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_56, VAR_23, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_57, VAR_24, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_58, VAR_25, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_60, VAR_27, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_61, VAR_28, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_62, VAR_29, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_63, VAR_30, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_64, VAR_31, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_51, VAR_18, VAR_32, 1);
  FUNC_0 (VAR_67, VAR_59, VAR_26, VAR_32, 1);

  return 0;
}
