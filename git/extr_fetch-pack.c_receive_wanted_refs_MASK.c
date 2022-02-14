
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int old_oid; } ;
struct packet_reader {scalar_t__ line; scalar_t__ status; } ;
struct object_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 struct ref** FUNC_1 (char const*,struct ref**,int,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,struct object_id*) ;
 scalar_t__ FUNC_4 (struct packet_reader*) ;
 scalar_t__ FUNC_5 (scalar_t__,struct object_id*,char const**) ;
 int FUNC_6 (struct packet_reader*,char*,int ) ;

__attribute__((used)) static void FUNC_7(struct packet_reader *VAR_3,
    struct ref **VAR_4, int VAR_5)
{
 FUNC_6(VAR_3, "wanted-refs", 0);
 while (FUNC_4(VAR_3) == VAR_1) {
  struct object_id VAR_6;
  const char *VAR_7;
  struct ref **VAR_8;

  if (FUNC_5(VAR_3->line, &VAR_6, &VAR_7) || *VAR_7++ != ' ')
   FUNC_2(FUNC_0("expected wanted-ref, got '%s'"), VAR_3->line);

  VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5, sizeof(*VAR_4),
    VAR_2);
  if (!VAR_8)
   FUNC_2(FUNC_0("unexpected wanted-ref: '%s'"), VAR_3->line);
  FUNC_3(&(*VAR_8)->old_oid, &VAR_6);
 }

 if (VAR_3->status != VAR_0)
  FUNC_2(FUNC_0("error processing wanted refs: %d"), VAR_3->status);
}
