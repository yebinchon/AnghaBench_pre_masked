
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rotary_encoder {scalar_t__ encoding; TYPE_1__* gpios; } ;
struct TYPE_2__ {int ndescs; int * desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct rotary_encoder *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->gpios->ndescs; ++VAR_2) {
  int VAR_4 = FUNC_0(VAR_1->gpios->desc[VAR_2]);


  if (VAR_1->encoding == VAR_0 && VAR_3 & 1)
   VAR_4 = !VAR_4;

  VAR_3 = VAR_3 << 1 | VAR_4;
 }

 return VAR_3 & 3;
}
