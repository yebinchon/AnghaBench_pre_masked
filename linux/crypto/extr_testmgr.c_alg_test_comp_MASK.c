
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct crypto_comp {int dummy; } ;
typedef struct crypto_comp crypto_acomp ;
struct TYPE_6__ {int count; int vecs; } ;
struct TYPE_5__ {int count; int vecs; } ;
struct TYPE_7__ {TYPE_2__ decomp; TYPE_1__ comp; } ;
struct TYPE_8__ {TYPE_3__ comp; } ;
struct alg_test_desc {TYPE_4__ suite; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_comp*) ;
 int FUNC_1 (struct crypto_comp*) ;
 struct crypto_comp* FUNC_2 (char const*,scalar_t__,scalar_t__) ;
 struct crypto_comp* FUNC_3 (char const*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct crypto_comp*) ;
 int FUNC_5 (struct crypto_comp*) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (struct crypto_comp*,int ,int ,int ,int ) ;
 int FUNC_8 (struct crypto_comp*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(const struct alg_test_desc *VAR_2, const char *VAR_3,
    u32 VAR_4, u32 VAR_5)
{
 struct crypto_comp *VAR_6;
 struct crypto_acomp *VAR_7;
 int VAR_8;
 u32 VAR_9 = VAR_4 & VAR_1;

 if (VAR_9 == VAR_0) {
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
  if (FUNC_0(VAR_7)) {
   FUNC_6("alg: acomp: Failed to load transform for %s: %ld\n",
          VAR_3, FUNC_1(VAR_7));
   return FUNC_1(VAR_7);
  }
  VAR_8 = FUNC_7(VAR_7, VAR_2->suite.comp.comp.vecs,
     VAR_2->suite.comp.decomp.vecs,
     VAR_2->suite.comp.comp.count,
     VAR_2->suite.comp.decomp.count);
  FUNC_4(VAR_7);
 } else {
  VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
  if (FUNC_0(VAR_6)) {
   FUNC_6("alg: comp: Failed to load transform for %s: %ld\n",
          VAR_3, FUNC_1(VAR_6));
   return FUNC_1(VAR_6);
  }

  VAR_8 = FUNC_8(VAR_6, VAR_2->suite.comp.comp.vecs,
    VAR_2->suite.comp.decomp.vecs,
    VAR_2->suite.comp.comp.count,
    VAR_2->suite.comp.decomp.count);

  FUNC_5(VAR_6);
 }
 return VAR_8;
}
