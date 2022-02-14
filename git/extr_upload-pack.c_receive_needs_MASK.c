
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct string_list {int dummy; } ;
struct packet_writer {int dummy; } ;
struct packet_reader {int line; } ;
struct object_id {int dummy; } ;
struct object_array {scalar_t__ nr; } ;
struct object {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct object_array VAR_3 ;
 scalar_t__ VAR_4 ;
 struct string_list VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct object*,int *,struct object_array*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct object_array*,struct packet_writer*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct object*) ;
 int FUNC_4 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct object_array*) ;
 int FUNC_6 (struct object_id*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct packet_reader*) ;
 int FUNC_9 (struct packet_writer*,char*,int ) ;
 int FUNC_10 (struct packet_writer*,int) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (int *,char const*) ;
 struct object* FUNC_13 (int ,struct object_id*) ;
 scalar_t__ FUNC_14 (char const*,struct object_id*,char const**) ;
 scalar_t__ FUNC_15 (int ,int*) ;
 scalar_t__ FUNC_16 (int ,struct string_list*,int*) ;
 scalar_t__ FUNC_17 (int ,int *,int*) ;
 scalar_t__ FUNC_18 (int ,struct object_array*) ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (struct packet_writer*,int,int,int ,struct string_list*,int,struct object_array*,struct object_array*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_21 (int ,char*,char const**) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_22(struct packet_reader *VAR_21, struct object_array *VAR_22)
{
 struct object_array VAR_23 = VAR_3;
 struct string_list VAR_24 = VAR_5;
 int VAR_25 = 0;
 int VAR_26 = 0;
 timestamp_t VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = 0;
 struct packet_writer VAR_30;

 VAR_15 = 0;
 FUNC_10(&VAR_30, 1);
 for (;;) {
  struct object *VAR_31;
  const char *VAR_32;
  struct object_id VAR_33;
  const char *VAR_34;

  FUNC_19();
  if (FUNC_8(VAR_21) != VAR_4)
   break;

  if (FUNC_18(VAR_21->line, &VAR_23))
   continue;
  if (FUNC_15(VAR_21->line, &VAR_25))
   continue;
  if (FUNC_17(VAR_21->line, &VAR_27, &VAR_28))
   continue;
  if (FUNC_16(VAR_21->line, &VAR_24, &VAR_28))
   continue;

  if (FUNC_21(VAR_21->line, "filter ", &VAR_34)) {
   if (!VAR_10)
    FUNC_2("git upload-pack: filtering capability not negotiated");
   FUNC_4(&VAR_11);
   FUNC_12(&VAR_11, VAR_34);
   continue;
  }

  if (!FUNC_21(VAR_21->line, "want ", &VAR_34) ||
      FUNC_14(VAR_34, &VAR_33, &VAR_32))
   FUNC_2("git upload-pack: protocol error, "
       "expected to get object ID, not '%s'", VAR_21->line);

  if (FUNC_11(VAR_32, "deepen-relative"))
   VAR_29 = 1;
  if (FUNC_11(VAR_32, "multi_ack_detailed"))
   VAR_12 = 2;
  else if (FUNC_11(VAR_32, "multi_ack"))
   VAR_12 = 1;
  if (FUNC_11(VAR_32, "no-done"))
   VAR_13 = 1;
  if (FUNC_11(VAR_32, "thin-pack"))
   VAR_20 = 1;
  if (FUNC_11(VAR_32, "ofs-delta"))
   VAR_18 = 1;
  if (FUNC_11(VAR_32, "side-band-64k"))
   VAR_19 = VAR_2;
  else if (FUNC_11(VAR_32, "side-band"))
   VAR_19 = VAR_1;
  if (FUNC_11(VAR_32, "no-progress"))
   VAR_14 = 1;
  if (FUNC_11(VAR_32, "include-tag"))
   VAR_17 = 1;
  if (VAR_7 && FUNC_11(VAR_32, "filter"))
   VAR_10 = 1;

  VAR_31 = FUNC_13(VAR_16, &VAR_33);
  if (!VAR_31) {
   FUNC_9(&VAR_30,
         "upload-pack: not our ref %s",
         FUNC_6(&VAR_33));
   FUNC_2("git upload-pack: not our ref %s",
       FUNC_6(&VAR_33));
  }
  if (!(VAR_31->flags & VAR_6)) {
   VAR_31->flags |= VAR_6;
   if (!((VAR_8 & VAR_0) == VAR_0
         || FUNC_3(VAR_31)))
    VAR_26 = 1;
   FUNC_0(VAR_31, ((void*)0), VAR_22);
  }
 }
 if (VAR_26)
  FUNC_1(VAR_22, &VAR_30);

 if (!VAR_19 && VAR_9)
  VAR_14 = 1;

 if (VAR_25 == 0 && !VAR_28 && VAR_23.nr == 0)
  return;

 if (FUNC_20(&VAR_30, VAR_25, VAR_28, VAR_27,
         &VAR_24, VAR_29, &VAR_23,
         VAR_22))
  FUNC_7(1);
 FUNC_5(&VAR_23);
}
