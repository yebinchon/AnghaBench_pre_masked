
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device** VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_3;


 FUNC_3(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct net_device *VAR_4 = VAR_2[VAR_3];
  if (VAR_4) {
   FUNC_4(VAR_4);
   FUNC_2(VAR_4);
  }
 }

 FUNC_1();
 FUNC_0();
}
