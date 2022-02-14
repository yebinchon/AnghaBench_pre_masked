
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ index; int always; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4, 0xff, VAR_2 * (1 << VAR_0));

 for (VAR_5 = 0; VAR_3[VAR_5].index != VAR_1; VAR_5++) {
  if (!VAR_3[VAR_5].always)
   continue;

  FUNC_1(VAR_4, VAR_3[VAR_5].index, 1, 1);
 }
}
