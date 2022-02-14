
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttydevice {int dummy; } ;
struct physical {int handler; } ;


 scalar_t__ FUNC_0 (struct ttydevice*) ;
 struct ttydevice* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_4(struct physical *VAR_0)
{
  struct ttydevice *VAR_1 = FUNC_1(VAR_0->handler);
  static char VAR_2[13];

  if (FUNC_0(VAR_1))
    FUNC_3(VAR_2, "with");
  else
    FUNC_3(VAR_2, "no");
  FUNC_2(VAR_2, " carrier");

  return VAR_2;
}
