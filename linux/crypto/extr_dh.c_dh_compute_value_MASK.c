
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpp_request {scalar_t__ src; int dst_len; int dst; int src_len; } ;
struct dh_ctx {scalar_t__ g; int xa; } ;
struct crypto_kpp {int dummy; } ;
typedef scalar_t__ MPI ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dh_ctx*,scalar_t__,scalar_t__) ;
 struct crypto_kpp* FUNC_1 (struct kpp_request*) ;
 struct dh_ctx* FUNC_2 (struct crypto_kpp*) ;
 int FUNC_3 (struct dh_ctx*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ,int ,int*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct kpp_request *VAR_3)
{
 struct crypto_kpp *VAR_4 = FUNC_1(VAR_3);
 struct dh_ctx *VAR_5 = FUNC_2(VAR_4);
 MPI VAR_6, VAR_7 = FUNC_4(0);
 int VAR_8 = 0;
 int VAR_9;

 if (!VAR_7)
  return -VAR_2;

 if (FUNC_8(!VAR_5->xa)) {
  VAR_8 = -VAR_1;
  goto err_free_val;
 }

 if (VAR_3->src) {
  VAR_6 = FUNC_6(VAR_3->src, VAR_3->src_len);
  if (!VAR_6) {
   VAR_8 = -VAR_1;
   goto err_free_val;
  }
  VAR_8 = FUNC_3(VAR_5, VAR_6);
  if (VAR_8)
   goto err_free_base;
 } else {
  VAR_6 = VAR_5->g;
 }

 VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  goto err_free_base;

 VAR_8 = FUNC_7(VAR_7, VAR_3->dst, VAR_3->dst_len, &VAR_9);
 if (VAR_8)
  goto err_free_base;

 if (VAR_9 < 0)
  VAR_8 = -VAR_0;
err_free_base:
 if (VAR_3->src)
  FUNC_5(VAR_6);
err_free_val:
 FUNC_5(VAR_7);
 return VAR_8;
}
