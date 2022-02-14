
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_1, mrb_value VAR_2, mrb_value VAR_3, mrb_int VAR_4, long VAR_5, unsigned int VAR_6)
{
  unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
  long VAR_11;
  char *VAR_12, *VAR_13, *VAR_14;

  VAR_14 = FUNC_1(VAR_2);
  VAR_11 = (long)FUNC_0(VAR_2);

  if (VAR_6 & VAR_0) {
    VAR_8 = 0;
    VAR_10 = 4;
  } else {
    VAR_8 = 4;
    VAR_10 = 0;
  }

  if (VAR_5 == -1) {
    VAR_5 = VAR_11;
  } else if (VAR_11 > VAR_5) {
    VAR_11 = VAR_5;
  }

  VAR_3 = FUNC_3(VAR_1, VAR_3, VAR_4 + VAR_5);
  VAR_12 = FUNC_1(VAR_3) + VAR_4;

  VAR_13 = VAR_12;
  for (; VAR_5 > 0; VAR_5 -= 2) {
    VAR_7 = VAR_9 = 0;
    if (VAR_11 > 0) {
      VAR_7 = FUNC_2(*VAR_14++);
      VAR_11--;
    }
    if (VAR_11 > 0) {
      VAR_9 = FUNC_2(*VAR_14++);
      VAR_11--;
    }
    *VAR_12++ = (VAR_7 << VAR_8) + (VAR_9 << VAR_10);
  }

  return (int)(VAR_12 - VAR_13);
}
