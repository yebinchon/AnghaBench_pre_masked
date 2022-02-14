
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ham; int spam; } ;
typedef TYPE_1__ pair ;
typedef int ll ;
struct TYPE_6__ {int cnt; } ;
typedef TYPE_2__ bayes ;


 TYPE_1__* FUNC_0 (int *,int ) ;

void FUNC_1 (bayes *VAR_0, ll VAR_1, int VAR_2, int VAR_3) {
  pair *VAR_4;
  VAR_4 = FUNC_0 (&VAR_0->cnt, VAR_1);
  VAR_4->ham += VAR_2;
  VAR_4->spam += VAR_3;

  if (VAR_4->ham > 1000000000 || VAR_4->spam > 1000000000) {
    VAR_4->ham /= 2;
    VAR_4->spam /= 2;
  }

  if (VAR_4->ham < 0) {
    VAR_4->ham = 0;
  }

  if (VAR_4->spam < 0) {
    VAR_4->spam = 0;
  }

  return;
}
