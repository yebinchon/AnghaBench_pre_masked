
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timestamp_t ;
struct complete_reflogs {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {scalar_t__ timestamp; } ;



__attribute__((used)) static int FUNC_0(struct complete_reflogs *VAR_0,
 timestamp_t VAR_1)
{
 int VAR_2;
 for (VAR_2 = VAR_0->nr - 1; VAR_2 >= 0; VAR_2--)
  if (VAR_1 >= VAR_0->items[VAR_2].timestamp)
   return VAR_2;
 return -1;
}
