
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rite_section_lineno_header {int dummy; } ;
typedef int mrb_state ;
typedef int mrb_irep ;


 int FUNC_0 (int *,int const*,int *,size_t*) ;

__attribute__((used)) static int
FUNC_1(mrb_state *VAR_0, const uint8_t *VAR_1, mrb_irep *VAR_2)
{
  size_t VAR_3;

  VAR_3 = 0;
  VAR_1 += sizeof(struct rite_section_lineno_header);


  return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3);
}
