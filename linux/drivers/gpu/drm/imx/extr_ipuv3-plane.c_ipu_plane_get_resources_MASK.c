
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_plane {int dma; scalar_t__ dp_flow; void* dp; int ipu; void* dmfc; void* alpha_ch; void* ipu_ch; } ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ,int) ;
 void* FUNC_5 (int ,scalar_t__) ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (struct ipu_plane*) ;

int FUNC_8(struct ipu_plane *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_0->ipu_ch = FUNC_6(VAR_0->ipu, VAR_0->dma);
 if (FUNC_1(VAR_0->ipu_ch)) {
  VAR_1 = FUNC_2(VAR_0->ipu_ch);
  FUNC_0("failed to get idmac channel: %d\n", VAR_1);
  return VAR_1;
 }

 VAR_2 = FUNC_3(VAR_0->dma);
 if (VAR_2 >= 0) {
  VAR_0->alpha_ch = FUNC_6(VAR_0->ipu, VAR_2);
  if (FUNC_1(VAR_0->alpha_ch)) {
   VAR_1 = FUNC_2(VAR_0->alpha_ch);
   FUNC_0("failed to get alpha idmac channel %d: %d\n",
      VAR_2, VAR_1);
   return VAR_1;
  }
 }

 VAR_0->dmfc = FUNC_4(VAR_0->ipu, VAR_0->dma);
 if (FUNC_1(VAR_0->dmfc)) {
  VAR_1 = FUNC_2(VAR_0->dmfc);
  FUNC_0("failed to get dmfc: ret %d\n", VAR_1);
  goto err_out;
 }

 if (VAR_0->dp_flow >= 0) {
  VAR_0->dp = FUNC_5(VAR_0->ipu, VAR_0->dp_flow);
  if (FUNC_1(VAR_0->dp)) {
   VAR_1 = FUNC_2(VAR_0->dp);
   FUNC_0("failed to get dp flow: %d\n", VAR_1);
   goto err_out;
  }
 }

 return 0;
err_out:
 FUNC_7(VAR_0);

 return VAR_1;
}
