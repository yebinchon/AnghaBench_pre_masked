
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int date; int x1; int x2; int y; struct TYPE_8__* right; struct TYPE_8__* left; } ;
typedef TYPE_1__ rev_friends_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int,int) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,TYPE_1__*,int,int) ;

__attribute__((used)) static rev_friends_t *FUNC_3 (rev_friends_t *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  rev_friends_t *VAR_5;
  if (!VAR_0) {
    VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_3);
    VAR_5->date = VAR_4;
    return VAR_5;
  }
  FUNC_0 (VAR_1 != VAR_0->x1 || VAR_2 != VAR_0->x2);
  if (VAR_0->y >= VAR_3) {
    if (VAR_1 < VAR_0->x1 || (VAR_1 == VAR_0->x1 && VAR_2 < VAR_0->x2)) {
      VAR_0->left = FUNC_3 (VAR_0->left, VAR_1, VAR_2, VAR_3, VAR_4);
    } else {
      VAR_0->right = FUNC_3 (VAR_0->right, VAR_1, VAR_2, VAR_3, VAR_4);
    }
    return VAR_0;
  }
  VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_3);
  VAR_5->date = VAR_4;
  FUNC_2 (&VAR_5->left, &VAR_5->right, VAR_0, VAR_1, VAR_2);
  return VAR_5;
}
