
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int task_name; scalar_t__ is_helper; scalar_t__ main; } ;
typedef TYPE_1__ task_entry_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const task_entry_t* VAR_1,
                        const task_entry_t** VAR_2) {
  const task_entry_t* VAR_3;
  int VAR_4;

  for (VAR_4 = 0, VAR_3 = VAR_0; VAR_3->main; VAR_3++) {
    if (VAR_3->is_helper && FUNC_0(VAR_3->task_name, VAR_1->task_name) == 0) {
      *VAR_2++ = VAR_3;
      VAR_4++;
    }
  }

  return VAR_4;
}
