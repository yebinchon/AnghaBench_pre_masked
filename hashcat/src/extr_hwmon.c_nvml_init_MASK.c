
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_7__ {scalar_t__ hm_nvml; } ;
typedef TYPE_1__ hwmon_ctx_t ;
struct TYPE_8__ {TYPE_1__* hwmon_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_9__ {void* lib; } ;
typedef TYPE_3__ NVML_PTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int HCFILE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ,int ) ;
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
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *,int*,int ,int*) ;
 int FUNC_4 (int,char*,char*,int) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
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
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static int FUNC_13 (hashcat_ctx_t *VAR_39)
{
  hwmon_ctx_t *VAR_40 = VAR_39->hwmon_ctx;

  NVML_PTR *VAR_41 = (NVML_PTR *) VAR_40->hm_nvml;

  FUNC_11 (VAR_41, 0, sizeof (NVML_PTR));
  if (!VAR_41->lib)
  {



    return -1;
  }

  FUNC_0(VAR_41, VAR_36, VAR_19, VAR_5, 0);
  FUNC_0(VAR_41, VAR_37, VAR_20, VAR_5, 0);
  FUNC_0(VAR_41, VAR_38, VAR_21, VAR_5, 0);
  FUNC_0(VAR_41, VAR_24, VAR_7, VAR_5, 0);
  FUNC_0(VAR_41, VAR_30, VAR_13, VAR_5, 0);
  FUNC_0(VAR_41, VAR_29, VAR_12, VAR_5, 0);
  FUNC_0(VAR_41, VAR_33, VAR_16, VAR_5, 0);
  FUNC_0(VAR_41, VAR_28, VAR_11, VAR_5, 0);
  FUNC_0(VAR_41, VAR_35, VAR_18, VAR_5, 0);
  FUNC_0(VAR_41, VAR_23, VAR_6, VAR_5, 0);
  FUNC_0(VAR_41, VAR_34, VAR_17, VAR_5, 0);
  FUNC_0(VAR_41, VAR_25, VAR_9, VAR_5, 0);
  FUNC_0(VAR_41, VAR_26, VAR_10, VAR_5, 0);
  FUNC_0(VAR_41, VAR_27, VAR_8, VAR_5, 0);
  FUNC_0(VAR_41, VAR_32, VAR_15, VAR_5, 0);
  FUNC_0(VAR_41, VAR_31, VAR_14, VAR_5, 0);

  return 0;
}
