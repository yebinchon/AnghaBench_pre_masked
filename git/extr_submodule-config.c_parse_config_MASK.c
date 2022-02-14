
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct submodule {int recommend_shallow; void* branch; int name; TYPE_1__ update_strategy; void* url; void* ignore; int fetch_recurse; void* path; } ;
struct strbuf {char const* buf; } ;
struct parse_config_parameter {int treeish_name; int overwrite; int gitmodules_oid; int cache; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct submodule*) ;
 int FUNC_2 (int ,struct submodule*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char const*) ;
 struct submodule* FUNC_9 (int ,int ,char const*) ;
 int FUNC_10 (char const*,struct strbuf*,struct strbuf*) ;
 int FUNC_11 (char const*,char const*,int) ;
 scalar_t__ FUNC_12 (char const*,TYPE_1__*) ;
 int FUNC_13 (struct strbuf*) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (char const*,char const*) ;
 int FUNC_16 (int ,int ,char*) ;
 int FUNC_17 (char*,char const*,char const*) ;
 void* FUNC_18 (char const*) ;

__attribute__((used)) static int FUNC_19(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 struct parse_config_parameter *VAR_6 = VAR_5;
 struct submodule *VAR_7;
 struct strbuf VAR_8 = VAR_2, VAR_9 = VAR_2;
 int VAR_10 = 0;


 if (!FUNC_10(VAR_3, &VAR_8, &VAR_9))
  return 0;

 VAR_7 = FUNC_9(VAR_6->cache,
          VAR_6->gitmodules_oid,
          VAR_8.buf);

 if (!FUNC_14(VAR_9.buf, "path")) {
  if (!VAR_4)
   VAR_10 = FUNC_3(VAR_3);
  else if (FUNC_8(VAR_4))
   FUNC_15(VAR_3, VAR_4);
  else if (!VAR_6->overwrite && VAR_7->path)
   FUNC_16(VAR_6->treeish_name, VAR_7->name,
     "path");
  else {
   if (VAR_7->path)
    FUNC_2(VAR_6->cache, VAR_7);
   FUNC_5((void *) VAR_7->path);
   VAR_7->path = FUNC_18(VAR_4);
   FUNC_1(VAR_6->cache, VAR_7);
  }
 } else if (!FUNC_14(VAR_9.buf, "fetchrecursesubmodules")) {

  int VAR_11 = FUNC_7(VAR_6->gitmodules_oid);
  if (!VAR_6->overwrite &&
      VAR_7->fetch_recurse != VAR_0)
   FUNC_16(VAR_6->treeish_name, VAR_7->name,
     "fetchrecursesubmodules");
  else
   VAR_7->fetch_recurse = FUNC_11(
        VAR_3, VAR_4,
        VAR_11);
 } else if (!FUNC_14(VAR_9.buf, "ignore")) {
  if (!VAR_4)
   VAR_10 = FUNC_3(VAR_3);
  else if (!VAR_6->overwrite && VAR_7->ignore)
   FUNC_16(VAR_6->treeish_name, VAR_7->name,
     "ignore");
  else if (FUNC_14(VAR_4, "untracked") &&
    FUNC_14(VAR_4, "dirty") &&
    FUNC_14(VAR_4, "all") &&
    FUNC_14(VAR_4, "none"))
   FUNC_17("Invalid parameter '%s' for config option "
     "'submodule.%s.ignore'", VAR_4, VAR_8.buf);
  else {
   FUNC_5((void *) VAR_7->ignore);
   VAR_7->ignore = FUNC_18(VAR_4);
  }
 } else if (!FUNC_14(VAR_9.buf, "url")) {
  if (!VAR_4) {
   VAR_10 = FUNC_3(VAR_3);
  } else if (FUNC_8(VAR_4)) {
   FUNC_15(VAR_3, VAR_4);
  } else if (!VAR_6->overwrite && VAR_7->url) {
   FUNC_16(VAR_6->treeish_name, VAR_7->name,
     "url");
  } else {
   FUNC_5((void *) VAR_7->url);
   VAR_7->url = FUNC_18(VAR_4);
  }
 } else if (!FUNC_14(VAR_9.buf, "update")) {
  if (!VAR_4)
   VAR_10 = FUNC_3(VAR_3);
  else if (!VAR_6->overwrite &&
    VAR_7->update_strategy.type != VAR_1)
   FUNC_16(VAR_6->treeish_name, VAR_7->name,
          "update");
  else if (FUNC_12(VAR_4,
    &VAR_7->update_strategy) < 0)
    FUNC_4(FUNC_0("invalid value for %s"), VAR_3);
 } else if (!FUNC_14(VAR_9.buf, "shallow")) {
  if (!VAR_6->overwrite && VAR_7->recommend_shallow != -1)
   FUNC_16(VAR_6->treeish_name, VAR_7->name,
          "shallow");
  else
   VAR_7->recommend_shallow =
    FUNC_6(VAR_3, VAR_4);
 } else if (!FUNC_14(VAR_9.buf, "branch")) {
  if (!VAR_6->overwrite && VAR_7->branch)
   FUNC_16(VAR_6->treeish_name, VAR_7->name,
          "branch");
  else {
   FUNC_5((void *)VAR_7->branch);
   VAR_7->branch = FUNC_18(VAR_4);
  }
 }

 FUNC_13(&VAR_8);
 FUNC_13(&VAR_9);

 return VAR_10;
}
