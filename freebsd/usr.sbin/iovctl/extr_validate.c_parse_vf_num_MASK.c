
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_long ;
struct TYPE_3__ {int rm_so; } ;
typedef TYPE_1__ regmatch_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static uint16_t
FUNC_2(const char *VAR_1, regmatch_t *VAR_2)
{
 u_long VAR_3;

 VAR_3 = FUNC_1(VAR_1 + VAR_2[1].rm_so, ((void*)0), 10);

 if (VAR_3 > VAR_0)
  FUNC_0(1, "VF number %lu is too large to be valid",
      VAR_3);

 return (VAR_3);
}
