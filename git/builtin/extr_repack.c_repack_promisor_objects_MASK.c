
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct strbuf {scalar_t__ len; int buf; } ;
struct pack_objects_args {int dummy; } ;
struct child_process {int in; int out; } ;
struct TYPE_2__ {scalar_t__ hexsz; } ;
typedef int FILE ;


 struct child_process VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct child_process*) ;
 int FUNC_6 (int ,struct child_process*,int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (char*,int,int) ;
 int VAR_7 ;
 int FUNC_10 (struct child_process*,struct pack_objects_args const*) ;
 scalar_t__ FUNC_11 (struct strbuf*,int *) ;
 int FUNC_12 (struct string_list*,int ) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int * FUNC_13 (int ,char*) ;

__attribute__((used)) static void FUNC_14(const struct pack_objects_args *VAR_10,
        struct string_list *VAR_11)
{
 struct child_process VAR_12 = VAR_0;
 FILE *VAR_13;
 struct strbuf VAR_14 = VAR_6;

 FUNC_10(&VAR_12, VAR_10);
 VAR_12.in = -1;
 FUNC_6(VAR_9, &VAR_12,
          VAR_2);

 if (VAR_12.in == -1)

  return;

 FUNC_1(VAR_12.in);

 VAR_13 = FUNC_13(VAR_12.out, "r");
 while (FUNC_11(&VAR_14, VAR_13) != VAR_1) {
  char *VAR_15;
  int VAR_16;
  if (VAR_14.len != VAR_8->hexsz)
   FUNC_2(FUNC_0("repack: Expecting full hex object ID lines only from pack-objects."));
  FUNC_12(VAR_11, VAR_14.buf);
  VAR_15 = FUNC_8("%s-%s.promisor", VAR_7,
       VAR_14.buf);
  VAR_16 = FUNC_9(VAR_15, VAR_3|VAR_4|VAR_5, 0600);
  if (VAR_16 < 0)
   FUNC_3(FUNC_0("unable to create '%s'"), VAR_15);
  FUNC_1(VAR_16);
  FUNC_7(VAR_15);
 }
 FUNC_4(VAR_13);
 if (FUNC_5(&VAR_12))
  FUNC_2(FUNC_0("could not finish pack-objects to repack promisor objects"));
}
