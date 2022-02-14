
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_demux_feed {int cc; int pusi_seen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct dvb_demux_feed*,int const*,int) ;
 int FUNC_2 (struct dvb_demux_feed*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct dvb_demux_feed*,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_demux_feed *VAR_2,
        const u8 *VAR_3)
{
 u8 VAR_4, VAR_5;
 int VAR_6, VAR_7 = 0;
 u8 VAR_8;

 VAR_5 = FUNC_3(VAR_3);

 if (VAR_5 == 0)
  return -1;

 VAR_4 = 188 - VAR_5;

 VAR_8 = VAR_3[3] & 0x0f;
 VAR_6 = ((VAR_2->cc + 1) & 0x0f) == VAR_8;
 VAR_2->cc = VAR_8;

 if (VAR_3[3] & 0x20) {

  if ((VAR_3[4] > 0) && (VAR_3[5] & 0x80))
   VAR_7 = 1;
 }

 if (!VAR_6 || VAR_7) {
  if (VAR_7) {
   FUNC_4(VAR_2,
          VAR_1);
   FUNC_0("%d frame with disconnect indicator\n",
    VAR_8);
  } else {
   FUNC_4(VAR_2,
          VAR_0);
   FUNC_0("discontinuity: %d instead of %d. %d bytes lost\n",
    VAR_8, (VAR_2->cc + 1) & 0x0f, VAR_5 + 4);
  }
  VAR_2->pusi_seen = 0;
  FUNC_2(VAR_2);
 }

 if (VAR_3[1] & 0x40) {

  if (VAR_5 > 1 && VAR_3[VAR_4] < VAR_5) {
   const u8 *VAR_9 = &VAR_3[VAR_4 + 1];
   u8 VAR_10 = VAR_3[VAR_4];
   const u8 *VAR_11 = &VAR_9[VAR_10];
   u8 VAR_12 = VAR_5 - 1 - VAR_10;

   FUNC_1(VAR_2, VAR_9,
          VAR_10);

   VAR_2->pusi_seen = 1;
   FUNC_2(VAR_2);
   FUNC_1(VAR_2, VAR_11,
          VAR_12);
  } else if (VAR_5 > 0) {
   FUNC_4(VAR_2,
          VAR_0);
   FUNC_0("PUSI=1 but %d bytes lost\n", VAR_5);
  }
 } else {

  FUNC_1(VAR_2, &VAR_3[VAR_4], VAR_5);
 }

 return 0;
}
