
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct ib_device*,int ,struct net_device*,unsigned long,int ) ;
 unsigned long FUNC_2 (struct ib_device*,int ) ;

__attribute__((used)) static int
FUNC_3(struct ib_device *VAR_1,
    u8 VAR_2, struct net_device *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2);

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_0);

 return (FUNC_0(VAR_4));
}
