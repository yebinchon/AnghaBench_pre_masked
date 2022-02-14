
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {char const* buf; } ;
struct lock_file {int dummy; } ;
struct TYPE_5__ {TYPE_1__* objects; } ;
struct TYPE_4__ {scalar_t__ loaded_alternates; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct lock_file VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct lock_file*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct lock_file*,char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*,char const*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (struct lock_file*,char*,int ) ;
 int FUNC_10 (TYPE_2__*,char const*,char,int *,int ) ;
 int FUNC_11 (struct lock_file*) ;
 scalar_t__ FUNC_12 (struct strbuf*,int *) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (char const*,char const*) ;
 TYPE_2__* VAR_6 ;

void FUNC_15(const char *VAR_7)
{
 struct lock_file VAR_8 = VAR_3;
 char *VAR_9 = FUNC_8("objects/info/alternates");
 FILE *VAR_10, *VAR_11;
 int VAR_12 = 0;

 FUNC_9(&VAR_8, VAR_9, VAR_2);
 VAR_11 = FUNC_4(&VAR_8, "w");
 if (!VAR_11)
  FUNC_2(FUNC_0("unable to fdopen alternates lockfile"));

 VAR_10 = FUNC_5(VAR_9, "r");
 if (VAR_10) {
  struct strbuf VAR_13 = VAR_4;

  while (FUNC_12(&VAR_13, VAR_10) != VAR_1) {
   if (!FUNC_14(VAR_7, VAR_13.buf)) {
    VAR_12 = 1;
    break;
   }
   FUNC_6(VAR_11, "%s\n", VAR_13.buf);
  }

  FUNC_13(&VAR_13);
  FUNC_3(VAR_10);
 }
 else if (VAR_5 != VAR_0)
  FUNC_2(FUNC_0("unable to read alternates file"));

 if (VAR_12) {
  FUNC_11(&VAR_8);
 } else {
  FUNC_6(VAR_11, "%s\n", VAR_7);
  if (FUNC_1(&VAR_8))
   FUNC_2(FUNC_0("unable to move new alternates file into place"));
  if (VAR_6->objects->loaded_alternates)
   FUNC_10(VAR_6, VAR_7,
          '\n', ((void*)0), 0);
 }
 FUNC_7(VAR_9);
}
