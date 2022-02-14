
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hm_nvapi; } ;
typedef TYPE_1__ hwmon_ctx_t ;
struct TYPE_9__ {TYPE_1__* hwmon_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_10__ {void* lib; } ;
typedef TYPE_3__ NVAPI_PTR ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int ) ;
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
 void* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_4 (hashcat_ctx_t *VAR_19)
{
  hwmon_ctx_t *VAR_20 = VAR_19->hwmon_ctx;

  NVAPI_PTR *VAR_21 = (NVAPI_PTR *) VAR_20->hm_nvapi;

  FUNC_3 (VAR_21, 0, sizeof (NVAPI_PTR));
  VAR_21->lib = FUNC_2 ("nvapi.so");




  if (!VAR_21->lib)
  {



    return -1;
  }

  FUNC_1(VAR_21, VAR_18, VAR_8, VAR_0, 0);
  FUNC_0(VAR_21, VAR_16, VAR_7, VAR_18, 0x0150E828U, VAR_0, 0);
  FUNC_0(VAR_21, VAR_17, VAR_9, VAR_18, 0xD22BDD7EU, VAR_0, 0);
  FUNC_0(VAR_21, VAR_15, VAR_2, VAR_18, 0x6C2D048CU, VAR_0, 0);
  FUNC_0(VAR_21, VAR_10, VAR_1, VAR_18, 0xE5AC921FU, VAR_0, 0);
  FUNC_0(VAR_21, VAR_13, VAR_5, VAR_18, 0x409D9841U, VAR_0, 0);
  FUNC_0(VAR_21, VAR_14, VAR_6, VAR_18, 0x3D358A0CU, VAR_0, 0);
  FUNC_0(VAR_21, VAR_11, VAR_3, VAR_18, 0x1BE0B8E5U, VAR_0, 0);
  FUNC_0(VAR_21, VAR_12, VAR_4, VAR_18, 0x2A0A350FU, VAR_0, 0);

  return 0;
}
