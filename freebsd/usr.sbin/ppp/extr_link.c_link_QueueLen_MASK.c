
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link {TYPE_1__* Queue; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 unsigned int FUNC_0 (struct link*) ;

size_t
FUNC_1(struct link *VAR_0)
{
  unsigned VAR_1;
  size_t VAR_2;

  for (VAR_1 = 0, VAR_2 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
    VAR_2 += VAR_0->Queue[VAR_1].len;

  return VAR_2;
}
