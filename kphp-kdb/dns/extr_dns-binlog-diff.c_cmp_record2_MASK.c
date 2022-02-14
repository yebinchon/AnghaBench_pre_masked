
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_len; int data; } ;
typedef TYPE_1__ record_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2 (const void *VAR_0, const void *VAR_1) {
  record_t *VAR_2 = (record_t *) VAR_0;
  record_t *VAR_3 = (record_t *) VAR_1;
  const int VAR_4 = FUNC_0 (VAR_2, VAR_3);
  if (VAR_4) { return VAR_4; }
  return FUNC_1 (VAR_2->data, VAR_2->data_len, VAR_3->data, VAR_3->data_len);
}
