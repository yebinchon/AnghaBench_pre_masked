
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inter_hashes; int uid; scalar_t__ name; struct interest* inter; } ;
typedef TYPE_1__ user_t ;
struct interest {scalar_t__ text; struct interest* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void FUNC_4 (user_t *VAR_2) {
  struct interest *VAR_3;
  if (!VAR_2) {
    return;
  }
  VAR_0 = 0;
  for (VAR_3 = VAR_2->inter; VAR_3; VAR_3 = VAR_3->next) {
    FUNC_2 (VAR_3->text, 1, -1, 0, VAR_1);
  }
  if (VAR_2->name) {
    FUNC_2 (VAR_2->name, 1, 2, 0, VAR_1);
  }
  FUNC_1 (VAR_2->uid, VAR_2->inter_hashes);
  VAR_2->inter_hashes = FUNC_3 (0, -1, VAR_1);
  FUNC_0 (VAR_2->uid, VAR_2->inter_hashes);
}
