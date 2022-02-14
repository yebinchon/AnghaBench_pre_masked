
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int * L; } ;
typedef TYPE_1__ ocb ;
typedef int cf_gf128 ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(ocb *VAR_1, uint32_t VAR_2, cf_gf128 VAR_3)
{

  if (VAR_2 < VAR_0)
  {
    FUNC_0(VAR_1->L[VAR_2], VAR_3, VAR_3);
    return;
  }


  cf_gf128 VAR_4;
  FUNC_2(VAR_4, VAR_1->L[VAR_0 - 1], sizeof VAR_4);

  for (uint32_t VAR_5 = VAR_0 - 1; VAR_5 < VAR_2; VAR_5++)
  {
    cf_gf128 VAR_6;
    FUNC_1(VAR_4, VAR_6);
    FUNC_2(VAR_4, VAR_6, sizeof VAR_4);
  }

  FUNC_0(VAR_4, VAR_3, VAR_3);
}
