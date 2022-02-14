
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int locale; int evt_class; scalar_t__ reserved; } ;
union mfi_evt {TYPE_1__ members; } ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef size_t u_int ;
struct mfi_evt_log_state {scalar_t__ boot_seq_num; scalar_t__ newest_seq_num; } ;
struct mfi_evt_list {size_t count; TYPE_2__* event; } ;
struct mfi_evt_detail {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (struct mfi_evt_list*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 () ;
 struct mfi_evt_list* FUNC_4 (int) ;
 int FUNC_5 (int,TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (int,struct mfi_evt_log_state*,int *) ;
 scalar_t__ FUNC_7 (int,struct mfi_evt_list*,int,union mfi_evt,scalar_t__,scalar_t__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (struct mfi_evt_log_state*,char*,scalar_t__*) ;
 long FUNC_13 (int ,char**,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,...) ;

__attribute__((used)) static int
FUNC_16(int VAR_12, char **VAR_13)
{
 struct mfi_evt_log_state VAR_14;
 struct mfi_evt_list *VAR_15;
 union mfi_evt VAR_16;
 bool VAR_17;
 long VAR_18;
 char *VAR_19;
 ssize_t VAR_20;
 uint32_t VAR_21, VAR_22, VAR_23;
 uint16_t VAR_24;
 uint8_t VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 u_int VAR_31;

 VAR_28 = FUNC_8(VAR_9, VAR_7);
 if (VAR_28 < 0) {
  VAR_27 = VAR_8;
  FUNC_14("mfi_open");
  return (VAR_27);
 }

 if (FUNC_6(VAR_28, &VAR_14, ((void*)0)) < 0) {
  VAR_27 = VAR_8;
  FUNC_14("Failed to get event log info");
  FUNC_0(VAR_28);
  return (VAR_27);
 }


 VAR_29 = 15;
 VAR_16.members.reserved = 0;
 VAR_16.members.locale = VAR_4;
 VAR_16.members.evt_class = VAR_3;
 VAR_22 = VAR_14.boot_seq_num;
 VAR_23 = VAR_14.newest_seq_num;
 VAR_30 = 0;


 VAR_11 = 1;
 while ((VAR_26 = FUNC_2(VAR_12, VAR_13, "c:l:n:v")) != -1) {
  switch (VAR_26) {
  case 'c':
   if (FUNC_10(VAR_10, &VAR_16.members.evt_class) < 0) {
    VAR_27 = VAR_8;
    FUNC_14("Error parsing event class");
    FUNC_0(VAR_28);
    return (VAR_27);
   }
   break;
  case 'l':
   if (FUNC_11(VAR_10, &VAR_24) < 0) {
    VAR_27 = VAR_8;
    FUNC_14("Error parsing event locale");
    FUNC_0(VAR_28);
    return (VAR_27);
   }
   VAR_16.members.locale = VAR_24;
   break;
  case 'n':
   VAR_18 = FUNC_13(VAR_10, &VAR_19, 0);
   if (*VAR_19 != '\0' || VAR_18 <= 0) {
    FUNC_15("Invalid event count");
    FUNC_0(VAR_28);
    return (VAR_0);
   }
   VAR_29 = VAR_18;
   break;
  case 'v':
   VAR_30 = 1;
   break;
  case '?':
  default:
   FUNC_0(VAR_28);
   return (VAR_0);
  }
 }
 VAR_12 -= VAR_11;
 VAR_13 += VAR_11;


 VAR_20 = sizeof(struct mfi_evt_list) + sizeof(struct mfi_evt_detail) *
     (VAR_29 - 1);
 if (VAR_20 > FUNC_3()) {
  FUNC_15("Event count is too high");
  FUNC_0(VAR_28);
  return (VAR_0);
 }


 if (VAR_12 > 2) {
  FUNC_15("show events: extra arguments");
  FUNC_0(VAR_28);
  return (VAR_0);
 }
 if (VAR_12 > 0 && FUNC_12(&VAR_14, VAR_13[0], &VAR_22) < 0) {
  VAR_27 = VAR_8;
  FUNC_14("Error parsing starting sequence number");
  FUNC_0(VAR_28);
  return (VAR_27);
 }
 if (VAR_12 > 1 && FUNC_12(&VAR_14, VAR_13[1], &VAR_23) < 0) {
  VAR_27 = VAR_8;
  FUNC_14("Error parsing ending sequence number");
  FUNC_0(VAR_28);
  return (VAR_27);
 }

 VAR_15 = FUNC_4(VAR_20);
 if (VAR_15 == ((void*)0)) {
  FUNC_15("malloc failed");
  FUNC_0(VAR_28);
  return (VAR_2);
 }
 VAR_17 = 1;
 VAR_21 = VAR_22;
 for (;;) {
  if (FUNC_7(VAR_28, VAR_15, VAR_29, VAR_16, VAR_21,
      &VAR_25) < 0) {
   VAR_27 = VAR_8;
   FUNC_14("Failed to fetch events");
   FUNC_1(VAR_15);
   FUNC_0(VAR_28);
   return (VAR_27);
  }
  if (VAR_25 == VAR_5) {
   break;
  }
  if (VAR_25 != VAR_6) {
   FUNC_15("Error fetching events: %s", FUNC_9(VAR_25));
   FUNC_1(VAR_15);
   FUNC_0(VAR_28);
   return (VAR_1);
  }

  for (VAR_31 = 0; VAR_31 < VAR_15->count; VAR_31++) {







   if (VAR_15->event[VAR_31].seq > VAR_23) {
    if (VAR_22 <= VAR_23)
     goto finish;
    else if (VAR_15->event[VAR_31].seq < VAR_22)
     goto finish;
   }
   FUNC_5(VAR_28, &VAR_15->event[VAR_31], VAR_30);
   VAR_17 = 0;
  }






  VAR_21 = VAR_15->event[VAR_15->count - 1].seq + 1;

 }
finish:
 if (VAR_17)
  FUNC_15("No matching events found");

 FUNC_1(VAR_15);
 FUNC_0(VAR_28);

 return (0);
}
