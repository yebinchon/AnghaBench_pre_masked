
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iv_lmk_private {scalar_t__ seed; } ;
struct TYPE_2__ {struct iv_lmk_private lmk; } ;
struct crypt_config {TYPE_1__ iv_gen_private; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct crypt_config *VAR_1)
{
 struct iv_lmk_private *VAR_2 = &VAR_1->iv_gen_private.lmk;

 if (VAR_2->seed)
  FUNC_0(VAR_2->seed, 0, VAR_0);

 return 0;
}
