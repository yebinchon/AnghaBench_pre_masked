
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct ag71xx {unsigned int max_frame_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 struct ag71xx* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, int VAR_3)
{
 struct ag71xx *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_3 < 68 || VAR_5 > VAR_4->max_frame_len)
  return -VAR_1;

 if (FUNC_2(VAR_2))
  return -VAR_0;

 VAR_2->mtu = VAR_3;
 return 0;
}
