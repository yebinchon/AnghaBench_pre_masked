
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vmpacket_descriptor {int offset8; int len8; int trans_id; } ;
struct vmbus_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmbus_channel*,struct vmpacket_descriptor*) ;
 int FUNC_1 (struct vmbus_channel*) ;
 struct vmpacket_descriptor* FUNC_2 (struct vmbus_channel*) ;
 int FUNC_3 (void*,char const*,int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct vmbus_channel *VAR_2,
         void *VAR_3, u32 VAR_4, u32 *VAR_5,
         u64 *VAR_6, bool VAR_7)
{
 struct vmpacket_descriptor *VAR_8;
 u32 VAR_9, VAR_10;

 if (FUNC_4(VAR_4 == 0))
  return -VAR_0;

 *VAR_5 = 0;
 *VAR_6 = 0;


 VAR_8 = FUNC_2(VAR_2);
 if (VAR_8 == ((void*)0)) {




  return 0;
 }

 VAR_10 = VAR_7 ? 0 : (VAR_8->offset8 << 3);
 VAR_9 = (VAR_8->len8 << 3) - VAR_10;
 *VAR_5 = VAR_9;
 *VAR_6 = VAR_8->trans_id;

 if (FUNC_4(VAR_9 > VAR_4))
  return -VAR_1;


 FUNC_3(VAR_3, (const char *)VAR_8 + VAR_10, VAR_9);


 FUNC_0(VAR_2, VAR_8);


 FUNC_1(VAR_2);

 return 0;
}
