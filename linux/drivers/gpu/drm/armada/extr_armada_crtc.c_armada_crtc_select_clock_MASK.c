
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct clk {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {int name; TYPE_1__ base; } ;
struct armada_crtc {TYPE_2__ crtc; } ;
struct armada_clocking_params {int settable; unsigned long div_max; unsigned long permillage_min; unsigned long permillage_max; } ;
struct armada_clk_result {unsigned long desired_clk_hz; unsigned long div; struct clk* clk; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (char*,int ,int ,int,...) ;
 int VAR_0 ;
 unsigned long FUNC_4 (struct clk*) ;
 unsigned long FUNC_5 (struct clk*,unsigned long) ;

int FUNC_6(struct armada_crtc *VAR_1,
        struct armada_clk_result *VAR_2,
        const struct armada_clocking_params *VAR_3,
        struct clk *VAR_4[], size_t VAR_5,
        unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_6 * 1000;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 struct clk *VAR_12;
 u32 VAR_13;
 int VAR_14;

 FUNC_3("[CRTC:%u:%s] desired clock=%luHz\n",
        VAR_1->crtc.base.id, VAR_1->crtc.name, VAR_7);

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_12 = VAR_4[VAR_14];
  if (!VAR_12)
   continue;

  if (VAR_3->settable & FUNC_0(VAR_14)) {
   VAR_9 = FUNC_5(VAR_12, VAR_7);
   VAR_8 = VAR_7;
  } else {
   VAR_9 = FUNC_4(VAR_12);
   VAR_8 = VAR_9;
  }


  if (VAR_9 == VAR_7) {
   VAR_10 = VAR_9;
   VAR_13 = 1;
   goto found;
  }


  VAR_13 = FUNC_1(VAR_9, VAR_7);
  if (VAR_13 == 0 || VAR_13 > VAR_3->div_max)
   continue;


  VAR_10 = FUNC_1(VAR_9, VAR_13);

  FUNC_3("[CRTC:%u:%s] clk=%u %luHz div=%u real=%luHz\n",
   VAR_1->crtc.base.id, VAR_1->crtc.name,
   VAR_14, VAR_9, VAR_13, VAR_10);


  if (VAR_10 < VAR_7) {
   VAR_11 = VAR_10 / VAR_6;
   if (VAR_11 < VAR_3->permillage_min)
    continue;
  } else {
   VAR_11 = FUNC_2(VAR_10, VAR_6);
   if (VAR_11 > VAR_3->permillage_max)
    continue;
  }
  goto found;
 }

 return -VAR_0;

found:
 FUNC_3("[CRTC:%u:%s] selected clk=%u %luHz div=%u real=%luHz\n",
  VAR_1->crtc.base.id, VAR_1->crtc.name,
  VAR_14, VAR_9, VAR_13, VAR_10);

 VAR_2->desired_clk_hz = VAR_8;
 VAR_2->clk = VAR_12;
 VAR_2->div = VAR_13;

 return VAR_14;
}
