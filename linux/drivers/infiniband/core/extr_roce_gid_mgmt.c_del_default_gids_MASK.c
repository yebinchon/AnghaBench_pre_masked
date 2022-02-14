
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,struct net_device*,unsigned long,int ) ;
 unsigned long FUNC_1 (struct ib_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_1, u8 VAR_2,
        struct net_device *VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 unsigned long VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2);

 FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6,
         VAR_0);
}
