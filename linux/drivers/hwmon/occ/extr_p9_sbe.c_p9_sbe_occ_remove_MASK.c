
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct p9_sbe_occ {int * sbe; } ;
struct occ {int dummy; } ;


 int FUNC_0 (struct occ*) ;
 struct occ* FUNC_1 (struct platform_device*) ;
 struct p9_sbe_occ* FUNC_2 (struct occ*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct occ *VAR_1 = FUNC_1(VAR_0);
 struct p9_sbe_occ *VAR_2 = FUNC_2(VAR_1);

 VAR_2->sbe = ((void*)0);
 FUNC_0(VAR_1);

 return 0;
}
