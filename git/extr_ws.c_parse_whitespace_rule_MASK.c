
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* rule_name; unsigned int rule_bits; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,int,char const*) ;
 TYPE_1__* VAR_4 ;

unsigned FUNC_7(const char *VAR_5)
{
 unsigned VAR_6 = VAR_0;

 while (VAR_5) {
  int VAR_7;
  size_t VAR_8;
  const char *VAR_9;
  int VAR_10 = 0;

  VAR_5 = VAR_5 + FUNC_5(VAR_5, ", \t\n\r");
  VAR_9 = FUNC_3(VAR_5, ',');
  VAR_8 = VAR_9 - VAR_5;

  if (*VAR_5 == '-') {
   VAR_10 = 1;
   VAR_5++;
   VAR_8--;
  }
  if (!VAR_8)
   break;
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
   if (FUNC_4(VAR_4[VAR_7].rule_name,
        VAR_5, VAR_8))
    continue;
   if (VAR_10)
    VAR_6 &= ~VAR_4[VAR_7].rule_bits;
   else
    VAR_6 |= VAR_4[VAR_7].rule_bits;
   break;
  }
  if (FUNC_4(VAR_5, "tabwidth=", 9) == 0) {
   unsigned VAR_11 = FUNC_1(VAR_5 + 9);
   if (0 < VAR_11 && VAR_11 < 0100) {
    VAR_6 &= ~VAR_3;
    VAR_6 |= VAR_11;
   }
   else
    FUNC_6("tabwidth %.*s out of range",
     (int)(VAR_8 - 9), VAR_5 + 9);
  }
  VAR_5 = VAR_9;
 }

 if (VAR_6 & VAR_2 && VAR_6 & VAR_1)
  FUNC_2("cannot enforce both tab-in-indent and indent-with-non-tab");
 return VAR_6;
}
