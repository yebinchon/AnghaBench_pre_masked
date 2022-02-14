
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hash; int aead; int crypto; } ;
struct TYPE_5__ {int type; scalar_t__ is_registered; TYPE_1__ alg; } ;


 int FUNC_0 (TYPE_2__*) ;



 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  switch (VAR_1[VAR_2].type & VAR_0) {
  case 130:
   if (VAR_1[VAR_2].is_registered)
    FUNC_3(
      &VAR_1[VAR_2].alg.crypto);
   break;
  case 129:
   if (VAR_1[VAR_2].is_registered)
    FUNC_1(
      &VAR_1[VAR_2].alg.aead);
   break;
  case 128:
   if (VAR_1[VAR_2].is_registered)
    FUNC_2(
      &VAR_1[VAR_2].alg.hash);
   break;
  }
  VAR_1[VAR_2].is_registered = 0;
 }
 return 0;
}
