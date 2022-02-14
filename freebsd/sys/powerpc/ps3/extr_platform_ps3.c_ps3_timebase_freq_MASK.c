
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;
struct cpuref {int dummy; } ;
typedef int platform_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int,int ,int *,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u_long
FUNC_2(platform_t VAR_1, struct cpuref *VAR_2)
{
 uint64_t VAR_3, VAR_4, VAR_5;

 FUNC_0(VAR_0,
     FUNC_1("be") >> 32, 0, 0, 0, &VAR_4, &VAR_5);
 FUNC_0(VAR_0,
     FUNC_1("be") >> 32, VAR_4,
     FUNC_1("clock"), 0, &VAR_3, &VAR_5);

 return (VAR_3);
}
