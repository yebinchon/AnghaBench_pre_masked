
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ volume_id; int hostname; } ;
typedef TYPE_1__ host_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1 (const host_t *VAR_0, const host_t *VAR_1) {
  if (VAR_0->volume_id < VAR_1->volume_id) {
    return -1;
  }
  if (VAR_0->volume_id > VAR_1->volume_id) {
    return 1;
  }
  return FUNC_0 (VAR_0->hostname, VAR_1->hostname);
}
