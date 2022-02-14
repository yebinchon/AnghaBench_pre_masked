
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_abm {int dummy; } ;
struct abm {int dmcu_is_running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,int) ;
 struct dce_abm* FUNC_3 (struct abm*) ;

__attribute__((used)) static bool FUNC_4(struct abm *VAR_6, uint32_t VAR_7)
{
 struct dce_abm *VAR_8 = FUNC_3(VAR_6);

 if (VAR_6->dmcu_is_running == 0)
  return 1;

 FUNC_2(VAR_3, VAR_4, 0,
   1, 80000);


 FUNC_1(VAR_0,
   VAR_1, VAR_5,
   VAR_2, VAR_7);


 FUNC_0(VAR_3, VAR_4, 1);

 return 1;
}
