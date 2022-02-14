
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_reqctx {int dummy; } ;
struct omap_sham_hmac_ctx {void* shash; } ;
struct omap_sham_ctx {void* fallback; int flags; struct omap_sham_hmac_ctx* base; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (int ,scalar_t__) ;
 void* FUNC_5 (char const*,int ,int ) ;
 int FUNC_6 (void*) ;
 char* FUNC_7 (struct crypto_tfm*) ;
 struct omap_sham_ctx* FUNC_8 (struct crypto_tfm*) ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static int FUNC_10(struct crypto_tfm *VAR_3, const char *VAR_4)
{
 struct omap_sham_ctx *VAR_5 = FUNC_8(VAR_3);
 const char *VAR_6 = FUNC_7(VAR_3);


 VAR_5->fallback = FUNC_5(VAR_6, 0,
         VAR_1);
 if (FUNC_1(VAR_5->fallback)) {
  FUNC_9("omap-sham: fallback driver '%s' "
    "could not be loaded.\n", VAR_6);
  return FUNC_2(VAR_5->fallback);
 }

 FUNC_4(FUNC_3(VAR_3),
     sizeof(struct omap_sham_reqctx) + VAR_0);

 if (VAR_4) {
  struct omap_sham_hmac_ctx *VAR_7 = VAR_5->base;
  VAR_5->flags |= FUNC_0(VAR_2);
  VAR_7->shash = FUNC_5(VAR_4, 0,
      VAR_1);
  if (FUNC_1(VAR_7->shash)) {
   FUNC_9("omap-sham: base driver '%s' "
     "could not be loaded.\n", VAR_4);
   FUNC_6(VAR_5->fallback);
   return FUNC_2(VAR_7->shash);
  }

 }

 return 0;
}
