
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int buf; } ;
struct option {int dummy; } ;


 char const* FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int*,char const*) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int ,char*,char const**,char const*,char const*) ;
 struct option FUNC_4 (int ,char*,struct string_list*,char const*,char const*) ;
 struct option FUNC_5 (int*,char*) ;
 struct strbuf VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,char*,char const*,char const*,struct string_list*,int,int,int) ;
 int FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (int ,char const*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (char*,char**) ;
 int FUNC_16 (char*,char*,char*) ;
 char* FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 int FUNC_20 (char const*,struct string_list*) ;
 scalar_t__ FUNC_21 (char*) ;
 int FUNC_22 (struct strbuf*,char*,char*,...) ;
 char* FUNC_23 (struct strbuf*,int *) ;
 int FUNC_24 (struct strbuf*) ;
 int FUNC_25 (struct strbuf*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char const* const*,struct option*) ;
 char* FUNC_28 (char*) ;

__attribute__((used)) static int FUNC_29(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 const char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 int VAR_9 = 0;
 char *VAR_10, *VAR_11 = ((void*)0), *VAR_12;
 struct strbuf VAR_13 = VAR_0;
 struct string_list VAR_14 = VAR_1;
 int VAR_15 = 0;
 char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);

 struct option VAR_18[] = {
  FUNC_3(0, "prefix", &VAR_4,
      FUNC_0("path"),
      FUNC_0("alternative anchor for relative paths")),
  FUNC_3(0, "path", &VAR_11,
      FUNC_0("path"),
      FUNC_0("where the new submodule will be cloned to")),
  FUNC_3(0, "name", &VAR_5,
      FUNC_0("string"),
      FUNC_0("name of the new submodule")),
  FUNC_3(0, "url", &VAR_6,
      FUNC_0("string"),
      FUNC_0("url where to clone the submodule from")),
  FUNC_4(0, "reference", &VAR_14,
      FUNC_0("repo"),
      FUNC_0("reference repository")),
  FUNC_1(0, "dissociate", &VAR_15,
      FUNC_0("use --reference only while cloning")),
  FUNC_3(0, "depth", &VAR_7,
      FUNC_0("string"),
      FUNC_0("depth for shallow clones")),
  FUNC_5(&VAR_8, "Suppress output for cloning a submodule"),
  FUNC_1(0, "progress", &VAR_9,
      FUNC_0("force cloning progress")),
  FUNC_2()
 };

 const char *const VAR_19[] = {
  FUNC_0("git submodule--helper clone [--prefix=<path>] [--quiet] "
     "[--reference <repository>] [--name <name>] [--depth <depth>] "
     "--url <url> --path <path>"),
  ((void*)0)
 };

 VAR_2 = FUNC_19(VAR_2, VAR_3, VAR_4, VAR_18,
        VAR_19, 0);

 if (VAR_2 || !VAR_6 || !VAR_11 || !*VAR_11)
  FUNC_27(VAR_19,
       VAR_18);

 FUNC_22(&VAR_13, "%s/modules/%s", FUNC_13(), VAR_5);
 VAR_12 = FUNC_7(VAR_13.buf);
 FUNC_25(&VAR_13);

 if (!FUNC_18(VAR_11)) {
  FUNC_22(&VAR_13, "%s/%s", FUNC_14(), VAR_11);
  VAR_11 = FUNC_23(&VAR_13, ((void*)0));
 } else
  VAR_11 = FUNC_28(VAR_11);

 if (!FUNC_11(VAR_12)) {
  if (FUNC_21(VAR_12) < 0)
   FUNC_10(FUNC_6("could not create directory '%s'"), VAR_12);

  FUNC_20(VAR_5, &VAR_14);

  if (FUNC_8(VAR_11, VAR_12, VAR_6, VAR_7, &VAR_14, VAR_15,
        VAR_8, VAR_9))
   FUNC_10(FUNC_6("clone of '%s' into submodule path '%s' failed"),
       VAR_6, VAR_11);
 } else {
  if (FUNC_21(VAR_11) < 0)
   FUNC_10(FUNC_6("could not create directory '%s'"), VAR_11);
  FUNC_22(&VAR_13, "%s/index", VAR_12);
  FUNC_26(VAR_13.buf);
  FUNC_25(&VAR_13);
 }

 FUNC_9(VAR_11, VAR_12, 0);

 VAR_10 = FUNC_17(VAR_11, "config");
 if (!VAR_10)
  FUNC_10(FUNC_6("could not get submodule directory for '%s'"), VAR_11);


 FUNC_15("submodule.alternateLocation", &VAR_16);
 if (VAR_16)
  FUNC_16(VAR_10, "submodule.alternateLocation",
        VAR_16);
 FUNC_15("submodule.alternateErrorStrategy", &VAR_17);
 if (VAR_17)
  FUNC_16(VAR_10, "submodule.alternateErrorStrategy",
        VAR_17);

 FUNC_12(VAR_16);
 FUNC_12(VAR_17);

 FUNC_24(&VAR_13);
 FUNC_12(VAR_12);
 FUNC_12(VAR_11);
 FUNC_12(VAR_10);
 return 0;
}
