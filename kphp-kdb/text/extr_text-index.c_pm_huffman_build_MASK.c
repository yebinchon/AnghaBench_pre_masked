
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int right; TYPE_1__* w; scalar_t__ left; } ;
typedef TYPE_2__ pm_cell_t ;
struct TYPE_12__ {int* next; size_t choice; int * freq; } ;
struct TYPE_10__ {int freq; } ;


 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5 (pm_cell_t *VAR_4, int VAR_5) {
  int VAR_6;
  FUNC_0 ((unsigned) VAR_5 < (1 << 27) && VAR_5 > 1);
  VAR_4 += VAR_5;
  VAR_4[0].left = 0;
  VAR_4[0].right = 15 * VAR_5;
  VAR_1[32].freq[0] = VAR_1[32].freq[1] = VAR_0;

  for (VAR_6 = 31; VAR_6 >= 0; VAR_6--) {
    VAR_1[VAR_6].next[0] = -VAR_5;
    VAR_1[VAR_6].freq[0] = VAR_4[-VAR_5].w->freq;
    FUNC_3 (VAR_4, VAR_1 + VAR_6);

  }
  for (VAR_6 = 2*VAR_5 - 2; VAR_6 > 0; VAR_6--) {

    int VAR_7 = VAR_1->next[VAR_1->choice];
    FUNC_0 (VAR_7);

    FUNC_4 (VAR_4, VAR_7);

    FUNC_2 (VAR_4, VAR_1);
  }
  if (VAR_3 > 1) {
    FUNC_1 (VAR_2, "package-merge: maximal memory usage is %d+%d 8-byte cells out of %d+%d\n", VAR_5, 15 * VAR_5 - VAR_4[0].right, VAR_5, 15 * VAR_5);
  }
}
