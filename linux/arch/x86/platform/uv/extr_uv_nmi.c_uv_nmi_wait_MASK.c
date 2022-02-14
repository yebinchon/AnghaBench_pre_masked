
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(int VAR_4)
{

 FUNC_5(VAR_1.state, VAR_0);


 if (!VAR_4)
  return;

 do {

  if (!FUNC_7(1))
   break;


  FUNC_4("UV: Sending NMI IPI to %d CPUs: %*pbl\n",
    FUNC_2(VAR_2),
    FUNC_1(VAR_2));

  FUNC_6();


  if (!FUNC_7(0))
   break;

  FUNC_4("UV: %d CPUs not in NMI loop: %*pbl\n",
    FUNC_2(VAR_2),
    FUNC_1(VAR_2));
 } while (0);

 FUNC_4("UV: %d of %d CPUs in NMI\n",
  FUNC_0(&VAR_3), FUNC_3());
}
