
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ht_struct {int dummy; } ;
typedef TYPE_1__* ht_t ;
struct TYPE_6__ {struct TYPE_6__* buckets; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(ht_t VAR_0) {
  if (VAR_0) {
    FUNC_1(VAR_0);
    FUNC_0(VAR_0->buckets);
    FUNC_2(VAR_0, 0, sizeof(struct ht_struct));
    FUNC_0(VAR_0);
  }
}
