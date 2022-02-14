
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int revision; TYPE_2__** fe; } ;
struct TYPE_3__ {int (* init ) (TYPE_2__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct dib8000_state*) ;
 scalar_t__ FUNC_1 (struct dib8000_state*,int ) ;
 int FUNC_2 (struct dib8000_state*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_4)
{
 struct dib8000_state *VAR_5 = VAR_4->demodulator_priv;
 u8 VAR_6;
 int VAR_7;

 FUNC_2(VAR_5, VAR_0);
 FUNC_1(VAR_5, VAR_1);
 if (FUNC_1(VAR_5, VAR_2) != 0)
  FUNC_3("could not start Slow ADC\n");

 if (VAR_5->revision == 0x8090)
  FUNC_0(VAR_5);

 for (VAR_6 = 1; (VAR_6 < VAR_3) && (VAR_5->fe[VAR_6] != ((void*)0)); VAR_6++) {
  VAR_7 = VAR_5->fe[VAR_6]->ops.init(VAR_5->fe[VAR_6]);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return 0;
}
