
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ (* uiOpenTypeFeaturesForEachFunc ) (TYPE_1__ const*,int ,int ,int ,int ,int ,void*) ;
struct TYPE_6__ {size_t len; struct feature* data; } ;
typedef TYPE_1__ uiOpenTypeFeatures ;
typedef scalar_t__ uiForEach ;
struct feature {int value; int d; int c; int b; int a; } ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,int ,int ,int ,int ,int ,void*) ;
 scalar_t__ VAR_0 ;

void FUNC_1(const uiOpenTypeFeatures *VAR_1, uiOpenTypeFeaturesForEachFunc VAR_2, void *VAR_3)
{
 size_t VAR_4;
 const struct feature *VAR_5;
 uiForEach VAR_6;

 VAR_5 = VAR_1->data;
 for (VAR_4 = 0; VAR_4 < VAR_1->len; VAR_4++) {
  VAR_6 = (*VAR_2)(VAR_1, VAR_5->a, VAR_5->b, VAR_5->c, VAR_5->d, VAR_5->value, VAR_3);

  if (VAR_6 == VAR_0)
   return;
  VAR_5++;
 }
}
