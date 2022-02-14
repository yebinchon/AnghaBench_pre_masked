
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_2__ {double value; scalar_t__ bits64; scalar_t__* bits32; } ;
typedef TYPE_1__ double_bits_t ;


 scalar_t__ FUNC_0 (double) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (const char *VAR_1, double VAR_2, double VAR_3)
{
  double_bits_t VAR_4;
  double_bits_t VAR_5;

  VAR_4.value = VAR_2;
  VAR_5.value = VAR_3;

  FUNC_1 ("%s = 0x%08x%08x [expected=0x%08x%08x] ", VAR_1,
          (unsigned int) VAR_4.bits32[1], (unsigned int) VAR_4.bits32[0],
          (unsigned int) VAR_5.bits32[1], (unsigned int) VAR_5.bits32[0]);

  bool VAR_6;
  if (FUNC_0 (VAR_2) && FUNC_0 (VAR_3))
  {
    VAR_6 = 1;
  }
  else
  {
    int64_t VAR_7 = (int64_t) (VAR_4.bits64 - VAR_5.bits64);
    if (VAR_7 < 0)
    {
      VAR_7 = -VAR_7;
    }

    if (VAR_7 <= 1)
    {
      VAR_6 = 1;
      if (VAR_7 != 0)
      {
        FUNC_1 ("APPROX ");
      }
    }
    else
    {
      VAR_6 = 0;
    }
  }
  FUNC_1 ("%s\n", VAR_6 ? "PASS" : "FAIL");

  VAR_0 &= VAR_6;
}
