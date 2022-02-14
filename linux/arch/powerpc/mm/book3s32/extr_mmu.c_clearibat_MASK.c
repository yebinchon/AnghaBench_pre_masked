
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_bat {scalar_t__ batl; scalar_t__ batu; } ;


 struct ppc_bat** VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1)
{
 struct ppc_bat *VAR_2 = VAR_0[VAR_1];

 VAR_2[0].batu = 0;
 VAR_2[0].batl = 0;
}
