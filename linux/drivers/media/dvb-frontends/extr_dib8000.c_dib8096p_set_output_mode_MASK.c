
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct TYPE_2__ {scalar_t__ output_mpeg2_in_188_bytes; } ;
struct dib8000_state {int output_mode; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (struct dib8000_state*,int,int,int) ;
 int FUNC_3 (struct dib8000_state*,int) ;
 int FUNC_4 (struct dib8000_state*,int ) ;
 int FUNC_5 (struct dib8000_state*,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_5, int VAR_6)
{
 struct dib8000_state *VAR_7 = VAR_5->demodulator_priv;
 u16 VAR_8, VAR_9, VAR_10;
 u8 VAR_11 = 1;
 int VAR_12 = 0;

 VAR_7->output_mode = VAR_6;
 FUNC_3(VAR_7, 1);

 VAR_10 = 1792;
 VAR_9 = (FUNC_0(VAR_7, 299) & 0x0050) | (1 << 1);
 VAR_8 = FUNC_0(VAR_7, 1286) &
  ~((1 << 10) | (0x7 << 6) | (1 << 1));

 switch (VAR_6) {
 case 132:
   VAR_8 = 0;
   break;

 case 128:
   if (VAR_11) {
    FUNC_6("dib8096P setting output mode TS_SERIAL using Mpeg Mux\n");
    FUNC_2(VAR_7, 3, 1, 1);
    FUNC_5(VAR_7, VAR_4);
   } else {
    FUNC_6("dib8096P setting output mode TS_SERIAL using Smooth bloc\n");
    FUNC_5(VAR_7,
      VAR_1);
    VAR_8 |= (2 << 6) | (0 << 1);
   }
   break;

 case 129:
   if (VAR_11) {
    FUNC_6("dib8096P setting output mode TS_PARALLEL_GATED using Mpeg Mux\n");
    FUNC_2(VAR_7, 2, 0, 0);
    FUNC_5(VAR_7, VAR_4);
   } else {
    FUNC_6("dib8096P setting output mode TS_PARALLEL_GATED using Smooth block\n");
    FUNC_5(VAR_7,
      VAR_1);
    VAR_8 |= (0 << 6);
   }
   break;

 case 130:
   FUNC_6("dib8096P setting output mode TS_PARALLEL_CONT using Smooth block\n");
   FUNC_5(VAR_7, VAR_1);
   VAR_8 |= (1 << 6);
   break;

 case 131:


   FUNC_6("dib8096P setting output mode TS_FIFO using Smooth block\n");
   FUNC_5(VAR_7, VAR_1);
   VAR_8 |= (5 << 6);
   VAR_9 |= (3 << 1);
   VAR_10 = 512;
   break;

 case 133:
   FUNC_6("dib8096P setting output mode MODE_DIVERSITY\n");
   FUNC_4(VAR_7, VAR_3);
   FUNC_5(VAR_7, VAR_2);
   break;

 case 134:
   FUNC_6("dib8096P setting output mode MODE_ANALOG_ADC\n");
   FUNC_4(VAR_7, VAR_0);
   FUNC_5(VAR_7, VAR_2);
   break;
 }

 if (VAR_6 != 132)
  VAR_8 |= (1<<10);

 FUNC_6("output_mpeg2_in_188_bytes = %d\n",
   VAR_7->cfg.output_mpeg2_in_188_bytes);
 if (VAR_7->cfg.output_mpeg2_in_188_bytes)
  VAR_9 |= (1 << 5);

 VAR_12 |= FUNC_1(VAR_7, 299, VAR_9);

 VAR_12 |= FUNC_1(VAR_7, 299 + 1, VAR_10);
 VAR_12 |= FUNC_1(VAR_7, 1286, VAR_8);

 return VAR_12;
}
