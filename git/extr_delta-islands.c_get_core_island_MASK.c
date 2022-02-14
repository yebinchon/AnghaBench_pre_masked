
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_island {int dummy; } ;
typedef scalar_t__ khiter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 struct remote_island* FUNC_2 (int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static struct remote_island *FUNC_3(void)
{
 if (VAR_0) {
  khiter_t VAR_2 = FUNC_1(VAR_1, VAR_0);
  if (VAR_2 < FUNC_0(VAR_1))
   return FUNC_2(VAR_1, VAR_2);
 }

 return ((void*)0);
}
