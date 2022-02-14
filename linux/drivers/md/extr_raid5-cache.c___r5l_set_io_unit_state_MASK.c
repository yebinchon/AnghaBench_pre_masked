
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_io_unit {int state; } ;
typedef enum r5l_io_unit_state { ____Placeholder_r5l_io_unit_state } r5l_io_unit_state ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct r5l_io_unit *VAR_0,
        enum r5l_io_unit_state VAR_1)
{
 if (FUNC_0(VAR_0->state >= VAR_1))
  return;
 VAR_0->state = VAR_1;
}
