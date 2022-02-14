
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int revision; scalar_t__ autosearch_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_1->demodulator_priv;
 u16 VAR_3 = FUNC_0(VAR_2, 1284);

 if ((VAR_2->revision >= 0x8002) &&
     (VAR_2->autosearch_state == VAR_0)) {
  if (VAR_3 & 0x1) {
   FUNC_1("dib8000_autosearch_irq: max correlation result available\n");
   return 3;
  }
 } else {
  if (VAR_3 & 0x1) {
   FUNC_1("dib8000_autosearch_irq failed\n");
   return 1;
  }

  if (VAR_3 & 0x2) {
   FUNC_1("dib8000_autosearch_irq succeeded\n");
   return 2;
  }
 }

 return 0;
}
