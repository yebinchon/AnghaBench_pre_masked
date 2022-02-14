
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_zip_ctx {int dummy; } ;
struct crypto_acomp {int base; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (int *) ;
 struct hisi_zip_ctx* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct hisi_zip_ctx*) ;
 int FUNC_4 (struct hisi_zip_ctx*) ;
 int FUNC_5 (struct hisi_zip_ctx*) ;
 int FUNC_6 (struct hisi_zip_ctx*,int ) ;
 int FUNC_7 (struct hisi_zip_ctx*) ;
 int FUNC_8 (struct hisi_zip_ctx*,int ) ;

__attribute__((used)) static int FUNC_9(struct crypto_acomp *VAR_1)
{
 const char *VAR_2 = FUNC_1(&VAR_1->base);
 struct hisi_zip_ctx *VAR_3 = FUNC_2(&VAR_1->base);
 int VAR_4;

 VAR_4 = FUNC_6(VAR_3, FUNC_0(VAR_2));
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto err_ctx_exit;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  goto err_release_req_q;

 FUNC_8(VAR_3, VAR_0);

 return 0;

err_release_req_q:
 FUNC_7(VAR_3);
err_ctx_exit:
 FUNC_5(VAR_3);
 return VAR_4;
}
