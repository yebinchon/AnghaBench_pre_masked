
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cnapcr; int cdozcr; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4 = 1 << VAR_3;

 switch (VAR_2) {
 case 129:
  FUNC_2(&VAR_0->cdozcr, VAR_4);
  break;
 case 128:
  FUNC_2(&VAR_0->cnapcr, VAR_4);
  break;
 default:
  FUNC_1("Unknown cpu PM state (%d)\n", VAR_2);
  break;
 }
}
