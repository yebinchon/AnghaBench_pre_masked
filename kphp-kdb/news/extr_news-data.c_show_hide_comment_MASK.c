
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* first; } ;
typedef TYPE_1__ place_t ;
struct TYPE_5__ {int item; int date; struct TYPE_5__* next; } ;
typedef TYPE_2__ comment_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 TYPE_1__* FUNC_1 (int,int,int,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  if (VAR_2 < VAR_1) {
    return 0;
  }
  if (!FUNC_0 (VAR_3, VAR_4, VAR_5) || !VAR_0 || !FUNC_2 (VAR_3)) {
    return -1;
  }

  place_t *VAR_8 = FUNC_1 (VAR_3, VAR_4, VAR_5, 0);
  if (!VAR_8) {
    return 0;
  }

  comment_t *VAR_9;
  int VAR_10 = 0;
  for (VAR_9 = VAR_8->first; VAR_9 != (comment_t *) VAR_8; VAR_9 = VAR_9->next) {
    if (VAR_9->item == VAR_6 && (VAR_9->date ^ VAR_7) >= 0) {
      VAR_10++;
      VAR_9->date ^= (-1 << 31);
    }
  }

  return VAR_10;
}
