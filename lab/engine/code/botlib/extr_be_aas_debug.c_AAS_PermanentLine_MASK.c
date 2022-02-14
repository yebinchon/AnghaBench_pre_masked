
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_2__ {int (* DebugLineCreate ) () ;int (* DebugLineShow ) (int,int ,int ,int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,int ,int) ;

void FUNC_2(vec3_t VAR_1, vec3_t VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_0.DebugLineCreate();
 VAR_0.DebugLineShow(VAR_4, VAR_1, VAR_2, VAR_3);
}
