
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_12__ {char* cra_driver_name; } ;
struct TYPE_17__ {TYPE_3__ base; } ;
struct TYPE_10__ {char* cra_driver_name; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
struct TYPE_16__ {TYPE_2__ halg; } ;
struct TYPE_15__ {char* cra_driver_name; } ;
struct TYPE_13__ {TYPE_8__ aead; TYPE_7__ hash; TYPE_6__ crypto; } ;
struct TYPE_14__ {int registered; int type; TYPE_4__ alg; } ;


 int FUNC_0 (TYPE_5__*) ;



 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (struct device*,char*,char*) ;
 TYPE_5__* VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_1->dev;
 char *VAR_4;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {





  if (!VAR_0[VAR_2].registered)
   continue;

  switch (VAR_0[VAR_2].type) {
  case 130:
   FUNC_3(&VAR_0[VAR_2].alg.crypto);
   FUNC_4(VAR_3, "  unregistered cipher %s\n",
    VAR_0[VAR_2].alg.crypto.cra_driver_name);
   VAR_0[VAR_2].registered = 0;
   break;
  case 128:
   FUNC_2(&VAR_0[VAR_2].alg.hash);
   VAR_4 = VAR_0[VAR_2].alg.hash.halg.base.cra_driver_name;
   FUNC_4(VAR_3, "  unregistered hash %s\n", VAR_4);
   VAR_0[VAR_2].registered = 0;
   break;
  case 129:
   FUNC_1(&VAR_0[VAR_2].alg.aead);
   FUNC_4(VAR_3, "  unregistered aead %s\n",
    VAR_0[VAR_2].alg.aead.base.cra_driver_name);
   VAR_0[VAR_2].registered = 0;
   break;
  }
 }
 FUNC_5();
 FUNC_6(VAR_1);
 return 0;
}
