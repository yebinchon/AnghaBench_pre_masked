
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct TYPE_4__ {int version; scalar_t__ in_soc; scalar_t__ p1g; } ;
struct dib0090_state {int calibrate; TYPE_3__* config; TYPE_1__ identity; } ;
struct TYPE_5__ {int clock_khz; } ;
struct TYPE_6__ {int force_crystal_mode; TYPE_2__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*) ;
 int VAR_12 ;
 int FUNC_1 (struct dib0090_state*,int) ;
 int FUNC_2 (struct dvb_frontend*,TYPE_3__*) ;
 int FUNC_3 (struct dib0090_state*) ;
 int FUNC_4 (struct dib0090_state*,int ) ;
 int FUNC_5 (struct dib0090_state*,int,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_13)
{
 struct dib0090_state *VAR_14 = VAR_13->tuner_priv;

 FUNC_2(VAR_13, VAR_14->config);
 if (FUNC_0(VAR_13) < 0)
  return -VAR_1;






 if (!VAR_14->identity.in_soc) {
  if ((FUNC_1(VAR_14, 0x1a) >> 5) & 0x2)
   FUNC_5(VAR_14, 0x1b, (VAR_6 | VAR_2 | VAR_3 | VAR_5 | VAR_7 | VAR_4));
  else
   FUNC_5(VAR_14, 0x1b, (VAR_5 | VAR_7 | VAR_4));
 }

 FUNC_4(VAR_14, VAR_11);

 if (VAR_14->identity.in_soc)
  FUNC_5(VAR_14, 0x18, 0x2910);

 if (VAR_14->identity.p1g)
  FUNC_4(VAR_14, VAR_12);


 if (((VAR_14->identity.version & 0x1f) >= VAR_8) || (VAR_14->identity.in_soc))
  FUNC_3(VAR_14);


 if (VAR_14->config->force_crystal_mode != 0)
  FUNC_5(VAR_14, 0x14,
    VAR_14->config->force_crystal_mode & 3);
 else if (VAR_14->config->io.clock_khz >= 24000)
  FUNC_5(VAR_14, 0x14, 1);
 else
  FUNC_5(VAR_14, 0x14, 2);
 FUNC_6("Pll lock : %d\n", (FUNC_1(VAR_14, 0x1a) >> 11) & 0x1);

 VAR_14->calibrate = VAR_0 | VAR_10 | VAR_9;

 return 0;
}
