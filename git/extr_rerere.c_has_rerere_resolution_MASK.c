
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rerere_id {int variant; TYPE_1__* collection; } ;
struct TYPE_2__ {int const* status; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct rerere_id *VAR_2)
{
 const int VAR_3 = VAR_0|VAR_1;
 int VAR_4 = VAR_2->variant;

 if (VAR_4 < 0)
  return 0;
 return ((VAR_2->collection->status[VAR_4] & VAR_3) == VAR_3);
}
