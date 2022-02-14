
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct object_slot {void* value; void* string; } ;
struct TYPE_13__ {int ptr; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
typedef TYPE_2__ jv ;
struct TYPE_15__ {int next_free; } ;


 scalar_t__ FUNC_0 (TYPE_2__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 int* FUNC_4 (TYPE_2__) ;
 int FUNC_5 (TYPE_2__) ;
 struct object_slot* FUNC_6 (TYPE_2__,int) ;
 TYPE_2__ FUNC_7 (int) ;
 TYPE_6__* FUNC_8 (TYPE_2__) ;
 int FUNC_9 (TYPE_2__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int*,int*,int) ;

__attribute__((used)) static jv FUNC_12(jv VAR_2) {
  FUNC_1(FUNC_0(VAR_2, VAR_1));
  if (FUNC_10(VAR_2.u.ptr))
    return VAR_2;

  jv VAR_3 = FUNC_7(FUNC_9(VAR_2));
  FUNC_8(VAR_3)->next_free = FUNC_8(VAR_2)->next_free;
  for (int VAR_4=0; VAR_4<FUNC_9(VAR_3); VAR_4++) {
    struct object_slot* VAR_5 = FUNC_6(VAR_2, VAR_4);
    struct object_slot* VAR_6 = FUNC_6(VAR_3, VAR_4);
    *VAR_6 = *VAR_5;
    if (FUNC_3(VAR_5->string) != VAR_0) {
      VAR_6->string = FUNC_2(VAR_5->string);
      VAR_6->value = FUNC_2(VAR_5->value);
    }
  }

  int* VAR_7 = FUNC_4(VAR_2);
  int* VAR_8 = FUNC_4(VAR_3);
  FUNC_11(VAR_8, VAR_7, sizeof(int) * FUNC_9(VAR_3)*2);

  FUNC_5(VAR_2);
  FUNC_1(FUNC_10(VAR_3.u.ptr));
  return VAR_3;
}
