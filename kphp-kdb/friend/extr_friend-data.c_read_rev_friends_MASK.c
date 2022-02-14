
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* right; struct TYPE_4__* left; int x1; } ;
typedef TYPE_1__ rev_friends_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,int) ;
 TYPE_1__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 int VAR_0 ;

__attribute__((used)) static rev_friends_t *FUNC_6 (void) {
  char *VAR_1 = FUNC_5 (1);
  if (!VAR_1) {
    FUNC_1 (VAR_0, "Unexpected end of file in read_tree\n");
    return 0;
  }
  char VAR_2 = VAR_1[0];
  FUNC_4 (1);
  FUNC_0 (VAR_2 == 4 || VAR_2 == 3);
  if (VAR_2 == 3) {
    return 0;
  }
  VAR_1 = FUNC_5 (16);
  if (!VAR_1) {
    FUNC_1 (VAR_0, "Unexpected end of file in read_tree\n");
    return 0;
  }
  rev_friends_t *VAR_3 = FUNC_3 (0, 0, 0);
  FUNC_2 (&VAR_3->x1, VAR_1, 16);
  FUNC_4 (16);
  VAR_3->left = FUNC_6 ();
  VAR_3->right = FUNC_6 ();
  return VAR_3;
}
