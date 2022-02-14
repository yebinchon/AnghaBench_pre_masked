
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cra_name; int cra_driver_name; } ;
struct shash_alg {TYPE_1__ base; } ;


 int FUNC_0 (struct shash_alg*) ;
 int FUNC_1 (char*,int ,int ,int) ;

int FUNC_2(struct shash_alg *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; --VAR_2) {
  VAR_3 = FUNC_0(&VAR_0[VAR_2]);
  if (VAR_3)
   FUNC_1("Failed to unregister %s %s: %d\n",
          VAR_0[VAR_2].base.cra_driver_name,
          VAR_0[VAR_2].base.cra_name, VAR_3);
 }

 return 0;
}
