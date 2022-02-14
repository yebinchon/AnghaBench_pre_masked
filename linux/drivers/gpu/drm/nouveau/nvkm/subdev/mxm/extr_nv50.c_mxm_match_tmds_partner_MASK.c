
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_mxm {int dummy; } ;
struct mxms_odev {int outp_type; scalar_t__ dig_conn; } ;
struct TYPE_2__ {scalar_t__ dig_conn; } ;
struct context {TYPE_1__ desc; } ;


 int FUNC_0 (struct nvkm_mxm*,int *,struct mxms_odev*) ;

__attribute__((used)) static bool
FUNC_1(struct nvkm_mxm *VAR_0, u8 *VAR_1, void *VAR_2)
{
 struct context *VAR_3 = VAR_2;
 struct mxms_odev VAR_4;

 FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_4.outp_type == 2 &&
     VAR_4.dig_conn == VAR_3->desc.dig_conn)
  return 0;
 return 1;
}
