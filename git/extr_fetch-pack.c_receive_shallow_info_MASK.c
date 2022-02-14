
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shallow_info {int shallow; scalar_t__ nr_theirs; scalar_t__ nr_ours; } ;
struct packet_reader {scalar_t__ line; scalar_t__ status; } ;
struct oid_array {int nr; int * oid; } ;
struct object_id {int dummy; } ;
struct fetch_pack_args {int deepen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int * VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (int ,struct object_id*) ;
 int FUNC_4 (struct oid_array*,struct object_id*) ;
 scalar_t__ FUNC_5 (struct packet_reader*) ;
 int FUNC_6 (int ,struct object_id*) ;
 int FUNC_7 (struct shallow_info*,struct oid_array*) ;
 int FUNC_8 (struct packet_reader*,char*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,int **,int *) ;
 int * FUNC_11 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (scalar_t__,char*,char const**) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (struct object_id*) ;

__attribute__((used)) static void FUNC_14(struct fetch_pack_args *VAR_6,
     struct packet_reader *VAR_7,
     struct oid_array *VAR_8,
     struct shallow_info *VAR_9)
{
 int VAR_10 = 0;

 FUNC_8(VAR_7, "shallow-info", 0);
 while (FUNC_5(VAR_7) == VAR_2) {
  const char *VAR_11;
  struct object_id VAR_12;

  if (FUNC_12(VAR_7->line, "shallow ", &VAR_11)) {
   if (FUNC_2(VAR_11, &VAR_12))
    FUNC_1(FUNC_0("invalid shallow line: %s"), VAR_7->line);
   FUNC_4(VAR_8, &VAR_12);
   continue;
  }
  if (FUNC_12(VAR_7->line, "unshallow ", &VAR_11)) {
   if (FUNC_2(VAR_11, &VAR_12))
    FUNC_1(FUNC_0("invalid unshallow line: %s"), VAR_7->line);
   if (!FUNC_3(VAR_5, &VAR_12))
    FUNC_1(FUNC_0("object not found: %s"), VAR_7->line);

   if (!FUNC_6(VAR_5, &VAR_12))
    FUNC_1(FUNC_0("error in object: %s"), VAR_7->line);
   if (FUNC_13(&VAR_12))
    FUNC_1(FUNC_0("no shallow found: %s"), VAR_7->line);
   VAR_10 = 1;
   continue;
  }
  FUNC_1(FUNC_0("expected shallow/unshallow, got %s"), VAR_7->line);
 }

 if (VAR_7->status != VAR_1 &&
     VAR_7->status != VAR_0)
  FUNC_1(FUNC_0("error processing shallow info: %d"), VAR_7->status);

 if (VAR_6->deepen || VAR_10) {





  int VAR_13;

  for (VAR_13 = 0; VAR_13 < VAR_8->nr; VAR_13++)
   FUNC_9(VAR_5, &VAR_8->oid[VAR_13]);
  FUNC_10(&VAR_4, &VAR_3,
     ((void*)0));
  VAR_6->deepen = 1;
 } else if (VAR_8->nr) {





  FUNC_7(VAR_9, VAR_8);
  if (VAR_9->nr_ours || VAR_9->nr_theirs)
   VAR_3 =
    FUNC_11(VAR_9->shallow);
  else
   VAR_3 = ((void*)0);
 } else {
  VAR_3 = ((void*)0);
 }
}
