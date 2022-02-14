
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int spam; int ham; } ;
typedef TYPE_1__ pair ;
typedef int ll ;
struct TYPE_6__ {int cnt; } ;
typedef TYPE_2__ bayes ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;

int FUNC_1 (bayes *VAR_1, ll VAR_2, int VAR_3) {
  pair *VAR_4 = FUNC_0 (&VAR_1->cnt, VAR_2);
  if (VAR_4 == ((void*)0))
    return 0;
  if (VAR_3 == VAR_0) {
    return VAR_4->spam;
  } else {
    return VAR_4->ham;
  }
}
