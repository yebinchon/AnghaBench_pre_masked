
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct object_slot {scalar_t__ hash; int string; } ;
typedef int jv ;


 struct object_slot* FUNC_0 (int ,int) ;
 struct object_slot* FUNC_1 (int ,struct object_slot*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static struct object_slot* FUNC_4(jv VAR_0, jv VAR_1, int* VAR_2) {
  uint32_t VAR_3 = FUNC_3(VAR_1);
  for (struct object_slot* VAR_4 = FUNC_0(VAR_0, *VAR_2);
       VAR_4;
       VAR_4 = FUNC_1(VAR_0, VAR_4)) {
    if (VAR_4->hash == VAR_3 && FUNC_2(VAR_1, VAR_4->string)) {
      return VAR_4;
    }
  }
  return 0;
}
