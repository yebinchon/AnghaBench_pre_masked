
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 unsigned int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_1, const void *VAR_2, int VAR_3, mrb_value VAR_4, int VAR_5, unsigned int VAR_6)
{
  mrb_value VAR_7;
  int VAR_8, VAR_9, VAR_10, VAR_11;
  const char *VAR_12, *VAR_13;
  char *VAR_14, *VAR_15;
  const char VAR_16[] = "0123456789abcdef";

  if (VAR_6 & VAR_0) {
    VAR_9 = 0;
    VAR_11 = 4;
  } else {
    VAR_9 = 4;
    VAR_11 = 0;
  }

  VAR_12 = (const char *)VAR_2;

  if (VAR_5 == -1)
    VAR_5 = VAR_3 * 2;

  VAR_7 = FUNC_2(VAR_1, ((void*)0), VAR_5);
  VAR_14 = FUNC_0(VAR_7);

  VAR_13 = VAR_12;
  VAR_15 = VAR_14;
  while (VAR_3 > 0 && VAR_5 > 0) {
    VAR_8 = (*VAR_12 >> VAR_9) & 0x0f;
    VAR_10 = (*VAR_12 >> VAR_11) & 0x0f;
    VAR_12++;
    VAR_3--;

    *VAR_14++ = VAR_16[VAR_8];
    VAR_5--;

    if (VAR_5 > 0) {
      *VAR_14++ = VAR_16[VAR_10];
      VAR_5--;
    }
  }

  VAR_7 = FUNC_3(VAR_1, VAR_7, VAR_14 - VAR_15);
  FUNC_1(VAR_1, VAR_4, VAR_7);
  return (int)(VAR_12 - VAR_13);
}
