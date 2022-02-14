
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_table {int pfrio_flags; int pfrio_ndel; int pfrio_table; } ;
typedef int io ;


 int FUNC_0 (struct pfioc_table*,int) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 struct pfioc_table VAR_0;
 int VAR_1;

 FUNC_0(&VAR_0, sizeof(VAR_0));

 VAR_1 = FUNC_1(&VAR_0.pfrio_table, &VAR_0.pfrio_ndel,
     VAR_0.pfrio_flags);

 return (VAR_1);
}
