
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pr_tree; } ;
typedef TYPE_1__ user_t ;
typedef int privacy_key_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2 (user_t *VAR_0, privacy_key_t VAR_1) {
  if (!VAR_0 || !VAR_1) {
    return -1;
  }
  if (FUNC_1 (VAR_0->pr_tree, VAR_1)) {
    VAR_0->pr_tree = FUNC_0 (VAR_0->pr_tree, VAR_1);
    return 1;
  } else {
    return 0;
  }
}
