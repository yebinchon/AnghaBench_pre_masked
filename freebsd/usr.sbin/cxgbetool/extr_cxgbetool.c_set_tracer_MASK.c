
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int t ;
struct TYPE_2__ {int snap_len; int port; scalar_t__ invert; scalar_t__ skip_len; scalar_t__ skip_ofst; scalar_t__ min_len; } ;
struct t4_tracer {int enabled; int valid; TYPE_1__ tp; int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct t4_tracer*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct t4_tracer*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(uint8_t VAR_2, int VAR_3, const char *VAR_4[])
{
 struct t4_tracer VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(&VAR_5, sizeof (VAR_5));
 VAR_5.idx = VAR_2;
 VAR_5.enabled = 1;
 VAR_5.valid = 1;

 if (VAR_3 != 1) {
  FUNC_5("must specify tx<n> or rx<n>.");
  return (VAR_1);
 }

 VAR_6 = FUNC_3(VAR_4[0]);
 if (VAR_6 != 3) {
  FUNC_5("argument must be 3 characters (tx<n> or rx<n>)");
  return (VAR_1);
 }

 if (FUNC_4(VAR_4[0], "tx", 2) == 0) {
  VAR_7 = VAR_4[0][2] - '0';
  if (VAR_7 < 0 || VAR_7 > 3) {
   FUNC_5("'%c' in %s is invalid", VAR_4[0][2], VAR_4[0]);
   return (VAR_1);
  }
  VAR_7 += 4;
 } else if (FUNC_4(VAR_4[0], "rx", 2) == 0) {
  VAR_7 = VAR_4[0][2] - '0';
  if (VAR_7 < 0 || VAR_7 > 3) {
   FUNC_5("'%c' in %s is invalid", VAR_4[0][2], VAR_4[0]);
   return (VAR_1);
  }
 } else {
  FUNC_5("argument '%s' isn't tx<n> or rx<n>", VAR_4[0]);
  return (VAR_1);
 }

 VAR_5.tp.snap_len = 128;
 VAR_5.tp.min_len = 0;
 VAR_5.tp.skip_ofst = 0;
 VAR_5.tp.skip_len = 0;
 VAR_5.tp.invert = 0;
 VAR_5.tp.port = VAR_7;

 FUNC_1();
 return FUNC_2(VAR_0, &VAR_5);
}
