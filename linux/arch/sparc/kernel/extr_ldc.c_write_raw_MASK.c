
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_packet {int dummy; } ;
struct ldc_channel {scalar_t__ chan_state; int tx_tail; int tx_head; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ldc_channel*) ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 struct ldc_packet* FUNC_1 (struct ldc_channel*,unsigned long*) ;
 int FUNC_2 (struct ldc_packet*,void const*,unsigned int) ;
 int FUNC_3 (struct ldc_channel*,struct ldc_packet*,unsigned long) ;
 unsigned long FUNC_4 (int ,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ldc_channel *VAR_5, const void *VAR_6, unsigned int VAR_7)
{
 struct ldc_packet *VAR_8;
 unsigned long VAR_9, VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_5->id, &VAR_5->tx_head, &VAR_5->tx_tail,
     &VAR_5->chan_state);
 if (FUNC_5(VAR_10))
  return -VAR_1;

 if (FUNC_5(VAR_5->chan_state != VAR_3))
  return FUNC_0(VAR_5);

 if (VAR_7 > VAR_4)
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_5, &VAR_9);
 if (!VAR_8)
  return -VAR_0;

 FUNC_2(VAR_8, VAR_6, VAR_7);

 VAR_11 = FUNC_3(VAR_5, VAR_8, VAR_9);
 if (!VAR_11)
  VAR_11 = VAR_7;

 return VAR_11;
}
