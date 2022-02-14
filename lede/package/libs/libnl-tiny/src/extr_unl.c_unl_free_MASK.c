
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unl {scalar_t__ cache; scalar_t__ sock; scalar_t__ family_name; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct unl*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct unl *VAR_0)
{
 if (VAR_0->family_name)
  FUNC_0(VAR_0->family_name);

 if (VAR_0->sock)
  FUNC_3(VAR_0->sock);

 if (VAR_0->cache)
  FUNC_2(VAR_0->cache);

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
