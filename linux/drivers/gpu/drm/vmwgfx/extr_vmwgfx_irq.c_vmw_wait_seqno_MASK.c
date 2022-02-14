
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vmw_fifo_state {int capabilities; } ;
struct vmw_private {scalar_t__ last_read_seqno; int capabilities; int fence_queue; struct vmw_fifo_state fifo; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vmw_private*,int,int,scalar_t__,int,unsigned long) ;
 int FUNC_3 (struct vmw_private*,int ) ;
 int FUNC_4 (struct vmw_private*,scalar_t__) ;
 int FUNC_5 (struct vmw_private*) ;
 int FUNC_6 (struct vmw_private*) ;
 long FUNC_7 (int ,int,unsigned long) ;
 long FUNC_8 (int ,int,unsigned long) ;

int FUNC_9(struct vmw_private *VAR_5,
        bool VAR_6, uint32_t VAR_7,
        bool VAR_8, unsigned long VAR_9)
{
 long VAR_10;
 struct vmw_fifo_state *VAR_11 = &VAR_5->fifo;

 if (FUNC_0(VAR_5->last_read_seqno - VAR_7 < VAR_4))
  return 0;

 if (FUNC_0(FUNC_4(VAR_5, VAR_7)))
  return 0;

 FUNC_3(VAR_5, VAR_3);

 if (!(VAR_11->capabilities & VAR_2))
  return FUNC_2(VAR_5, VAR_6, 1, VAR_7,
      VAR_8, VAR_9);

 if (!(VAR_5->capabilities & VAR_1))
  return FUNC_2(VAR_5, VAR_6, 0, VAR_7,
      VAR_8, VAR_9);

 FUNC_5(VAR_5);

 if (VAR_8)
  VAR_10 = FUNC_7
      (VAR_5->fence_queue,
       FUNC_4(VAR_5, VAR_7),
       VAR_9);
 else
  VAR_10 = FUNC_8
      (VAR_5->fence_queue,
       FUNC_4(VAR_5, VAR_7),
       VAR_9);

 FUNC_6(VAR_5);

 if (FUNC_1(VAR_10 == 0))
  VAR_10 = -VAR_0;
 else if (FUNC_0(VAR_10 > 0))
  VAR_10 = 0;

 return VAR_10;
}
