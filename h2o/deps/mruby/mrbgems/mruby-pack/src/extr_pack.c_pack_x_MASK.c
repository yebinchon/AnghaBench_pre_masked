
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef long mrb_int ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,long) ;

__attribute__((used)) static int
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1, mrb_value VAR_2, mrb_int VAR_3, long VAR_4, unsigned int VAR_5)
{
  long VAR_6;

  if (VAR_4 < 0) return 0;
  VAR_2 = FUNC_1(VAR_0, VAR_2, VAR_3 + VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
    FUNC_0(VAR_2)[VAR_3 + VAR_6] = '\0';
  }
  return VAR_4;
}
