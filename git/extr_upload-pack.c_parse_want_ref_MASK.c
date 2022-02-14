
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int util; } ;
struct string_list {int dummy; } ;
struct packet_writer {int dummy; } ;
struct object_id {int dummy; } ;
struct object_array {int dummy; } ;
struct object {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct object*,int *,struct object_array*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct object_id*) ;
 int FUNC_3 (struct packet_writer*,char*,char const*) ;
 struct object* FUNC_4 (struct object_id*,char const*) ;
 scalar_t__ FUNC_5 (char const*,struct object_id*) ;
 scalar_t__ FUNC_6 (char const*,char*,char const**) ;
 struct string_list_item* FUNC_7 (struct string_list*,char const*) ;

__attribute__((used)) static int FUNC_8(struct packet_writer *VAR_1, const char *VAR_2,
     struct string_list *VAR_3,
     struct object_array *VAR_4)
{
 const char *VAR_5;
 if (FUNC_6(VAR_2, "want-ref ", &VAR_5)) {
  struct object_id VAR_6;
  struct string_list_item *VAR_7;
  struct object *VAR_8;

  if (FUNC_5(VAR_5, &VAR_6)) {
   FUNC_3(VAR_1, "unknown ref %s", VAR_5);
   FUNC_1("unknown ref %s", VAR_5);
  }

  VAR_7 = FUNC_7(VAR_3, VAR_5);
  VAR_7->util = FUNC_2(&VAR_6);

  VAR_8 = FUNC_4(&VAR_6, VAR_5);
  if (!(VAR_8->flags & VAR_0)) {
   VAR_8->flags |= VAR_0;
   FUNC_0(VAR_8, ((void*)0), VAR_4);
  }

  return 1;
 }

 return 0;
}
