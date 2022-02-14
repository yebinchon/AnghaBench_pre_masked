
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int name; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 struct net_device** VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_8)
{
 u32 VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_2(VAR_8);

 VAR_10 = FUNC_4(VAR_8->irq, VAR_6, VAR_0,
     VAR_8->name, VAR_8);
 if (VAR_10) {
  FUNC_0("unable to get irq for %s\n", VAR_8->name);
  goto err;
 }

 if (!VAR_7++)

  FUNC_5(VAR_1);


 VAR_9 = FUNC_6(VAR_3);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (VAR_8 == VAR_4[VAR_11])
   VAR_9 &= ~VAR_5[VAR_11];
 }
 FUNC_7(VAR_3, VAR_9);

 FUNC_3(VAR_8);

 return 0;

err:
 FUNC_1(VAR_8);
 return VAR_10;
}
