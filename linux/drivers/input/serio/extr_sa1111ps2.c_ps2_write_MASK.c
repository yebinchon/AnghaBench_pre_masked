
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct ps2if* port_data; } ;
struct ps2if {int head; int tail; unsigned char* buf; int lock; int tx_irq; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct serio *VAR_3, unsigned char VAR_4)
{
 struct ps2if *VAR_5 = VAR_3->port_data;
 unsigned long VAR_6;
 unsigned int VAR_7;

 FUNC_2(&VAR_5->lock, VAR_6);




 if (FUNC_1(VAR_5->base + VAR_1) & VAR_2) {
  FUNC_4(VAR_4, VAR_5->base + VAR_0);
 } else {
  if (VAR_5->head == VAR_5->tail)
   FUNC_0(VAR_5->tx_irq);
  VAR_7 = (VAR_5->head + 1) & (sizeof(VAR_5->buf) - 1);
  if (VAR_7 != VAR_5->tail) {
   VAR_5->buf[VAR_5->head] = VAR_4;
   VAR_5->head = VAR_7;
  }
 }

 FUNC_3(&VAR_5->lock, VAR_6);
 return 0;
}
