
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {char report_ID; int flags; int report_count; int pos; scalar_t__ report_size; } ;
struct command {int value; scalar_t__ anyvalue; int debounce; int lastseen; int lastused; TYPE_1__ item; struct command* next; } ;
typedef int * report_desc_t ;
typedef int devnamebuf ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 struct command* VAR_9 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct command*,int,char const*,int,char**) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct command*) ;
 int FUNC_9 (int,char**,char*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (char*,TYPE_1__*) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (char const*) ;
 int VAR_10 ;
 scalar_t__ FUNC_14 (int *,int ,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_15 (char const) ;
 int FUNC_16 (char const*,int,...) ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 void* FUNC_17 (char const*,int *,int,int) ;
 void* VAR_14 ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (int,char*,size_t) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (char*,int,char*,...) ;
 size_t FUNC_22 (char*) ;
 int FUNC_23 () ;
 int VAR_17 ;
 scalar_t__ FUNC_24 (int,char*,size_t) ;

int
FUNC_25(int VAR_18, char **VAR_19)
{
 const char *VAR_20 = ((void*)0);
 const char *VAR_21 = ((void*)0);
 const char *VAR_22 = ((void*)0);
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 size_t VAR_29, VAR_30;
 int VAR_31, VAR_32, VAR_33;
 report_desc_t VAR_34;
 char VAR_35[100];
 char VAR_36[VAR_4];
 struct command *VAR_37;
 int VAR_38 = -1;

 VAR_31 = 1;
 VAR_32 = 0;
 VAR_33 = 0;
 while ((VAR_25 = FUNC_9(VAR_18, VAR_19, "c:def:ip:r:t:v")) != -1) {
  switch(VAR_25) {
  case 'c':
   VAR_20 = VAR_12;
   break;
  case 'd':
   VAR_31 ^= 1;
   break;
  case 'e':
   VAR_33 = 1;
   break;
  case 'i':
   VAR_32++;
   break;
  case 'f':
   VAR_21 = VAR_12;
   break;
  case 'p':
   VAR_14 = VAR_12;
   break;
  case 'r':
   VAR_38 = FUNC_1(VAR_12);
   break;
  case 't':
   VAR_22 = VAR_12;
   break;
  case 'v':
   VAR_31 = 0;
   VAR_17++;
   break;
  case '?':
  default:
   FUNC_23();
  }
 }
 VAR_18 -= VAR_13;
 VAR_19 += VAR_13;

 if (VAR_20 == ((void*)0) || VAR_21 == ((void*)0))
  FUNC_23();

 FUNC_13(VAR_22);

 if (VAR_21[0] != '/') {
  FUNC_21(VAR_36, sizeof(VAR_36), "/dev/%s%s",
    FUNC_15(VAR_21[0]) ? "uhid" : "", VAR_21);
  VAR_21 = VAR_36;
 }

 VAR_23 = FUNC_16(VAR_21, VAR_2);
 if (VAR_23 < 0)
  FUNC_5(1, "%s", VAR_21);
 VAR_34 = FUNC_12(VAR_23);
 if (VAR_34 == ((void*)0))
  FUNC_5(1, "hid_get_report_desc() failed");

 VAR_9 = FUNC_17(VAR_20, VAR_34, VAR_38, VAR_32);

 VAR_29 = (size_t)FUNC_14(VAR_34, VAR_10, -1);

 if (VAR_17)
  FUNC_18("report size %zu\n", VAR_29);
 if (VAR_29 > sizeof VAR_35)
  FUNC_6(1, "report too large");

 (void)FUNC_20(VAR_5, VAR_16);

 if (VAR_31) {
  VAR_24 = FUNC_16(VAR_14, VAR_3|VAR_1, VAR_8|VAR_6|VAR_7);
  if (VAR_24 < 0)
   FUNC_5(1, "%s", VAR_14);
  if (FUNC_3(0, 0) < 0)
   FUNC_5(1, "daemon()");
  FUNC_21(VAR_35, sizeof(VAR_35), "%ld\n", (long)FUNC_10());
  VAR_30 = FUNC_22(VAR_35);
  if (FUNC_24(VAR_24, VAR_35, VAR_30) < 0)
   FUNC_5(1, "%s", VAR_14);
  FUNC_2(VAR_24);
  VAR_11 = 1;
 }

 for(;;) {
  VAR_26 = FUNC_19(VAR_23, VAR_35, VAR_29);
  if (VAR_17 > 2) {
   FUNC_18("read %d bytes:", VAR_26);
   for (VAR_28 = 0; VAR_28 < VAR_26; VAR_28++)
    FUNC_18(" %02x", VAR_35[VAR_28]);
   FUNC_18("\n");
  }
  if (VAR_26 < 0) {
   if (VAR_17)
    FUNC_5(1, "read");
   else
    FUNC_7(1);
  }





  for (VAR_37 = VAR_9; VAR_37; VAR_37 = VAR_37->next) {
   if (VAR_37->item.report_ID != 0 &&
       VAR_35[0] != VAR_37->item.report_ID)
    continue;
   if (VAR_37->item.flags & VAR_0)
    VAR_27 = FUNC_11(VAR_35, &VAR_37->item);
   else {
    uint32_t VAR_39 = VAR_37->item.pos;
    for (VAR_28 = 0; VAR_28 < VAR_37->item.report_count; VAR_28++) {
     VAR_27 = FUNC_11(VAR_35, &VAR_37->item);
     if (VAR_27 == VAR_37->value)
      break;
     VAR_37->item.pos += VAR_37->item.report_size;
    }
    VAR_37->item.pos = VAR_39;
    VAR_27 = (VAR_28 < VAR_37->item.report_count) ?
        VAR_37->value : -1;
   }
   if (VAR_37->value != VAR_27 && VAR_37->anyvalue == 0)
    goto next;
   if ((VAR_37->debounce == 0) ||
       ((VAR_37->debounce == 1) && ((VAR_37->lastseen == -1) ||
            (VAR_37->lastseen != VAR_27)))) {
    FUNC_4(VAR_37, VAR_27, VAR_21, VAR_18, VAR_19);
    goto next;
   }
   if ((VAR_37->debounce > 1) &&
       ((VAR_37->lastused == -1) ||
        (FUNC_0(VAR_37->lastused - VAR_27) >= VAR_37->debounce))) {
    FUNC_4(VAR_37, VAR_27, VAR_21, VAR_18, VAR_19);
    VAR_37->lastused = VAR_27;
    goto next;
   }
next:
   VAR_37->lastseen = VAR_27;
  }

  if (VAR_33)
   FUNC_7(0);

  if (VAR_15) {
   struct command *VAR_40 =
       FUNC_17(VAR_20, VAR_34, VAR_38, VAR_32);
   if (VAR_40) {
    FUNC_8(VAR_9);
    VAR_9 = VAR_40;
   }
   VAR_15 = 0;
  }
 }

 FUNC_7(0);
}
