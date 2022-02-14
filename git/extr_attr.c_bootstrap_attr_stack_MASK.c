
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct attr_stack {int dummy; } ;
struct TYPE_2__ {scalar_t__ have_repository; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct attr_stack**,struct attr_stack*,int *,int ) ;
 struct attr_stack* FUNC_5 (struct index_state const*,int ,int) ;
 struct attr_stack* FUNC_6 (int ) ;
 struct attr_stack* FUNC_7 (scalar_t__,int) ;
 TYPE_1__* VAR_2 ;
 struct attr_stack* FUNC_8 (int,int) ;
 int * FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(const struct index_state *VAR_3,
     struct attr_stack **VAR_4)
{
 struct attr_stack *VAR_5;

 if (*VAR_4)
  return;


 VAR_5 = FUNC_6(VAR_1);
 FUNC_4(VAR_4, VAR_5, ((void*)0), 0);


 if (FUNC_1()) {
  VAR_5 = FUNC_7(FUNC_2(), 1);
  FUNC_4(VAR_4, VAR_5, ((void*)0), 0);
 }


 if (FUNC_0()) {
  VAR_5 = FUNC_7(FUNC_0(), 1);
  FUNC_4(VAR_4, VAR_5, ((void*)0), 0);
 }


 VAR_5 = FUNC_5(VAR_3, VAR_0, 1);
 FUNC_4(VAR_4, VAR_5, FUNC_9(""), 0);


 if (VAR_2->have_repository)
  VAR_5 = FUNC_7(FUNC_3(), 1);
 else
  VAR_5 = ((void*)0);
 if (!VAR_5)
  VAR_5 = FUNC_8(1, sizeof(struct attr_stack));
 FUNC_4(VAR_4, VAR_5, ((void*)0), 0);
}
