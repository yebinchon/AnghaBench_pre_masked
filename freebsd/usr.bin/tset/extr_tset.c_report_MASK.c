
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_4__ {scalar_t__* c_cc; } ;
struct TYPE_3__ {scalar_t__* c_cc; } ;


 int FUNC_0 (int ,char*,...) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void
FUNC_1(const char *VAR_3, int VAR_4, u_int VAR_5)
{
 u_int VAR_6, VAR_7;

 VAR_7 = VAR_0.c_cc[VAR_4];
 VAR_6 = VAR_1.c_cc[VAR_4];

 if (VAR_6 == VAR_7 && VAR_6 == VAR_5)
  return;

 (void)FUNC_0(VAR_2, "%s %s ", VAR_3, VAR_6 == VAR_7 ? "is" : "set to");

 if (VAR_7 == 010)
  (void)FUNC_0(VAR_2, "backspace.\n");
 else if (VAR_7 == 0177)
  (void)FUNC_0(VAR_2, "delete.\n");
 else if (VAR_7 < 040) {
  VAR_7 ^= 0100;
  (void)FUNC_0(VAR_2, "control-%ld (^%ld).\n", VAR_7, VAR_7);
 } else
  (void)FUNC_0(VAR_2, "%ld.\n", VAR_7);
}
