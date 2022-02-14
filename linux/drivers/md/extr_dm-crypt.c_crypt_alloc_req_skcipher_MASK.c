
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tfms; } ;
struct crypt_config {int tfms_count; TYPE_1__ cipher_tfm; int req_pool; } ;
struct TYPE_4__ {scalar_t__ req; } ;
struct convert_context {int cc_sector; TYPE_2__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypt_config*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct crypt_config *VAR_3,
         struct convert_context *VAR_4)
{
 unsigned VAR_5 = VAR_4->cc_sector & (VAR_3->tfms_count - 1);

 if (!VAR_4->r.req)
  VAR_4->r.req = FUNC_1(&VAR_3->req_pool, VAR_1);

 FUNC_3(VAR_4->r.req, VAR_3->cipher_tfm.tfms[VAR_5]);





 FUNC_2(VAR_4->r.req,
     VAR_0,
     VAR_2, FUNC_0(VAR_3, VAR_4->r.req));
}
