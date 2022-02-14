
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int id; int data; } ;
typedef TYPE_1__ GMetrics ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2 (char *VAR_0, uint8_t VAR_1, GMetrics ** VAR_2)
{
  GMetrics *VAR_3;

  VAR_3 = FUNC_0 ();
  VAR_3->data = FUNC_1 (VAR_0);
  VAR_3->id = VAR_1;
  *VAR_2 = VAR_3;

  return 0;
}
