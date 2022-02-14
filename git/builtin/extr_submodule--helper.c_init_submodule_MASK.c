
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct submodule {char* name; char* url; TYPE_1__ update_strategy; } ;
struct strbuf {int buf; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct strbuf VAR_3 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (int ,char**) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int VAR_5 ;
 int FUNC_11 (struct strbuf*,char*,char*) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (struct strbuf*) ;
 struct submodule* FUNC_14 (int ,int *,char const*) ;
 char* FUNC_15 (TYPE_1__*) ;
 int VAR_6 ;
 char* FUNC_16 (char*) ;

__attribute__((used)) static void FUNC_17(const char *VAR_7, const char *VAR_8,
      unsigned int VAR_9)
{
 const struct submodule *VAR_10;
 struct strbuf VAR_11 = VAR_3;
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14;

 VAR_14 = FUNC_5(VAR_7, VAR_8);

 VAR_10 = FUNC_14(VAR_6, &VAR_4, VAR_7);

 if (!VAR_10)
  FUNC_2(FUNC_0("No url found for submodule path '%s' in .gitmodules"),
   VAR_14);







 if (!FUNC_8(VAR_6, VAR_7)) {
  FUNC_11(&VAR_11, "submodule.%s.active", VAR_10->name);
  FUNC_7(VAR_11.buf, "true");
  FUNC_13(&VAR_11);
 }






 FUNC_11(&VAR_11, "submodule.%s.url", VAR_10->name);
 if (FUNC_6(VAR_11.buf, &VAR_13)) {
  if (!VAR_10->url)
   FUNC_2(FUNC_0("No url found for submodule path '%s' in .gitmodules"),
    VAR_14);

  VAR_13 = FUNC_16(VAR_10->url);


  if (FUNC_9(VAR_13) ||
      FUNC_10(VAR_13)) {
   char *VAR_15 = VAR_13;
   VAR_13 = FUNC_1(VAR_15);
   FUNC_4(VAR_15);
  }

  if (FUNC_7(VAR_11.buf, VAR_13))
   FUNC_2(FUNC_0("Failed to register url for submodule path '%s'"),
       VAR_14);
  if (!(VAR_9 & VAR_0))
   FUNC_3(VAR_5,
    FUNC_0("Submodule '%s' (%s) registered for path '%s'\n"),
    VAR_10->name, VAR_13, VAR_14);
 }
 FUNC_13(&VAR_11);


 FUNC_11(&VAR_11, "submodule.%s.update", VAR_10->name);
 if (FUNC_6(VAR_11.buf, &VAR_12) &&
     VAR_10->update_strategy.type != VAR_2) {
  if (VAR_10->update_strategy.type == VAR_1) {
   FUNC_3(VAR_5, FUNC_0("warning: command update mode suggested for submodule '%s'\n"),
    VAR_10->name);
   VAR_12 = FUNC_16("none");
  } else
   VAR_12 = FUNC_16(FUNC_15(&VAR_10->update_strategy));

  if (FUNC_7(VAR_11.buf, VAR_12))
   FUNC_2(FUNC_0("Failed to register update mode for submodule path '%s'"), VAR_14);
 }
 FUNC_12(&VAR_11);
 FUNC_4(VAR_14);
 FUNC_4(VAR_13);
 FUNC_4(VAR_12);
}
