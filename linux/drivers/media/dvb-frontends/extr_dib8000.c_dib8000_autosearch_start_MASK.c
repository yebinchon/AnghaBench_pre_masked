
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dtv_frontend_properties {scalar_t__ transmission_mode; scalar_t__ guard_interval; scalar_t__ isdbt_sb_mode; TYPE_1__* layer; scalar_t__ inversion; } ;
struct TYPE_8__ {TYPE_3__* pll; } ;
struct dib8000_state {int revision; scalar_t__ autosearch_state; scalar_t__ found_nfft; TYPE_4__ cfg; TYPE_2__** fe; } ;
struct TYPE_7__ {int internal; } ;
struct TYPE_6__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_5__ {int segment_count; scalar_t__ interleaving; void* fec; void* modulation; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int) ;
 int FUNC_2 (struct dib8000_state*,int,int) ;
 int FUNC_3 (struct dib8000_state*,int,int,int,int) ;
 int FUNC_4 (struct dib8000_state*,int,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_8)
{
 struct dib8000_state *VAR_9 = VAR_8->demodulator_priv;
 struct dtv_frontend_properties *VAR_10 = &VAR_9->fe[0]->dtv_property_cache;
 u8 VAR_11 = 0;
 u32 VAR_12, VAR_13 = VAR_9->cfg.pll->internal;

 if (VAR_9->revision == 0x8090)
  VAR_13 = FUNC_0(VAR_9, 23) / 1000;

 if ((VAR_9->revision >= 0x8002) &&
     (VAR_9->autosearch_state == VAR_0)) {
  FUNC_4(VAR_9, 37, 0x0065);
  FUNC_4(VAR_9, 116, 0x0000);

  FUNC_4(VAR_9, 0, (FUNC_1(VAR_9, 0) & 0x1fff) | (0 << 13) | (1 << 15));
  FUNC_4(VAR_9, 1, (FUNC_1(VAR_9, 1) & 0xfffc) | 0);
  FUNC_4(VAR_9, 6, 0);
  FUNC_4(VAR_9, 7, 0);
  FUNC_4(VAR_9, 8, 0);
  FUNC_4(VAR_9, 10, (FUNC_1(VAR_9, 10) & 0x200) | (16 << 4) | (0 << 0));

  if (VAR_9->revision == 0x8090)
   VAR_12 = FUNC_3(VAR_9, VAR_13, 10, 10, 10);
  else
   VAR_12 = FUNC_3(VAR_9, VAR_13, 20, 20, 20);

  FUNC_4(VAR_9, 17, 0);
  FUNC_4(VAR_9, 18, 200);
  FUNC_4(VAR_9, 19, 0);
  FUNC_4(VAR_9, 20, 400);
  FUNC_4(VAR_9, 21, (VAR_12 >> 16) & 0xffff);
  FUNC_4(VAR_9, 22, VAR_12 & 0xffff);

  if (VAR_9->revision == 0x8090)
   FUNC_4(VAR_9, 32, (FUNC_1(VAR_9, 32) & 0xf0ff) | (0 << 8));
  else
   FUNC_4(VAR_9, 32, (FUNC_1(VAR_9, 32) & 0xf0ff) | (9 << 8));
  FUNC_4(VAR_9, 355, 2);


  FUNC_4(VAR_9, 356, 0);
  FUNC_4(VAR_9, 357, 0x111);

  FUNC_4(VAR_9, 770, (FUNC_1(VAR_9, 770) & 0xdfff) | (1 << 13));
  FUNC_4(VAR_9, 770, (FUNC_1(VAR_9, 770) & 0xdfff) | (0 << 13));
  FUNC_4(VAR_9, 0, (FUNC_1(VAR_9, 0) & 0x7ff) | (0 << 15) | (1 << 13));
 } else if ((VAR_9->revision >= 0x8002) &&
     (VAR_9->autosearch_state == VAR_1)) {
  VAR_10->transmission_mode = VAR_6;
  VAR_10->guard_interval = VAR_3;
  VAR_10->inversion = 0;
  VAR_10->layer[0].modulation = VAR_5;
  VAR_10->layer[0].fec = VAR_2;
  VAR_10->layer[0].interleaving = 0;
  VAR_10->layer[0].segment_count = 13;

  VAR_11 = 16;
  VAR_10->transmission_mode = VAR_9->found_nfft;

  FUNC_2(VAR_9, VAR_11, 1);


  FUNC_4(VAR_9, 6, 0x4);
  if (VAR_9->revision == 0x8090)
   FUNC_4(VAR_9, 7, ((1 << 12) | (1 << 11) | (1 << 10)));
  else
   FUNC_4(VAR_9, 7, 0x8);
  FUNC_4(VAR_9, 8, 0x1000);


  if (VAR_9->revision == 0x8090)
   FUNC_3(VAR_9, VAR_13, 50, 100, 1000);
  else
   FUNC_3(VAR_9, VAR_13, 50, 200, 1000);

  FUNC_4(VAR_9, 355, 3);


  FUNC_4(VAR_9, 356, 0);
  FUNC_4(VAR_9, 357, 0xf);

  VAR_12 = FUNC_1(VAR_9, 0);
  FUNC_4(VAR_9, 0, (u16)((1 << 15) | VAR_12));
  FUNC_1(VAR_9, 1284);
  FUNC_4(VAR_9, 0, (u16)VAR_12);
 } else {
  VAR_10->inversion = 0;
  VAR_10->layer[0].modulation = VAR_5;
  VAR_10->layer[0].fec = VAR_2;
  VAR_10->layer[0].interleaving = 0;
  VAR_10->layer[0].segment_count = 13;
  if (!VAR_10->isdbt_sb_mode)
   VAR_10->layer[0].segment_count = 13;


  if (VAR_10->isdbt_sb_mode) {
   VAR_11 = 7;
   FUNC_4(VAR_9, 0, (FUNC_1(VAR_9, 0) & 0x9fff) | (1 << 13));
  } else {
   if (VAR_10->guard_interval == VAR_4) {
    if (VAR_10->transmission_mode == VAR_7) {
     VAR_10->transmission_mode = VAR_6;
     VAR_10->guard_interval = VAR_3;
     VAR_11 = 7;
     FUNC_4(VAR_9, 0, (FUNC_1(VAR_9, 0) & 0x9fff) | (1 << 13));
    } else {
     VAR_10->guard_interval = VAR_3;
     VAR_11 = 3;
    }
   } else {
    if (VAR_10->transmission_mode == VAR_7) {
     VAR_10->transmission_mode = VAR_6;
     VAR_11 = 2;
     FUNC_4(VAR_9, 0, (FUNC_1(VAR_9, 0) & 0x9fff) | (1 << 13));
    } else
     VAR_11 = 0;
   }
  }
  FUNC_5("Using list for autosearch : %d\n", VAR_11);

  FUNC_2(VAR_9, VAR_11, 1);


  FUNC_4(VAR_9, 6, 0x4);
  if (VAR_9->revision == 0x8090)
   FUNC_4(VAR_9, 7, (1 << 12) | (1 << 11) | (1 << 10));
  else
   FUNC_4(VAR_9, 7, 0x8);
  FUNC_4(VAR_9, 8, 0x1000);


  if (VAR_9->revision == 0x8090)
   FUNC_3(VAR_9, VAR_13, 50, 200, 1000);
  else
   FUNC_3(VAR_9, VAR_13, 50, 100, 1000);

  VAR_12 = FUNC_1(VAR_9, 0);
  FUNC_4(VAR_9, 0, (u16)((1 << 15) | VAR_12));
  FUNC_1(VAR_9, 1284);
  FUNC_4(VAR_9, 0, (u16)VAR_12);
 }
 return 0;
}
