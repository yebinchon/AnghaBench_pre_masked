
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statinfo {int dummy; } ;
struct TYPE_2__ {scalar_t__ selected; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,int,int,int,struct statinfo*,struct statinfo*) ;
 int VAR_1 ;

void
FUNC_1(int VAR_2, int VAR_3, int VAR_4, struct statinfo *VAR_5, struct statinfo *VAR_6)
{
 int VAR_7, VAR_8;

 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_1 && VAR_8 < VAR_2; VAR_7++)
  if (VAR_0[VAR_7].selected)
   FUNC_0(VAR_3, VAR_4, VAR_7, ++VAR_8, VAR_5, VAR_6);
}
