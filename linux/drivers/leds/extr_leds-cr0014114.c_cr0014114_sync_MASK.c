
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cr0014114 {int do_recount; size_t count; scalar_t__ delay; int * buf; int spi; TYPE_1__* leds; } ;
struct TYPE_2__ {int brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct cr0014114*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int) ;
 scalar_t__ FUNC_6 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct cr0014114 *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 unsigned long VAR_6, VAR_7 = VAR_2;


 if (FUNC_6(VAR_3->delay, VAR_7)) {
  VAR_6 = FUNC_2(VAR_3->delay - VAR_7);
  FUNC_8(VAR_6, VAR_6 + 1);
 }

 if (FUNC_7(VAR_3->do_recount)) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   goto err;

  VAR_3->do_recount = 0;
  FUNC_4(VAR_0);
 }

 VAR_3->buf[0] = VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++)
  VAR_3->buf[VAR_5 + 1] = VAR_3->leds[VAR_5].brightness;
 FUNC_0(VAR_3->buf, VAR_3->count + 2);
 VAR_4 = FUNC_5(VAR_3->spi, VAR_3->buf, VAR_3->count + 2);

err:
 VAR_3->delay = VAR_2 + FUNC_3(VAR_0);

 return VAR_4;
}
