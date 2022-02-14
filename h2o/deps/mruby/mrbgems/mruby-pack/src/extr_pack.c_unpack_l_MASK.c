
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int msg ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (char*,int,char*,unsigned long) ;

__attribute__((used)) static int
FUNC_6(mrb_state *VAR_3, const unsigned char *VAR_4, int VAR_5, mrb_value VAR_6, unsigned int VAR_7)
{

  char VAR_8[60];

  uint32_t VAR_9;
  mrb_int VAR_10;

  if (VAR_7 & VAR_1) {
    VAR_9 = (uint32_t)VAR_4[3] * 256*256*256;
    VAR_9 += (uint32_t)VAR_4[2] *256*256;
    VAR_9 += (uint32_t)VAR_4[1] *256;
    VAR_9 += (uint32_t)VAR_4[0];
  } else {
    VAR_9 = (uint32_t)VAR_4[0] * 256*256*256;
    VAR_9 += (uint32_t)VAR_4[1] *256*256;
    VAR_9 += (uint32_t)VAR_4[2] *256;
    VAR_9 += (uint32_t)VAR_4[3];
  }
  if (VAR_7 & VAR_2) {
    int32_t VAR_11 = VAR_9;

    if (!FUNC_0(VAR_11)) {
      FUNC_5(VAR_8, sizeof(VAR_8), "cannot unpack to Fixnum: %ld", (long)VAR_11);
      FUNC_4(VAR_3, VAR_0, VAR_8);
    }

    VAR_10 = VAR_11;
  } else {

    if (!FUNC_1(VAR_9)) {
      FUNC_5(VAR_8, sizeof(VAR_8), "cannot unpack to Fixnum: %lu", (unsigned long)VAR_9);
      FUNC_4(VAR_3, VAR_0, VAR_8);
    }

    VAR_10 = VAR_9;
  }
  FUNC_2(VAR_3, VAR_6, FUNC_3(VAR_10));
  return 4;
}
