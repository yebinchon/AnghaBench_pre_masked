
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_channel {int channel_id; unsigned long cookie_high; unsigned long cookie_low; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned int,unsigned long,unsigned long,int ,int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct rpc_channel *VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;

 FUNC_1(VAR_4,
  (VAR_6 | VAR_1), VAR_11, VAR_12,
  0,
  VAR_3,
  VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

 if ((FUNC_0(VAR_9) & VAR_2) == 0)
  return -VAR_0;

 VAR_5->channel_id = FUNC_0(VAR_10);
 VAR_5->cookie_high = VAR_11;
 VAR_5->cookie_low = VAR_12;

 return 0;
}
