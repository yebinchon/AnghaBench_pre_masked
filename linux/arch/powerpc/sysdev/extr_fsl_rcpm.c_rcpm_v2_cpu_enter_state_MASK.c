
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pcph30setr; int pcph20setr; int pcph15setr; int tph10setr0; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = 1 << FUNC_0(VAR_1);

 switch (VAR_2) {
 case 131:

  FUNC_3(&VAR_0->tph10setr0, 1 << VAR_3);
  break;
 case 130:
  FUNC_3(&VAR_0->pcph15setr, VAR_4);
  break;
 case 129:
  FUNC_3(&VAR_0->pcph20setr, VAR_4);
  break;
 case 128:
  FUNC_3(&VAR_0->pcph30setr, VAR_4);
  break;
 default:
  FUNC_2("Unknown cpu PM state (%d)\n", VAR_2);
 }
}
