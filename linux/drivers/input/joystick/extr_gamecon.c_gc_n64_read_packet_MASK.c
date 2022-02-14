
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gc {TYPE_1__* pd; } ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gc*,int ,int ) ;
 int FUNC_1 (struct gc*,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned char FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct gc *VAR_6, unsigned char *VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;





 FUNC_3(VAR_9);
 FUNC_0(VAR_6, VAR_5, VAR_3);
 FUNC_1(VAR_6, VAR_3);
 FUNC_2(VAR_9);






 FUNC_6(VAR_1);





 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  FUNC_5(VAR_6->pd->port, VAR_4);
  FUNC_6(2);
  VAR_7[VAR_8] = FUNC_4(VAR_6->pd->port);
  FUNC_5(VAR_6->pd->port, VAR_4 | VAR_0);
  }







}
