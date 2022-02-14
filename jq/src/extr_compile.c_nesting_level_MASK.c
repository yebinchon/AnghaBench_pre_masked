
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct bytecode {struct bytecode* parent; } ;
struct TYPE_3__ {struct bytecode* compiled; } ;
typedef TYPE_1__ inst ;


 int FUNC_0 (int ) ;

__attribute__((used)) static uint16_t FUNC_1(struct bytecode* VAR_0, inst* VAR_1) {
  uint16_t VAR_2 = 0;
  FUNC_0(VAR_0 && VAR_1 && VAR_1->compiled);
  while (VAR_0 && VAR_1->compiled != VAR_0) {
    VAR_2++;
    VAR_0 = VAR_0->parent;
  }
  FUNC_0(VAR_0 && VAR_0 == VAR_1->compiled);
  return VAR_2;
}
