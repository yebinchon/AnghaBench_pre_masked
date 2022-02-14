
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mid_pwr {TYPE_1__** lss; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mid_pwr*,int,int const) ;
 int FUNC_1 (struct mid_pwr*,int,int) ;
 int FUNC_2 (struct mid_pwr*,int ) ;

__attribute__((used)) static int FUNC_3(struct mid_pwr *VAR_4, const u32 *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8;







 FUNC_1(VAR_4, 0, 0xffffffff);
 FUNC_1(VAR_4, 1, 0xffffffff);
 FUNC_0(VAR_4, 0, VAR_5[0]);
 FUNC_0(VAR_4, 1, VAR_5[1]);
 FUNC_0(VAR_4, 2, VAR_5[2]);
 FUNC_0(VAR_4, 3, VAR_5[3]);


 VAR_8 = FUNC_2(VAR_4, VAR_0);
 if (VAR_8)
  return VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   VAR_4->lss[VAR_6][VAR_7].state = VAR_3;
 }

 return 0;
}
