
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int atomic_t ;
struct TYPE_2__ {int num_in_wfs; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_3(int VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_0*VAR_1;
 while (FUNC_0((atomic_t *)&VAR_2->num_in_wfs) != VAR_3 &&
        VAR_4) {
  FUNC_1(1);
  VAR_4--;
 }

 if (VAR_4)
  FUNC_2("tboot wait for APs timeout\n");

 return !(FUNC_0((atomic_t *)&VAR_2->num_in_wfs) == VAR_3);
}
