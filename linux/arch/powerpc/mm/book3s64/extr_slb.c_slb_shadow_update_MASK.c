
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slb_shadow {TYPE_1__* save_area; } ;
typedef enum slb_index { ____Placeholder_slb_index } slb_index ;
struct TYPE_2__ {int esid; int vsid; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct slb_shadow* FUNC_2 () ;
 int FUNC_3 (unsigned long,int,int) ;
 int FUNC_4 (unsigned long,int,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(unsigned long VAR_0, int VAR_1,
         unsigned long VAR_2,
         enum slb_index VAR_3)
{
 struct slb_shadow *VAR_4 = FUNC_2();






 FUNC_0(VAR_4->save_area[VAR_3].esid, 0);
 FUNC_0(VAR_4->save_area[VAR_3].vsid, FUNC_1(FUNC_4(VAR_0, VAR_1, VAR_2)));
 FUNC_0(VAR_4->save_area[VAR_3].esid, FUNC_1(FUNC_3(VAR_0, VAR_1, VAR_3)));
}
