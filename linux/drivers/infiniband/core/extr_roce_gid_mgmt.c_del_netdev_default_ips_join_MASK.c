
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct ib_device*,int ,struct net_device*,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct ib_device *VAR_0, u8 VAR_1,
     struct net_device *VAR_2,
     void *VAR_3)
{
 struct net_device *VAR_4;

 FUNC_4();
 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  FUNC_1(VAR_4);
 FUNC_5();

 if (VAR_4) {
  FUNC_0(VAR_0, VAR_1, VAR_2,
      VAR_4);
  FUNC_2(VAR_4);
 }
}
