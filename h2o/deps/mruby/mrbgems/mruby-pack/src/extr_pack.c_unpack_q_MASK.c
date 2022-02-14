
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int msg ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (char*,int,char*,unsigned long long) ;

__attribute__((used)) static int
FUNC_6(mrb_state *VAR_3, const unsigned char *VAR_4, int VAR_5, mrb_value VAR_6, unsigned int VAR_7)
{
  char VAR_8[60];
  uint64_t VAR_9;
  int VAR_10, VAR_11, VAR_12;
  mrb_int VAR_13;

  if (VAR_7 & VAR_1) {
    VAR_11 = 7;
    VAR_12 = -1;
  } else {
    VAR_11 = 0;
    VAR_12 = 1;
  }
  VAR_9 = 0;
  for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
    VAR_9 = VAR_9 * 256 + (uint64_t)VAR_4[VAR_11];
    VAR_11 += VAR_12;
  }
  if (VAR_7 & VAR_2) {
    int64_t VAR_14 = VAR_9;
    if (!FUNC_0(VAR_14)) {
      FUNC_5(VAR_8, sizeof(VAR_8), "cannot unpack to Fixnum: %lld", (long long)VAR_14);
      FUNC_4(VAR_3, VAR_0, VAR_8);
    }
    VAR_13 = VAR_14;
  } else {
    if (!FUNC_1(VAR_9)) {
      FUNC_5(VAR_8, sizeof(VAR_8), "cannot unpack to Fixnum: %llu", (unsigned long long)VAR_9);
      FUNC_4(VAR_3, VAR_0, VAR_8);
    }
    VAR_13 = VAR_9;
  }
  FUNC_2(VAR_3, VAR_6, FUNC_3(VAR_13));
  return 8;
}
