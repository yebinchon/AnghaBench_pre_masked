
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filterent {int f_srcport; void* f_dstop; void* f_srcop; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const* const,char*) ;
 int FUNC_2 (char const* const,char**,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, char const *const *VAR_4, struct filterent *VAR_5)
{
  int VAR_6;
  char *VAR_7;

  switch (VAR_3) {
  case 0:

    VAR_5->f_srcop = VAR_5->f_dstop = VAR_2;
    break;

  case 3:
    if (!FUNC_1(*VAR_4, "src") && !FUNC_1(VAR_4[1], "eq")) {
      VAR_6 = FUNC_2(VAR_4[2], &VAR_7, 0);
      if (VAR_7 == VAR_4[2]) {
 FUNC_0(VAR_0, "ParseIcmp: type is expected.\n");
 return 0;
      }
      VAR_5->f_srcop = VAR_1;
      VAR_5->f_srcport = VAR_6;
      VAR_5->f_dstop = VAR_2;
    }
    break;

  default:
    FUNC_0(VAR_0, "ParseIcmp: bad icmp syntax.\n");
    return 0;
  }
  return 1;
}
