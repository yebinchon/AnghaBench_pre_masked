
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct fsm_opt {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static const char *
FUNC_2(struct fsm_opt *VAR_6)
{
  static char VAR_7[70];
  u_int32_t VAR_8;
  char VAR_9;
  int VAR_10, VAR_11;

  FUNC_1(VAR_6->data, &VAR_8);
  VAR_10 = 0;
  if ((VAR_11 = FUNC_0(VAR_7, sizeof VAR_7, "value 0x%08x ", (unsigned)VAR_8)) > 0)
    VAR_10 += VAR_11;
  if (!(VAR_8 & VAR_3)) {
    if ((VAR_11 = FUNC_0(VAR_7 + VAR_10, sizeof VAR_7 - VAR_10, "(0")) > 0)
      VAR_10 += VAR_11;
  } else {
    VAR_9 = '(';
    if (VAR_8 & VAR_0) {
      if ((VAR_11 = FUNC_0(VAR_7 + VAR_10, sizeof VAR_7 - VAR_10, "%c128", VAR_9)) > 0)
        VAR_10 += VAR_11;
      VAR_9 = '/';
    }
    if (VAR_8 & VAR_2) {
      if ((VAR_11 = FUNC_0(VAR_7 + VAR_10, sizeof VAR_7 - VAR_10, "%c56", VAR_9)) > 0)
        VAR_10 += VAR_11;
      VAR_9 = '/';
    }
    if (VAR_8 & VAR_1) {
      if ((VAR_11 = FUNC_0(VAR_7 + VAR_10, sizeof VAR_7 - VAR_10, "%c40", VAR_9)) > 0)
        VAR_10 += VAR_11;
      VAR_9 = '/';
    }
  }

  if ((VAR_11 = FUNC_0(VAR_7 + VAR_10, sizeof VAR_7 - VAR_10, " bits, state%s",
                    (VAR_8 & VAR_5) ? "less" : "ful")) > 0)
    VAR_10 += VAR_11;

  if (VAR_8 & VAR_4) {
    if ((VAR_11 = FUNC_0(VAR_7 + VAR_10, sizeof VAR_7 - VAR_10, ", compressed")) > 0)
      VAR_10 += VAR_11;
  }

  FUNC_0(VAR_7 + VAR_10, sizeof VAR_7 - VAR_10, ")");

  return VAR_7;
}
