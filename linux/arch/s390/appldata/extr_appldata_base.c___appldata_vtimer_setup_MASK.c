
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int expires; } ;





 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_4)
{
 u64 VAR_5 = (u64) VAR_1 * 1000 * VAR_0;

 switch (VAR_4) {
 case 130:
  if (VAR_3)
   break;
  VAR_2.expires = VAR_5;
  FUNC_0(&VAR_2);
  VAR_3 = 1;
  break;
 case 129:
  FUNC_1(&VAR_2);
  if (!VAR_3)
   break;
  VAR_3 = 0;
  break;
 case 128:
  if (!VAR_3)
   break;
  FUNC_2(&VAR_2, VAR_5);
 }
}
