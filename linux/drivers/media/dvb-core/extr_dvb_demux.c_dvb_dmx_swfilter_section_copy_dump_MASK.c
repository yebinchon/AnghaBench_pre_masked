
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct dmx_section_feed {scalar_t__ tsfeedp; scalar_t__ secbuf_base; scalar_t__ secbuf; scalar_t__ secbufp; int crc_val; scalar_t__ seclen; } ;
struct TYPE_2__ {struct dmx_section_feed sec; } ;
struct dvb_demux_feed {scalar_t__ pusi_seen; TYPE_1__ feed; struct dvb_demux* demux; } ;
struct dvb_demux {int (* memcopy ) (struct dvb_demux_feed*,scalar_t__,scalar_t__ const*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct dvb_demux_feed*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dvb_demux_feed*,int ) ;
 int FUNC_4 (struct dvb_demux_feed*,scalar_t__,scalar_t__ const*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct dvb_demux_feed *VAR_3,
           const u8 *VAR_4, u8 VAR_5)
{
 struct dvb_demux *VAR_6 = VAR_3->demux;
 struct dmx_section_feed *VAR_7 = &VAR_3->feed.sec;
 u16 VAR_8, VAR_9, VAR_10;

 if (VAR_7->tsfeedp >= VAR_1)
  return 0;

 if (VAR_7->tsfeedp + VAR_5 > VAR_1) {
  FUNC_3(VAR_3, VAR_0);
  FUNC_0("section buffer full loss: %d/%d\n",
      VAR_7->tsfeedp + VAR_5 - VAR_1,
      VAR_1);
  VAR_5 = VAR_1 - VAR_7->tsfeedp;
 }

 if (VAR_5 <= 0)
  return 0;

 VAR_6->memcopy(VAR_3, VAR_7->secbuf_base + VAR_7->tsfeedp, VAR_4, VAR_5);
 VAR_7->tsfeedp += VAR_5;




 VAR_8 = VAR_7->tsfeedp;
 if (VAR_8 > VAR_1)
  return -1;


 VAR_7->secbuf = VAR_7->secbuf_base + VAR_7->secbufp;

 for (VAR_10 = 0; VAR_7->secbufp + 2 < VAR_8; VAR_10++) {
  VAR_9 = FUNC_2(VAR_7->secbuf);
  if (VAR_9 <= 0 || VAR_9 > VAR_2
      || VAR_9 + VAR_7->secbufp > VAR_8)
   return 0;
  VAR_7->seclen = VAR_9;
  VAR_7->crc_val = ~0;

  if (VAR_3->pusi_seen) {
   FUNC_1(VAR_3);
  } else {
   FUNC_3(VAR_3,
          VAR_0);
   FUNC_0("pusi not seen, discarding section data\n");
  }
  VAR_7->secbufp += VAR_9;
  VAR_7->secbuf += VAR_9;
 }

 return 0;
}
