
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmbus_channel {int dummy; } ;


 int FUNC_0 (struct vmbus_channel*,void*,int ,void (*) (void*),void*) ;
 int FUNC_1 (struct vmbus_channel*,int ,int ) ;
 int FUNC_2 (struct vmbus_channel*) ;

int FUNC_3(struct vmbus_channel *VAR_0,
        u32 VAR_1, u32 VAR_2,
        void *VAR_3, u32 VAR_4,
        void (*VAR_5)(void *VAR_6), void *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_0, VAR_1,
          VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_3, VAR_4,
      VAR_5, VAR_7);
 if (VAR_8)
  FUNC_2(VAR_0);

 return VAR_8;
}
