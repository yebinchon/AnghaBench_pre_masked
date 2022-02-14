
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int items; int size; int module; scalar_t__ idx; } ;
typedef TYPE_1__ GRawData ;
typedef int GModule ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static GRawData *
FUNC_2 (GModule VAR_0, uint32_t VAR_1)
{
  GRawData *VAR_2;

  VAR_2 = FUNC_0 ();
  VAR_2->idx = 0;
  VAR_2->module = VAR_0;
  VAR_2->size = VAR_1;
  VAR_2->items = FUNC_1 (VAR_1);

  return VAR_2;
}
