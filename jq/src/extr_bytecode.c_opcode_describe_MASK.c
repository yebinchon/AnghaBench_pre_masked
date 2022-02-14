
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opcode_description {int dummy; } ;
typedef size_t opcode ;


 int VAR_0 ;
 struct opcode_description const VAR_1 ;
 struct opcode_description const* VAR_2 ;

const struct opcode_description* FUNC_0(opcode VAR_3) {
  if ((int)VAR_3 >= 0 && (int)VAR_3 < VAR_0) {
    return &VAR_2[VAR_3];
  } else {
    return &VAR_1;
  }
}
