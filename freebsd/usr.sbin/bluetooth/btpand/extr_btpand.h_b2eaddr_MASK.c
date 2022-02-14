
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * b; } ;
typedef TYPE_1__ bdaddr_t ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(void *VAR_1, bdaddr_t *VAR_2)
{
 uint8_t *VAR_3 = VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3[VAR_4] = VAR_2->b[VAR_0 - VAR_4 - 1];
}
