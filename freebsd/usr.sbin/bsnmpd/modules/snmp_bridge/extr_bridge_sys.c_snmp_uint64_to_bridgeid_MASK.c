
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_char ;
typedef int * bridge_id ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(uint64_t VAR_1, bridge_id VAR_2)
{
 int VAR_3;
 u_char *VAR_4;

 VAR_4 = (u_char *) &VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_4++)
  VAR_2[VAR_0 - VAR_3 - 1] = *VAR_4;
}
