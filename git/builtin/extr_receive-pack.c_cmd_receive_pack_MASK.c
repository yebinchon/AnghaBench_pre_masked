
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct shallow_info {int nr_theirs; int nr_ours; } ;
struct packet_reader {int dummy; } ;
struct option {int dummy; } ;
struct oid_array {int dummy; } ;
struct command {char* error_string; struct command* next; } ;
struct child_process {int no_stdin; int stdout_to_stderr; int err; int git_cmd; char const** argv; } ;
struct TYPE_2__ {int objects; } ;


 int FUNC_0 (char*) ;
 struct child_process VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 struct oid_array VAR_2 ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int ,char*,int*,int *) ;
 struct option FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct string_list VAR_5 ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct string_list*) ;
 int FUNC_7 (struct shallow_info*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int,int *) ;
 int FUNC_10 (struct command*) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char const*,int ) ;
 int FUNC_14 (struct command*,char const*,struct shallow_info*,struct string_list*) ;
 int FUNC_15 (struct child_process*) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (struct oid_array*) ;
 scalar_t__ VAR_9 ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct packet_reader*,int ,int *,int ,int) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int,char*) ;
 int FUNC_23 (int,char const**,char const*,struct option*,int ,int ) ;
 scalar_t__ FUNC_24 (char const*,int ) ;
 int FUNC_25 (struct shallow_info*,struct oid_array*) ;




 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct command* FUNC_26 (struct packet_reader*,struct oid_array*) ;
 int FUNC_27 (struct packet_reader*,struct string_list*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_28 (struct command*,char const*) ;
 scalar_t__ VAR_16 ;
 int FUNC_29 (struct command*,char*,int,struct string_list*) ;
 int FUNC_30 (struct command*) ;
 char const* VAR_17 ;
 int FUNC_31 () ;
 scalar_t__ VAR_18 ;
 int FUNC_32 (struct child_process*) ;
 int VAR_19 ;
 int FUNC_33 (struct string_list*,int ) ;
 TYPE_1__* VAR_20 ;
 int FUNC_34 (int *) ;
 scalar_t__ VAR_21 ;
 int FUNC_35 (scalar_t__) ;
 scalar_t__ VAR_22 ;
 char* FUNC_36 (struct shallow_info*) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (struct command*,struct shallow_info*,struct oid_array*) ;
 int FUNC_39 (int ,int ,struct option*) ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_40 () ;

int FUNC_41(int VAR_26, const char **VAR_27, const char *VAR_28)
{
 int VAR_29 = 0;
 struct command *VAR_30;
 struct oid_array VAR_31 = VAR_2;
 struct oid_array VAR_32 = VAR_2;
 struct shallow_info VAR_33;
 struct packet_reader VAR_34;

 struct option VAR_35[] = {
  FUNC_4(&VAR_11, FUNC_1("quiet")),
  FUNC_3(0, "stateless-rpc", &VAR_19, ((void*)0)),
  FUNC_3(0, "advertise-refs", &VAR_29, ((void*)0)),
  FUNC_3(0, "reject-thin-pack-for-testing", &VAR_15, ((void*)0)),
  FUNC_2()
 };

 FUNC_21("receive-pack");

 VAR_26 = FUNC_23(VAR_26, VAR_27, VAR_28, VAR_35, VAR_13, 0);

 if (VAR_26 > 1)
  FUNC_39(FUNC_5("Too many arguments."), VAR_13, VAR_35);
 if (VAR_26 == 0)
  FUNC_39(FUNC_5("You must specify a directory."), VAR_13, VAR_35);

 VAR_17 = VAR_27[0];

 FUNC_31();

 if (!FUNC_13(VAR_17, 0))
  FUNC_12("'%s' does not appear to be a git repository", VAR_17);

 FUNC_17(VAR_12, ((void*)0));
 if (VAR_8)
  VAR_10 = FUNC_24(VAR_17, FUNC_34(((void*)0)));

 if (0 <= VAR_21)
  VAR_22 = VAR_21;
 else if (0 <= VAR_14)
  VAR_22 = VAR_14;

 switch (FUNC_11()) {
 case 128:




  break;
 case 129:




  if (VAR_29 || !VAR_19)
   FUNC_22(1, "version 1\n");


 case 130:
  break;
 case 131:
  FUNC_0("unknown protocol version");
 }

 if (VAR_29 || !VAR_19) {
  FUNC_40();
 }
 if (VAR_29)
  return 0;

 FUNC_20(&VAR_34, 0, ((void*)0), 0,
      VAR_3 |
      VAR_4);

 if ((VAR_30 = FUNC_26(&VAR_34, &VAR_31)) != ((void*)0)) {
  const char *VAR_36 = ((void*)0);
  struct string_list VAR_37 = VAR_5;

  if (VAR_24)
   FUNC_27(&VAR_34, &VAR_37);
  if (!FUNC_6(&VAR_37)) {
   struct command *VAR_38;
   for (VAR_38 = VAR_30; VAR_38; VAR_38 = VAR_38->next)
    VAR_38->error_string = "inconsistent push options";
  }

  FUNC_25(&VAR_33, &VAR_31);
  if (!VAR_33.nr_ours && !VAR_33.nr_theirs)
   VAR_18 = 0;
  if (!FUNC_10(VAR_30)) {
   VAR_36 = FUNC_36(&VAR_33);
   FUNC_38(VAR_30, &VAR_33, &VAR_32);
  }
  VAR_23 = VAR_1;
  FUNC_14(VAR_30, VAR_36, &VAR_33,
     &VAR_37);
  if (VAR_9)
   FUNC_35(VAR_9);
  if (VAR_16)
   FUNC_28(VAR_30, VAR_36);
  FUNC_29(VAR_30, "post-receive", 1,
     &VAR_37);
  FUNC_30(VAR_30);
  FUNC_33(&VAR_37, 0);
  if (VAR_6) {
   const char *VAR_39[] = {
    "gc", "--auto", "--quiet", ((void*)0),
   };
   struct child_process VAR_40 = VAR_0;

   VAR_40.no_stdin = 1;
   VAR_40.stdout_to_stderr = 1;
   VAR_40.err = VAR_25 ? -1 : 0;
   VAR_40.git_cmd = 1;
   VAR_40.argv = VAR_39;

   FUNC_8(VAR_20->objects);
   if (!FUNC_32(&VAR_40)) {
    if (VAR_25)
     FUNC_9(VAR_40.err, -1, ((void*)0));
    FUNC_15(&VAR_40);
   }
  }
  if (VAR_7)
   FUNC_37(0);
  FUNC_7(&VAR_33);
 }
 if (VAR_25)
  FUNC_19(1);
 FUNC_18(&VAR_31);
 FUNC_18(&VAR_32);
 FUNC_16((void *)VAR_10);
 return 0;
}
