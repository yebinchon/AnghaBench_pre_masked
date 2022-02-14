
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {TYPE_2__* input; } ;
struct TYPE_4__ {int product; } ;
struct TYPE_5__ {TYPE_1__ id; } ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (int,int,int,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u16
FUNC_2(int VAR_1, int VAR_2, int VAR_3,
   int VAR_4, int VAR_5)
{
 if (VAR_0[VAR_1]) {
  if (VAR_0[VAR_1]->input->id.product !=
      ((VAR_1 << 12)|(VAR_2 << 8)|VAR_3)) {
   FUNC_1(VAR_1);
   FUNC_0(VAR_1, VAR_2, VAR_3,
           VAR_4, VAR_5);
  }
 } else
  FUNC_0(VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5);
 return 1<<VAR_1;
}
