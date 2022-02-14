
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_channel {unsigned long cookie_high; unsigned long cookie_low; int channel_id; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned long,unsigned long,int,int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct rpc_channel *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;


 VAR_9 = VAR_4->cookie_high;
 VAR_10 = VAR_4->cookie_low;

 FUNC_1(VAR_3,
  0, VAR_9, VAR_10,
  VAR_4->channel_id << 16,
  VAR_2,
  VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

 if ((FUNC_0(VAR_7) & VAR_1) == 0)
  return -VAR_0;

 return 0;
}
