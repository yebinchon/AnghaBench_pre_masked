
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ word; } ;
typedef TYPE_1__ iheap_en_t ;
typedef scalar_t__ hash_t ;



iheap_en_t *FUNC_0 (iheap_en_t *VAR_0, int VAR_1, hash_t VAR_2) {
  int VAR_3 = -1, VAR_4 = VAR_1;
  while (VAR_4 - VAR_3 > 1) {
    int VAR_5 = ((VAR_3 + VAR_4) >> 1);
    if (VAR_0[VAR_5].word <= VAR_2) { VAR_3 = VAR_5; } else { VAR_4 = VAR_5; }
  }
  if (VAR_3 >= 0 && VAR_0[VAR_3].word == VAR_2) {
    return VAR_0 + VAR_3;
  } else {
    return ((void*)0);
  }
}
