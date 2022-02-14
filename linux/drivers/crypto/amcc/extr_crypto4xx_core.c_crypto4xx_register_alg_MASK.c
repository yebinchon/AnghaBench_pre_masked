
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto4xx_device {int alg_list; } ;
struct TYPE_2__ {int cipher; int rng; int hash; int aead; } ;
struct crypto4xx_alg_common {int type; TYPE_1__ u; } ;
struct crypto4xx_alg {int entry; struct crypto4xx_alg_common alg; struct crypto4xx_device* dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct crypto4xx_alg*) ;
 struct crypto4xx_alg* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct crypto4xx_device *VAR_2,
      struct crypto4xx_alg_common *VAR_3,
      int VAR_4)
{
 struct crypto4xx_alg *VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_5(sizeof(struct crypto4xx_alg), VAR_1);
  if (!VAR_5)
   return -VAR_0;

  VAR_5->alg = VAR_3[VAR_6];
  VAR_5->dev = VAR_2;

  switch (VAR_5->alg.type) {
  case 130:
   VAR_7 = FUNC_0(&VAR_5->alg.u.aead);
   break;

  case 129:
   VAR_7 = FUNC_1(&VAR_5->alg.u.hash);
   break;

  case 128:
   VAR_7 = FUNC_2(&VAR_5->alg.u.rng);
   break;

  default:
   VAR_7 = FUNC_3(&VAR_5->alg.u.cipher);
   break;
  }

  if (VAR_7)
   FUNC_4(VAR_5);
  else
   FUNC_6(&VAR_5->entry, &VAR_2->alg_list);
 }

 return 0;
}
