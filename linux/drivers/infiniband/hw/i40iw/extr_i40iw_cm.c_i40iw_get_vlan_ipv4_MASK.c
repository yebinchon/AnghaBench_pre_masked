
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct net_device* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static u16 FUNC_4(u32 *VAR_2)
{
 struct net_device *VAR_3;
 u16 VAR_4 = VAR_0;

 VAR_3 = FUNC_2(&VAR_1, FUNC_1(VAR_2[0]));
 if (VAR_3) {
  VAR_4 = FUNC_3(VAR_3);
  FUNC_0(VAR_3);
 }
 return VAR_4;
}
