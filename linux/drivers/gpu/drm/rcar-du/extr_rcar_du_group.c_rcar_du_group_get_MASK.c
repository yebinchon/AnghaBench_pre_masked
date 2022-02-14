
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_group {scalar_t__ use_count; } ;


 int FUNC_0 (struct rcar_du_group*) ;

int FUNC_1(struct rcar_du_group *VAR_0)
{
 if (VAR_0->use_count)
  goto done;

 FUNC_0(VAR_0);

done:
 VAR_0->use_count++;
 return 0;
}
