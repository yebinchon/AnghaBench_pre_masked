
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hts_data {scalar_t__ http_ver; int query_flags; } ;
struct connection {int Out; } ;


 int VAR_0 ;
 struct hts_data* FUNC_0 (struct connection*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 char* FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 char* VAR_3 ;
 char* FUNC_4 (int*) ;
 int FUNC_5 (char*,int,char*,int,char const*,char*,char const*,char*,char const*) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (int *,char*,int) ;

int FUNC_8 (struct connection *VAR_4, int VAR_5, int VAR_6, int VAR_7, const char *VAR_8, const char *VAR_9) {
  struct hts_data *VAR_10 = FUNC_0(VAR_4);

  if (VAR_10->http_ver >= VAR_1) {

    static char VAR_11[2048], VAR_12[32];
    char *VAR_13 = VAR_11;
    const char *VAR_14 = FUNC_4 (&VAR_5);
    if (VAR_6) {
      FUNC_3 (VAR_12, VAR_6);
    }
    VAR_13 += FUNC_5 (VAR_13, 2048 - 64, VAR_3, VAR_5, VAR_14,
      VAR_6 ? VAR_12 : FUNC_2(), VAR_9 ? VAR_9 : "text/html", (VAR_10->query_flags & VAR_2) ? "keep-alive" : "close", VAR_8 ? VAR_8 : "");
    FUNC_1 (VAR_13 < VAR_11 + 2048 - 64);
    if (VAR_7 >= 0) {
      VAR_13 += FUNC_6 (VAR_13, "Content-Length: %d\r\n", VAR_7);
    }

    VAR_13 += FUNC_6 (VAR_13, "\r\n");

    return FUNC_7 (&VAR_4->Out, VAR_11, VAR_13 - VAR_11);
  }

  return 0;
}
