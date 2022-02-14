
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aead_request {int iv; int assoclen; } ;
struct aead_req_ctx {int is_gcm4543; int plaintext_authenticate_only; int backup_iv; int assoclen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int ) ;
 int FUNC_2 (struct aead_req_ctx*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_3)
{
 struct aead_req_ctx *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));


 VAR_4->backup_iv = VAR_3->iv;
 VAR_4->assoclen = VAR_3->assoclen;
 VAR_4->is_gcm4543 = 0;

 VAR_4->plaintext_authenticate_only = 0;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (VAR_5 != -VAR_2 && VAR_5 != -VAR_1)
  VAR_3->iv = VAR_4->backup_iv;

 return VAR_5;
}
