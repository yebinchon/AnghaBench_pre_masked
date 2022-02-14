
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef int cap_rights_t ;
struct TYPE_2__ {int cd_desc; int cd_right; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static u_int
FUNC_2(cap_rights_t *VAR_2)
{
 u_int VAR_3, VAR_4, VAR_5;

 VAR_3 = 0;
 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_0(VAR_2, VAR_0[VAR_4].cd_right)) {
   VAR_5 += FUNC_1(VAR_0[VAR_4].cd_desc);
   if (VAR_3)
    VAR_5++;
   VAR_3++;
  }
 }
 return (VAR_5);
}
