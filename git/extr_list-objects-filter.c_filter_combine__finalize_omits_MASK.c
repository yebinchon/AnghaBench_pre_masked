
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oidset {int dummy; } ;
struct combine_filter_data {size_t nr; TYPE_1__* sub; } ;
struct TYPE_2__ {int omits; } ;


 int FUNC_0 (struct oidset*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(
 struct oidset *VAR_0,
 void *VAR_1)
{
 struct combine_filter_data *VAR_2 = VAR_1;
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr; VAR_3++) {
  FUNC_0(VAR_0, &VAR_2->sub[VAR_3].omits);
  FUNC_1(&VAR_2->sub[VAR_3].omits);
 }
}
