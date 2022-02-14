
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int update_pos; char* update_operations; long long* update_data; void** update_times; } ;
struct TYPE_6__ {TYPE_1__ structured; } ;
struct TYPE_5__ {int update_pos; char* update_operations; long long* update_data; void** update_times; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 void* FUNC_0 () ;
 int VAR_4 ;

void FUNC_1 (int VAR_5, char VAR_6, long long VAR_7) {
  if (VAR_5 > VAR_4) {
    return;
  }
  int VAR_8 = VAR_1->structured.update_pos;
  VAR_1->structured.update_operations[VAR_8] = VAR_6;
  VAR_1->structured.update_data[VAR_8] = VAR_7;
  VAR_1->structured.update_times[VAR_8] = FUNC_0 ();
  VAR_1->structured.update_pos++;
  if (VAR_1->structured.update_pos == VAR_2) {
    VAR_1->structured.update_pos = 0;
  }
  VAR_8 = VAR_3->update_pos;
  VAR_3->update_operations[VAR_8] = VAR_6;
  VAR_3->update_data[VAR_8] = VAR_7;
  VAR_3->update_times[VAR_8] = FUNC_0 ();
  VAR_3->update_pos++;
  if (VAR_3->update_pos == VAR_0) {
    VAR_3->update_pos = 0;
  }
}
