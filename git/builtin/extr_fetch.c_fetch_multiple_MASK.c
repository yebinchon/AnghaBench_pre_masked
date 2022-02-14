
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct parallel_fetch_state {int result; int member_3; int member_2; struct string_list* member_1; int member_0; } ;
struct argv_array {int argv; } ;
struct TYPE_2__ {char* string; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*) ;
 int VAR_2 ;
 int FUNC_2 (struct argv_array*) ;
 int FUNC_3 (struct argv_array*) ;
 int FUNC_4 (struct argv_array*,char const*) ;
 int FUNC_5 (struct argv_array*,char*,char*,char*,int *) ;
 int VAR_3 ;
 int FUNC_6 (char*,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int *,int *,int *,struct parallel_fetch_state*,char*,char*) ;
 int FUNC_10 () ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_11(struct string_list *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11 = 0;
 struct argv_array VAR_12 = VAR_0;

 if (!VAR_2 && !VAR_3) {
  int VAR_13 = FUNC_10();
  if (VAR_13)
   return VAR_13;
 }

 FUNC_5(&VAR_12, "fetch", "--append", "--no-auto-gc", ((void*)0));
 FUNC_1(&VAR_12);

 if (VAR_9 != 1 && VAR_8->nr != 1) {
  struct parallel_fetch_state VAR_14 = { VAR_12.argv, VAR_8, 0, 0 };

  FUNC_4(&VAR_12, "--end-of-options");
  VAR_11 = FUNC_9(VAR_9,
          &VAR_6,
          &VAR_4,
          &VAR_5,
          &VAR_14,
          "fetch", "parallel/fetch");

  if (!VAR_11)
   VAR_11 = VAR_14.result;
 } else
  for (VAR_10 = 0; VAR_10 < VAR_8->nr; VAR_10++) {
   const char *VAR_15 = VAR_8->items[VAR_10].string;
   FUNC_4(&VAR_12, VAR_15);
   if (VAR_7 >= 0)
    FUNC_7(FUNC_0("Fetching %s\n"), VAR_15);
   if (FUNC_8(VAR_12.argv, VAR_1)) {
    FUNC_6(FUNC_0("Could not fetch %s"), VAR_15);
    VAR_11 = 1;
   }
   FUNC_3(&VAR_12);
  }

 FUNC_2(&VAR_12);
 return !!VAR_11;
}
