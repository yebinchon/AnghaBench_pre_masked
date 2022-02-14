
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {char* url; char* path; char* name; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (int,char const**,char*) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*) ;
 int FUNC_2 (struct object_id*) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ) ;
 struct submodule* FUNC_8 (int ,struct object_id*,char const*) ;
 struct submodule* FUNC_9 (int ,struct object_id*,char const*) ;
 int VAR_0 ;

int FUNC_10(int VAR_1, const char **VAR_2)
{
 const char **VAR_3 = VAR_2;
 int VAR_4 = VAR_1;
 int VAR_5 = 0;
 int VAR_6 = 0;

 VAR_3++;
 VAR_4--;
 while (VAR_3[0] && FUNC_5(VAR_3[0], "--")) {
  if (!FUNC_6(VAR_3[0], "--url"))
   VAR_5 = 1;
  if (!FUNC_6(VAR_3[0], "--name"))
   VAR_6 = 1;
  VAR_3++;
  VAR_4--;
 }

 if (VAR_4 % 2 != 0)
  FUNC_0(VAR_1, VAR_2, "Wrong number of arguments.");

 FUNC_4();

 while (*VAR_3) {
  struct object_id VAR_7;
  const struct submodule *VAR_8;
  const char *VAR_9;
  const char *VAR_10;

  VAR_9 = VAR_3[0];
  VAR_10 = VAR_3[1];

  if (VAR_9[0] == '\0')
   FUNC_2(&VAR_7);
  else if (FUNC_1(VAR_9, &VAR_7) < 0)
   FUNC_0(VAR_1, VAR_2, "Commit not found.");

  if (VAR_6) {
   VAR_8 = FUNC_8(VAR_0,
       &VAR_7, VAR_10);
  } else
   VAR_8 = FUNC_9(VAR_0,
       &VAR_7, VAR_10);
  if (!VAR_8)
   FUNC_0(VAR_1, VAR_2, "Submodule not found.");

  if (VAR_5)
   FUNC_3("Submodule url: '%s' for path '%s'\n",
     VAR_8->url, VAR_8->path);
  else
   FUNC_3("Submodule name: '%s' for path '%s'\n",
     VAR_8->name, VAR_8->path);

  VAR_3 += 2;
 }

 FUNC_7(VAR_0);

 return 0;
}
