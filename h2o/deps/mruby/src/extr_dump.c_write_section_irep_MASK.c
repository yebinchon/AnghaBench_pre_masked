
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rite_section_irep_header {int dummy; } ;
typedef int mrb_state ;
typedef int mrb_irep ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,size_t*,int ) ;
 int FUNC_1 (int *,size_t,int *) ;

__attribute__((used)) static int
FUNC_2(mrb_state *VAR_2, mrb_irep *VAR_3, uint8_t *VAR_4, size_t *VAR_5, uint8_t VAR_6)
{
  int VAR_7;
  size_t VAR_8 = 0;
  uint8_t *VAR_9 = VAR_4;

  if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0)) {
    return VAR_0;
  }

  VAR_9 += sizeof(struct rite_section_irep_header);

  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_9, &VAR_8, VAR_6);
  if (VAR_7 != VAR_1) {
    return VAR_7;
  }
  *VAR_5 = VAR_9 - VAR_4 + VAR_8;
  FUNC_1(VAR_2, *VAR_5, VAR_4);

  return VAR_1;
}
