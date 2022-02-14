
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ qtype; int name_len; int name; } ;
typedef TYPE_1__ record_t ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1 (record_t *VAR_0, record_t *VAR_1) {
  const int VAR_2 = FUNC_0 (VAR_0->name, VAR_0->name_len, VAR_1->name, VAR_1->name_len);
  if (VAR_2) { return VAR_2; }
  if (VAR_0->qtype < VAR_1->qtype) { return -1; }
  if (VAR_0->qtype > VAR_1->qtype) { return 1; }
  return 0;
}
