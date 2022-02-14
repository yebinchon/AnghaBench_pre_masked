
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {char* cchar; char* fmt; } ;
typedef TYPE_1__ PR ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(PR *VAR_1, u_char *VAR_2)
{
 static char const * VAR_3[] = {
  "nul", "soh", "stx", "etx", "eot", "enq", "ack", "bel",
   "bs", "ht", "lf", "vt", "ff", "cr", "so", "si",
  "dle", "dc1", "dc2", "dc3", "dc4", "nak", "syn", "etb",
  "can", "em", "sub", "esc", "fs", "gs", "rs", "us",
 };


 if (*VAR_2 <= 0x1f) {
  *VAR_1->cchar = 's';
  if (VAR_0 && *VAR_2 == 0x0a)
   (void)FUNC_1(VAR_1->fmt, "nl");
  else
   (void)FUNC_1(VAR_1->fmt, VAR_3[*VAR_2]);
 } else if (*VAR_2 == 0x7f) {
  *VAR_1->cchar = 's';
  (void)FUNC_1(VAR_1->fmt, "del");
 } else if (VAR_0 && *VAR_2 == 0x20) {
  *VAR_1->cchar = 's';
  (void)FUNC_1(VAR_1->fmt, " sp");
 } else if (FUNC_0(*VAR_2)) {
  *VAR_1->cchar = 'c';
  (void)FUNC_1(VAR_1->fmt, *VAR_2);
 } else {
  *VAR_1->cchar = 'x';
  (void)FUNC_1(VAR_1->fmt, (int)*VAR_2);
 }
}
