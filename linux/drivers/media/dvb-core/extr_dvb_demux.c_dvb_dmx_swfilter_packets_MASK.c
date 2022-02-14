
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_demux {int lock; } ;


 int FUNC_0 (struct dvb_demux*,int const*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct dvb_demux *VAR_0, const u8 *VAR_1,
         size_t VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);

 while (VAR_2--) {
  if (VAR_1[0] == 0x47)
   FUNC_0(VAR_0, VAR_1);
  VAR_1 += 188;
 }

 FUNC_2(&VAR_0->lock, VAR_3);
}
