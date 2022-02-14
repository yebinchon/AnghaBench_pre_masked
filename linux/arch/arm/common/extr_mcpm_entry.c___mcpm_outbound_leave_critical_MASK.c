
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* clusters; } ;
struct TYPE_3__ {int cluster; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1, int VAR_2)
{
 FUNC_0();
 VAR_0.clusters[VAR_1].cluster = VAR_2;
 FUNC_2(&VAR_0.clusters[VAR_1].cluster);
 FUNC_1();
}
