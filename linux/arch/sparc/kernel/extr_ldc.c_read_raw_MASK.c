
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_packet {int dummy; } ;
struct ldc_channel {unsigned int rx_head; unsigned int rx_tail; scalar_t__ chan_state; struct ldc_packet* rx_base; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ldc_channel*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct ldc_channel*,unsigned long) ;
 int FUNC_2 (void*,struct ldc_packet*,unsigned int) ;
 unsigned long FUNC_3 (struct ldc_channel*,unsigned int) ;
 unsigned long FUNC_4 (int ,unsigned int*,unsigned int*,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct ldc_channel *VAR_5, void *VAR_6, unsigned int VAR_7)
{
 struct ldc_packet *VAR_8;
 unsigned long VAR_9, VAR_10;
 int VAR_11;

 if (VAR_7 < VAR_4)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_5->id,
     &VAR_5->rx_head,
     &VAR_5->rx_tail,
     &VAR_5->chan_state);
 if (VAR_9)
  return FUNC_0(VAR_5);

 if (VAR_5->chan_state == VAR_2 ||
     VAR_5->chan_state == VAR_3)
  return -VAR_0;

 if (VAR_5->rx_head == VAR_5->rx_tail)
  return 0;

 VAR_8 = VAR_5->rx_base + (VAR_5->rx_head / VAR_4);
 FUNC_2(VAR_6, VAR_8, VAR_4);

 VAR_10 = FUNC_3(VAR_5, VAR_5->rx_head);
 VAR_5->rx_head = VAR_10;

 VAR_11 = FUNC_1(VAR_5, VAR_10);
 if (VAR_11 < 0)
  VAR_11 = -VAR_0;
 else
  VAR_11 = VAR_4;

 return VAR_11;
}
