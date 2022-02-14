
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_kms_sou_readback_blit {int dummy; } ;
struct vmw_kms_dirty {int num_hits; int dev_priv; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct vmw_kms_dirty *VAR_0)
{
 if (!VAR_0->num_hits) {
  FUNC_0(VAR_0->dev_priv, 0);
  return;
 }

 FUNC_0(VAR_0->dev_priv,
   sizeof(struct vmw_kms_sou_readback_blit) *
   VAR_0->num_hits);
}
