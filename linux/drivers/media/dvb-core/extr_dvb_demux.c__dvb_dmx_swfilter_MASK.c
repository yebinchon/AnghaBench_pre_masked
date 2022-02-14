
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_demux {int tsbufp; int* tsbuf; int lock; } ;


 int FUNC_0 (struct dvb_demux*,int const*) ;
 int FUNC_1 (int const*,int,size_t,int const) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(struct dvb_demux *VAR_0, const u8 *VAR_1,
  size_t VAR_2, const int VAR_3)
{
 int VAR_4 = 0, VAR_5, VAR_6;
 const u8 *VAR_7;
 unsigned long VAR_8;

 FUNC_3(&VAR_0->lock, VAR_8);

 if (VAR_0->tsbufp) {
  VAR_5 = VAR_0->tsbufp;
  VAR_6 = VAR_3 - VAR_5;
  if (VAR_2 < VAR_6) {
   FUNC_2(&VAR_0->tsbuf[VAR_5], VAR_1, VAR_2);
   VAR_0->tsbufp += VAR_2;
   goto bailout;
  }
  FUNC_2(&VAR_0->tsbuf[VAR_5], VAR_1, VAR_6);
  if (VAR_0->tsbuf[0] == 0x47)
   FUNC_0(VAR_0, VAR_0->tsbuf);
  VAR_0->tsbufp = 0;
  VAR_4 += VAR_6;
 }

 while (1) {
  VAR_4 = FUNC_1(VAR_1, VAR_4, VAR_2, VAR_3);
  if (VAR_4 >= VAR_2)
   break;
  if (VAR_2 - VAR_4 < VAR_3)
   break;

  VAR_7 = &VAR_1[VAR_4];

  if (VAR_3 == 204 && (*VAR_7 == 0xB8)) {
   FUNC_2(VAR_0->tsbuf, VAR_7, 188);
   VAR_0->tsbuf[0] = 0x47;
   VAR_7 = VAR_0->tsbuf;
  }
  FUNC_0(VAR_0, VAR_7);
  VAR_4 += VAR_3;
 }

 VAR_5 = VAR_2 - VAR_4;
 if (VAR_5) {
  FUNC_2(VAR_0->tsbuf, &VAR_1[VAR_4], VAR_5);
  VAR_0->tsbufp = VAR_5;
  if (VAR_3 == 204 && VAR_0->tsbuf[0] == 0xB8)
   VAR_0->tsbuf[0] = 0x47;
 }

bailout:
 FUNC_4(&VAR_0->lock, VAR_8);
}
