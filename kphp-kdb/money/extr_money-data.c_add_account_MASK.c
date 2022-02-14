
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct account {struct account* h_next; int acc_id; TYPE_1__* acc_type; } ;
struct TYPE_2__ {int acc_type_id; } ;


 struct account** VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1 (struct account *VAR_1) {
  int VAR_2 = FUNC_0 (VAR_1->acc_type->acc_type_id, VAR_1->acc_id);

  VAR_1->h_next = VAR_0[VAR_2];
  VAR_0[VAR_2] = VAR_1;
  return 0;
}
