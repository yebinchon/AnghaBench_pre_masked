
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_private {int capabilities; int fifo_queue_waiters; int fifo_queue; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vmw_private*,int ) ;
 int FUNC_3 (struct vmw_private*,int ) ;
 int FUNC_4 (struct vmw_private*,int ,int,unsigned long) ;
 int FUNC_5 (struct vmw_private*,int ,int *) ;
 int FUNC_6 (struct vmw_private*,int ,int *) ;
 long FUNC_7 (int ,int,unsigned long) ;
 long FUNC_8 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct vmw_private *VAR_4,
    uint32_t VAR_5, bool VAR_6,
    unsigned long VAR_7)
{
 long VAR_8 = 1L;

 if (FUNC_0(!FUNC_2(VAR_4, VAR_5)))
  return 0;

 FUNC_3(VAR_4, VAR_3);
 if (!(VAR_4->capabilities & VAR_1))
  return FUNC_4(VAR_4, VAR_5,
        VAR_6, VAR_7);

 FUNC_5(VAR_4, VAR_2,
          &VAR_4->fifo_queue_waiters);

 if (VAR_6)
  VAR_8 = FUNC_7
      (VAR_4->fifo_queue,
       !FUNC_2(VAR_4, VAR_5), VAR_7);
 else
  VAR_8 = FUNC_8
      (VAR_4->fifo_queue,
       !FUNC_2(VAR_4, VAR_5), VAR_7);

 if (FUNC_1(VAR_8 == 0))
  VAR_8 = -VAR_0;
 else if (FUNC_0(VAR_8 > 0))
  VAR_8 = 0;

 FUNC_6(VAR_4, VAR_2,
      &VAR_4->fifo_queue_waiters);

 return VAR_8;
}
