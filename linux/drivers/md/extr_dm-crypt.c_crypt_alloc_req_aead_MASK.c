
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * tfms_aead; } ;
struct crypt_config {TYPE_2__ cipher_tfm; int req_pool; } ;
struct TYPE_3__ {scalar_t__ req_aead; } ;
struct convert_context {TYPE_1__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct crypt_config*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct crypt_config *VAR_3,
     struct convert_context *VAR_4)
{
 if (!VAR_4->r.req_aead)
  VAR_4->r.req_aead = FUNC_3(&VAR_3->req_pool, VAR_1);

 FUNC_1(VAR_4->r.req_aead, VAR_3->cipher_tfm.tfms_aead[0]);





 FUNC_0(VAR_4->r.req_aead,
     VAR_0,
     VAR_2, FUNC_2(VAR_3, VAR_4->r.req_aead));
}
