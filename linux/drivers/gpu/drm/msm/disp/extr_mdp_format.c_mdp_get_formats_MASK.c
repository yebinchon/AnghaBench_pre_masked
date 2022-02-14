
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t pixel_format; } ;
struct mdp_format {TYPE_1__ base; } ;


 size_t FUNC_0 (struct mdp_format*) ;
 scalar_t__ FUNC_1 (struct mdp_format const*) ;
 struct mdp_format* VAR_0 ;

uint32_t FUNC_2(uint32_t *VAR_1, uint32_t VAR_2,
  bool VAR_3)
{
 uint32_t VAR_4;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  const struct mdp_format *VAR_5 = &VAR_0[VAR_4];

  if (VAR_4 == VAR_2)
   break;

  if (VAR_3 && FUNC_1(VAR_5))
   break;

  VAR_1[VAR_4] = VAR_5->base.pixel_format;
 }

 return VAR_4;
}
