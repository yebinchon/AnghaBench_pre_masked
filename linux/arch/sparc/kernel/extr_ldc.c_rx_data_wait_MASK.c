
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_channel {unsigned long rx_head; unsigned long rx_tail; unsigned long chan_state; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ldc_channel*) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (int ,unsigned long*,unsigned long*,unsigned long*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ldc_channel *VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 1000;

 FUNC_1(VAR_0, "DATA WAIT cur_head[%lx] rx_head[%lx] rx_tail[%lx]\n",
        VAR_6, VAR_5->rx_head, VAR_5->rx_tail);
 while (VAR_8-- > 0) {
  unsigned long VAR_9;

  VAR_9 = FUNC_2(VAR_5->id,
      &VAR_7,
      &VAR_5->rx_tail,
      &VAR_5->chan_state);
  if (VAR_9)
   return FUNC_0(VAR_5);

  if (VAR_5->chan_state == VAR_3 ||
      VAR_5->chan_state == VAR_4)
   return -VAR_2;

  if (VAR_6 != VAR_5->rx_tail) {
   FUNC_1(VAR_0, "DATA WAIT DONE "
          "head[%lx] tail[%lx] chan_state[%lx]\n",
          VAR_7, VAR_5->rx_tail, VAR_5->chan_state);
   return 0;
  }

  FUNC_3(1);
 }
 return -VAR_1;
}
