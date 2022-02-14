
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int addr_set; int off; int verbose; char dir; int width; int count; int binary; int scan; int skip; int reset; scalar_t__ mode; int addr; } ;
struct iiccmd {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (char*,struct options,char*) ;
 int FUNC_8 (char*,struct options,char*) ;
 int FUNC_9 (char*,struct options,char*) ;
 char* FUNC_10 (int) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_11 (struct iiccmd,char*) ;
 int FUNC_12 (struct iiccmd,char*,int,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,int ,int) ;
 int FUNC_15 () ;

int
FUNC_16(int VAR_13, char** VAR_14)
{
 struct iiccmd VAR_15;
 struct options VAR_16;
 char *VAR_17, *VAR_18, *VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_8 = 0;
 VAR_20 = 0;


 VAR_21 = 16;

 VAR_17 = VAR_2;


 VAR_16.addr_set = 0;
 VAR_16.off = 0;
 VAR_16.verbose = 0;
 VAR_16.dir = 'r';
 VAR_16.width = 8;
 VAR_16.count = 1;
 VAR_16.binary = 0;
 VAR_16.scan = 0;
 VAR_16.skip = 0;
 VAR_16.reset = 0;
 VAR_16.mode = VAR_4;

 while ((VAR_24 = FUNC_6(VAR_13, VAR_14, "a:f:d:o:w:c:m:n:sbvrh")) != -1) {
  switch(VAR_24) {
  case 'a':
   VAR_16.addr = (FUNC_14(VAR_9, 0, 16) << 1);
   if (VAR_16.addr == 0 && VAR_8 == VAR_0)
    VAR_16.addr_set = 0;
   else
    VAR_16.addr_set = 1;
   break;
  case 'f':
   VAR_17 = VAR_9;
   break;
  case 'd':
   VAR_16.dir = VAR_9[0];
   break;
  case 'o':
   VAR_16.off = FUNC_14(VAR_9, 0, 16);
   if (VAR_16.off == 0 && VAR_8 == VAR_0)
    VAR_20 = 1;
   break;
  case 'w':
   VAR_16.width = FUNC_0(VAR_9);
   break;
  case 'c':
   VAR_16.count = FUNC_0(VAR_9);
   break;
  case 'm':
   if (!FUNC_13(VAR_9, "no"))
    VAR_16.mode = VAR_3;
   else if (!FUNC_13(VAR_9, "ss"))
    VAR_16.mode = VAR_6;
   else if (!FUNC_13(VAR_9, "rs"))
    VAR_16.mode = VAR_5;
   else if (!FUNC_13(VAR_9, "tr"))
    VAR_16.mode = VAR_7;
   else
    FUNC_15();
   break;
  case 'n':
   VAR_16.skip = 1;
   VAR_18 = VAR_9;
   break;
  case 's':
   VAR_16.scan = 1;
   break;
  case 'b':
   VAR_16.binary = 1;
   break;
  case 'v':
   VAR_16.verbose = 1;
   break;
  case 'r':
   VAR_16.reset = 1;
   break;
  case 'h':
  default:
   FUNC_15();
  }
 }
 VAR_13 -= VAR_10;
 VAR_14 += VAR_10;


 if (VAR_16.mode == VAR_4) {
  if (VAR_16.dir == 'r')
   VAR_16.mode = VAR_6;
  else if (VAR_16.dir == 'w')
   VAR_16.mode = VAR_3;
 }


 if (VAR_16.scan) {
  if (VAR_16.addr_set)
   FUNC_15();
 } else if (VAR_16.reset) {
  if (VAR_16.addr_set)
   FUNC_15();
 } else if (VAR_20) {
  FUNC_15();
 } else if ((VAR_16.dir == 'r' || VAR_16.dir == 'w')) {
  if ((VAR_16.addr_set == 0) ||
      !(VAR_16.width == 0 || VAR_16.width == 8 ||
      VAR_16.width == 16))
  FUNC_15();
 }

 if (VAR_16.verbose)
  FUNC_3(VAR_11, "dev: %s, addr: 0x%x, r/w: %c, "
      "offset: 0x%02x, width: %u, count: %u\n", VAR_17,
      VAR_16.addr >> 1, VAR_16.dir, VAR_16.off,
      VAR_16.width, VAR_16.count);

 if (VAR_16.scan)
  FUNC_2(FUNC_12(VAR_15, VAR_17, VAR_16.skip, VAR_18));

 if (VAR_16.reset)
  FUNC_2(FUNC_11(VAR_15, VAR_17));

 VAR_19 = FUNC_10(VAR_16.count);
 if (VAR_19 == ((void*)0))
  FUNC_1(1, "data malloc");




 if (VAR_16.dir == 'w') {
  if (VAR_16.verbose && !VAR_16.binary)
   FUNC_3(VAR_11, "Enter %u bytes of data: ",
       VAR_16.count);
  for (VAR_22 = 0; VAR_22 < VAR_16.count; VAR_22++) {
   VAR_24 = FUNC_5();
   if (VAR_24 == VAR_1) {
    FUNC_4(VAR_19);
    FUNC_1(1, "not enough data, exiting\n");
   }
   VAR_19[VAR_22] = VAR_24;
  }
 }

 if (VAR_16.mode == VAR_7)
  VAR_20 = FUNC_7(VAR_17, VAR_16, VAR_19);
 else if (VAR_16.dir == 'w')
  VAR_20 = FUNC_9(VAR_17, VAR_16, VAR_19);
 else
  VAR_20 = FUNC_8(VAR_17, VAR_16, VAR_19);

 if (VAR_20 != 0) {
  FUNC_4(VAR_19);
  return (1);
 }

 if (VAR_16.verbose)
  FUNC_3(VAR_11, "\nData %s (hex):\n", VAR_16.dir == 'r' ?
      "read" : "written");

 VAR_22 = 0;
 VAR_23 = 0;
 while (VAR_22 < VAR_16.count) {
  if (VAR_16.verbose || (VAR_16.dir == 'r' &&
      !VAR_16.binary))
   FUNC_3 (VAR_11, "%02hhx ", VAR_19[VAR_22++]);

  if (VAR_16.dir == 'r' && VAR_16.binary) {
   FUNC_3(VAR_12, "%c", VAR_19[VAR_23++]);
   if(!VAR_16.verbose)
    VAR_22++;
  }
  if (!VAR_16.verbose && (VAR_16.dir == 'w'))
   break;
  if ((VAR_22 % VAR_21) == 0)
   FUNC_3(VAR_11, "\n");
 }
 if ((VAR_22 % VAR_21) != 0)
  FUNC_3(VAR_11, "\n");

 FUNC_4(VAR_19);
 return (0);
}
