
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pr_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_8__ {int x; } ;
typedef TYPE_2__ privacy_t ;
typedef int privacy_key_t ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4 (user_t *VAR_0, privacy_key_t VAR_1, int VAR_2) {
  if (!VAR_0 || !VAR_1) {
    return -1;
  }
  if (!VAR_2 && !FUNC_1 (VAR_0->pr_tree, VAR_1)) {
    return -1;
  }

  FUNC_3 (VAR_0);

  privacy_t *VAR_3 = FUNC_0();
  VAR_3->x = VAR_1;

  VAR_0->pr_tree = FUNC_2 (VAR_0->pr_tree, VAR_3, 0);
  return 1;
}
