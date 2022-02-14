
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(mrb_state *VAR_1, mrb_value VAR_2, mrb_value VAR_3, mrb_int VAR_4, long VAR_5, unsigned int VAR_6)
{
  char VAR_7[4];
  int VAR_8 = 0;
  uint32_t VAR_9 = 0;

  VAR_9 = (uint32_t)FUNC_2(VAR_2);



  if (VAR_9 < 0x80) {
    VAR_7[0] = (char)VAR_9;
    VAR_8 = 1;
  }
  else if (VAR_9 < 0x800) {
    VAR_7[0] = (char)(0xC0 | (VAR_9 >> 6));
    VAR_7[1] = (char)(0x80 | (VAR_9 & 0x3F));
    VAR_8 = 2;
  }
  else if (VAR_9 < 0x10000) {
    VAR_7[0] = (char)(0xE0 | (VAR_9 >> 12) );
    VAR_7[1] = (char)(0x80 | ((VAR_9 >> 6) & 0x3F));
    VAR_7[2] = (char)(0x80 | ( VAR_9 & 0x3F));
    VAR_8 = 3;
  }
  else if (VAR_9 < 0x200000) {
    VAR_7[0] = (char)(0xF0 | (VAR_9 >> 18) );
    VAR_7[1] = (char)(0x80 | ((VAR_9 >> 12) & 0x3F));
    VAR_7[2] = (char)(0x80 | ((VAR_9 >> 6) & 0x3F));
    VAR_7[3] = (char)(0x80 | ( VAR_9 & 0x3F));
    VAR_8 = 4;
  }
  else {
    FUNC_3(VAR_1, VAR_0, "pack(U): value out of range");
  }

  VAR_3 = FUNC_4(VAR_1, VAR_3, VAR_4 + VAR_8);
  FUNC_1(FUNC_0(VAR_3) + VAR_4, VAR_7, VAR_8);

  return VAR_8;
}
