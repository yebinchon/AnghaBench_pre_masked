
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* eld; } ;
struct TYPE_4__ {TYPE_1__ connector; } ;
struct tegra_sor {TYPE_2__ output; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t*) ;
 int FUNC_1 (struct tegra_sor*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_sor *VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_1->output.connector.eld), VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_1(VAR_1, VAR_3 << 8 | VAR_1->output.connector.eld[VAR_3],
     VAR_0);







 for (VAR_3 = VAR_2; VAR_3 < 96; VAR_3++)
  FUNC_1(VAR_1, VAR_3 << 8 | 0, VAR_0);
}
