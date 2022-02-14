
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device** VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_7)
{
 u32 VAR_8;
 int VAR_9;

 FUNC_3(VAR_7);
 FUNC_0(VAR_7);


 VAR_8 = FUNC_5(VAR_3);
 VAR_8 |= VAR_2;
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if ((VAR_7 != VAR_4[VAR_9]) && FUNC_2(VAR_4[VAR_9]))
   VAR_8 &= ~VAR_5[VAR_9];
 }
 FUNC_6(VAR_3, VAR_8);

 if (!--VAR_6)
  FUNC_4(VAR_0);

 FUNC_1(VAR_7->irq, VAR_7);

 return 0;
}
