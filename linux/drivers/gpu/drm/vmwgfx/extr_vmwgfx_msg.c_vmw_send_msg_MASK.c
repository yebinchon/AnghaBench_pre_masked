
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_channel {unsigned long cookie_high; unsigned long cookie_low; int channel_id; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,size_t,unsigned long,unsigned long,int,int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_6 ;
 size_t FUNC_2 (char const*) ;
 unsigned long FUNC_3 (struct rpc_channel*,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct rpc_channel *VAR_7, const char *VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 size_t VAR_15 = FUNC_2(VAR_8);
 int VAR_16 = 0;

 while (VAR_16 < VAR_4) {
  VAR_16++;


  VAR_13 = VAR_7->cookie_high;
  VAR_14 = VAR_7->cookie_low;

  FUNC_1(VAR_6,
   VAR_15, VAR_13, VAR_14,
   VAR_7->channel_id << 16,
   VAR_5,
   VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

  if ((FUNC_0(VAR_11) & VAR_3) == 0) {

   return -VAR_0;
  }


  VAR_10 = FUNC_3(VAR_7, VAR_8,
          !!(FUNC_0(VAR_11) & VAR_2));

  if ((FUNC_0(VAR_10) & VAR_3) != 0) {
   return 0;
  } else if ((FUNC_0(VAR_10) & VAR_1) != 0) {

   continue;
  } else {
   break;
  }
 }

 return -VAR_0;
}
