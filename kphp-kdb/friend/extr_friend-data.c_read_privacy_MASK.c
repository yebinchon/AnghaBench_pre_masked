
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* left; int x; } ;
typedef TYPE_1__ privacy_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_6 (int) ;

__attribute__((used)) static privacy_t *FUNC_7 (void) {
  char *VAR_3 = FUNC_5 (1);
  if (!VAR_3) {
    FUNC_2 (VAR_1, "Unexpected end of file in read_privacy\n");
    return 0;
  }
  char VAR_4 = VAR_3[0];
  FUNC_4 (1);
  FUNC_0 (VAR_4 == 2 || VAR_4 == 3);
  if (VAR_4 == 2) {
    return 0;
  }
  VAR_3 = FUNC_5 (16);
  if (!VAR_3) {
    FUNC_2 (VAR_1, "Unexpected end of file in read_privacy\n");
    return 0;
  }
  int VAR_5 = FUNC_1 ((privacy_t *)(VAR_3 - 2 * sizeof (privacy_t *)));
  privacy_t *VAR_6 = FUNC_6 (VAR_5);
  VAR_3 = FUNC_5 (VAR_5 - 2 * sizeof (privacy_t *));
  if (!VAR_3) {
    FUNC_2 (VAR_1, "Unexpected end of file in read_privacy\n");
  }
  FUNC_3 (&VAR_6->x, VAR_3, VAR_5 - 2 * sizeof (privacy_t *));
  FUNC_4 (VAR_5 - 2 * sizeof (privacy_t *));
  VAR_6->left = FUNC_7 ();
  VAR_6->right = FUNC_7 ();
  FUNC_0 (VAR_5 == FUNC_1 (VAR_6));
  VAR_2 += VAR_5;
  VAR_0++;
  return VAR_6;
}
