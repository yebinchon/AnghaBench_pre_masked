
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int methods ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static const char *
FUNC_2 (const char *VAR_0)
{
  const char *VAR_1[] = {
    "OPTIONS", "GET", "HEAD", "POST", "PUT",
    "DELETE", "TRACE", "CONNECT", "PATCH", "options",
    "get", "head", "post", "put", "delete",
    "trace", "connect", "patch",

    "PROPFIND", "PROPPATCH", "MKCOL", "COPY", "MOVE",
    "LOCK", "UNLOCK", "VERSION-CONTROL", "REPORT", "CHECKOUT",
    "CHECKIN", "UNCHECKOUT", "MKWORKSPACE", "UPDATE", "LABEL",
    "MERGE", "BASELINE-CONTROL", "MKACTIVITY", "ORDERPATCH", "propfind",
    "propwatch", "mkcol", "copy", "move", "lock",
    "unlock", "version-control", "report", "checkout", "checkin",
    "uncheckout", "mkworkspace", "update", "label", "merge",
    "baseline-control", "mkactivity", "orderpatch"
  };

  const int VAR_2 = sizeof (VAR_1) / sizeof (*VAR_1);

  int VAR_3;

  static int VAR_4[sizeof (VAR_1) / sizeof (*VAR_1)] = { -1 };

  if (VAR_4[0] == -1) {
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
      VAR_4[VAR_3] = FUNC_0 (VAR_1[VAR_3]);
    }
  }

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (FUNC_1 (VAR_0, VAR_1[VAR_3], VAR_4[VAR_3]) == 0) {
      return VAR_1[VAR_3];
    }
  }
  return ((void*)0);
}
