
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
typedef int dllname ;
struct TYPE_8__ {scalar_t__ nvrtc; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_9__ {int * lib; } ;
typedef TYPE_3__ NVRTC_PTR ;


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
 void* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
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
 int FUNC_3 (char*,int,char*,int,int) ;

int FUNC_4 (hashcat_ctx_t *VAR_23)
{
  backend_ctx_t *VAR_24 = VAR_23->backend_ctx;

  NVRTC_PTR *VAR_25 = (NVRTC_PTR *) VAR_24->nvrtc;

  FUNC_2 (VAR_25, 0, sizeof (NVRTC_PTR));
  VAR_25->lib = FUNC_1 ("libnvrtc.so");

  if (VAR_25->lib == ((void*)0)) VAR_25->lib = FUNC_1 ("libnvrtc.so.1");


  if (VAR_25->lib == ((void*)0)) return -1;

  FUNC_0 (VAR_25, VAR_12, VAR_1, VAR_0, 1);
  FUNC_0 (VAR_25, VAR_13, VAR_2, VAR_0, 1);
  FUNC_0 (VAR_25, VAR_14, VAR_3, VAR_0, 1);
  FUNC_0 (VAR_25, VAR_15, VAR_4, VAR_0, 1);
  FUNC_0 (VAR_25, VAR_17, VAR_6, VAR_0, 1);
  FUNC_0 (VAR_25, VAR_18, VAR_9, VAR_0, 1);
  FUNC_0 (VAR_25, VAR_19, VAR_10, VAR_0, 1);
  FUNC_0 (VAR_25, VAR_20, VAR_7, VAR_0, 1);
  FUNC_0 (VAR_25, VAR_21, VAR_8, VAR_0, 1);
  FUNC_0 (VAR_25, VAR_16, VAR_5, VAR_0, 1);
  FUNC_0 (VAR_25, VAR_22, VAR_11, VAR_0, 1);

  return 0;
}
