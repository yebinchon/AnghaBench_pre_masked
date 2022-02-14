
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fec; scalar_t__ delsys; int fec_mask; int fec_val; } ;
struct cx24120_state {TYPE_2__ dnxt; TYPE_1__* i2c; } ;
typedef enum fe_modulation { ____Placeholder_fe_modulation } fe_modulation ;
typedef enum fe_code_rate { ____Placeholder_fe_code_rate } fe_code_rate ;
struct TYPE_7__ {scalar_t__ delsys; int mod; int fec; int val; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,int,int) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct cx24120_state *VAR_2, enum fe_modulation VAR_3,
      enum fe_code_rate VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_2->i2c->dev, "(0x%02x,0x%02x)\n", VAR_3, VAR_4);

 VAR_2->dnxt.fec = VAR_4;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_1[VAR_5].delsys != VAR_2->dnxt.delsys)
   continue;
  if (VAR_1[VAR_5].mod != VAR_3)
   continue;
  if (VAR_1[VAR_5].fec != VAR_4)
   continue;


  VAR_2->dnxt.fec_mask = 0x00;
  VAR_2->dnxt.fec_val = VAR_1[VAR_5].val;
  return 0;
 }

 if (VAR_2->dnxt.delsys == VAR_0) {

  VAR_2->dnxt.fec_mask = 0x00;
  VAR_2->dnxt.fec_val = 0x00;
 } else {

  VAR_2->dnxt.fec_val = 0x2e;
  VAR_2->dnxt.fec_mask = 0xac;
 }

 return 0;
}
