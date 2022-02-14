
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_7__ {int aead; int hash; int crypto; } ;
struct TYPE_8__ {int type; int registered; TYPE_1__ alg; } ;


 int FUNC_0 (TYPE_2__*) ;



 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  switch (VAR_1[VAR_3].type) {
  case 130:
   VAR_5 = FUNC_5(&VAR_1[VAR_3]);
   break;
  case 128:
   VAR_5 = FUNC_7(&VAR_1[VAR_3]);
   break;
  case 129:
   VAR_5 = FUNC_6(&VAR_1[VAR_3]);
   break;
  default:
   FUNC_4(VAR_2,
    "iproc-crypto: unknown alg type: %d",
    VAR_1[VAR_3].type);
   VAR_5 = -VAR_0;
  }

  if (VAR_5) {
   FUNC_4(VAR_2, "alg registration failed with error %d\n",
    VAR_5);
   goto err_algs;
  }
 }

 return 0;

err_algs:
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {

  if (!VAR_1[VAR_4].registered)
   continue;
  switch (VAR_1[VAR_4].type) {
  case 130:
   FUNC_3(&VAR_1[VAR_4].alg.crypto);
   VAR_1[VAR_4].registered = 0;
   break;
  case 128:
   FUNC_2(&VAR_1[VAR_4].alg.hash);
   VAR_1[VAR_4].registered = 0;
   break;
  case 129:
   FUNC_1(&VAR_1[VAR_4].alg.aead);
   VAR_1[VAR_4].registered = 0;
   break;
  }
 }
 return VAR_5;
}
