
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dmcu {int dummy; } ;
struct dce_dmcu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,unsigned int,unsigned int) ;
 struct dce_dmcu* FUNC_2 (struct dmcu*) ;
 int FUNC_3 (struct dmcu*,scalar_t__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct dmcu *VAR_6, bool VAR_7, bool VAR_8)
{
 struct dce_dmcu *VAR_9 = FUNC_2(VAR_6);
 unsigned int VAR_10 = 801;
 unsigned int VAR_11 = 100;

 unsigned int VAR_12;
 uint32_t VAR_13 = 0;


 FUNC_1(VAR_2, VAR_3, 0,
    VAR_11,
    VAR_10);


 if (VAR_7)
  FUNC_0(VAR_0, VAR_1,
    VAR_4);
 else
  FUNC_0(VAR_0, VAR_1,
    VAR_5);


 FUNC_0(VAR_2, VAR_3, 1);
 if (VAR_8 == 1) {
  for (VAR_12 = 0; VAR_12 <= 100; VAR_12++) {
   FUNC_3(VAR_6, &VAR_13);
   if (VAR_7) {
    if (VAR_13 != 0)
     break;
   } else {
    if (VAR_13 == 0)
     break;
   }
   FUNC_4(10);
  }
 }
}
