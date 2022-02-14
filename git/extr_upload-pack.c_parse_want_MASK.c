
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_writer {int dummy; } ;
struct object_id {int dummy; } ;
struct object_array {int dummy; } ;
struct object {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct object*,int *,struct object_array*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 char const* FUNC_3 (struct object_id*) ;
 int FUNC_4 (struct packet_writer*,char*,char const*) ;
 struct object* FUNC_5 (int ,struct object_id*) ;
 scalar_t__ FUNC_6 (char const*,char*,char const**) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct packet_writer *VAR_2, const char *VAR_3,
        struct object_array *VAR_4)
{
 const char *VAR_5;
 if (FUNC_6(VAR_3, "want ", &VAR_5)) {
  struct object_id VAR_6;
  struct object *VAR_7;

  if (FUNC_2(VAR_5, &VAR_6))
   FUNC_1("git upload-pack: protocol error, "
       "expected to get oid, not '%s'", VAR_3);

  VAR_7 = FUNC_5(VAR_1, &VAR_6);
  if (!VAR_7) {
   FUNC_4(VAR_2,
         "upload-pack: not our ref %s",
         FUNC_3(&VAR_6));
   FUNC_1("git upload-pack: not our ref %s",
       FUNC_3(&VAR_6));
  }

  if (!(VAR_7->flags & VAR_0)) {
   VAR_7->flags |= VAR_0;
   FUNC_0(VAR_7, ((void*)0), VAR_4);
  }

  return 1;
 }

 return 0;
}
