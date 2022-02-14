
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int buf; } ;
struct tr2tls_thread_ctx {scalar_t__ nr_open_regions; TYPE_1__ thread_name; } ;
struct tr2_tbuf {char* buf; } ;
struct strbuf {int len; int * buf; } ;
struct repository {int trace2_repo_id; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tr2tls_thread_ctx*) ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 int FUNC_1 (struct strbuf*,int *,size_t) ;
 int FUNC_2 (struct strbuf*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*,...) ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct tr2_tbuf*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_10(const char *VAR_8,
        struct tr2tls_thread_ctx *VAR_9, const char *VAR_10,
        int VAR_11, const struct repository *VAR_12,
        uint64_t *VAR_13,
        uint64_t *VAR_14,
        const char *VAR_15, struct strbuf *VAR_16)
{
 int VAR_17;

 FUNC_7(VAR_16, 0);

 if (!VAR_7) {
  struct tr2_tbuf VAR_18;
  size_t VAR_19;

  FUNC_9(&VAR_18);
  FUNC_5(VAR_16, VAR_18.buf);
  FUNC_3(VAR_16, ' ');

  VAR_19 = VAR_16->len + VAR_2;

  if (VAR_10 && *VAR_10) {
   struct strbuf VAR_20 = VAR_0;

   FUNC_4(&VAR_20, "%s:%d", VAR_10, VAR_11);

   if (VAR_20.len <= VAR_2)
    FUNC_2(VAR_16, &VAR_20);
   else {
    size_t VAR_21 = VAR_2 - 3;
    FUNC_5(VAR_16, "...");
    FUNC_1(VAR_16,
        &VAR_20.buf[VAR_20.len - VAR_21],
        VAR_21);
   }

   FUNC_6(&VAR_20);
  }

  while (VAR_16->len < VAR_19)
   FUNC_3(VAR_16, ' ');

  FUNC_5(VAR_16, " | ");
 }

 FUNC_4(VAR_16, "d%d | ", FUNC_8());
 FUNC_4(VAR_16, "%-*s | %-*s | ", VAR_5,
      VAR_9->thread_name.buf, VAR_3,
      VAR_8);

 VAR_17 = VAR_16->len + VAR_4;
 if (VAR_12)
  FUNC_4(VAR_16, "r%d ", VAR_12->trace2_repo_id);
 while (VAR_16->len < VAR_17)
  FUNC_3(VAR_16, ' ');
 FUNC_5(VAR_16, " | ");

 if (VAR_13)
  FUNC_4(VAR_16, "%9.6f | ",
       ((double)(*VAR_13)) / 1000000.0);
 else
  FUNC_4(VAR_16, "%9s | ", " ");

 if (VAR_14)
  FUNC_4(VAR_16, "%9.6f | ",
       ((double)(*VAR_14)) / 1000000.0);
 else
  FUNC_4(VAR_16, "%9s | ", " ");

 FUNC_4(VAR_16, "%-*.*s | ", VAR_1,
      VAR_1, (VAR_15 ? VAR_15 : ""));

 if (VAR_9->nr_open_regions > 0) {
  int VAR_22 = FUNC_0(VAR_9);
  while (VAR_22 > VAR_6.len) {
   FUNC_2(VAR_16, &VAR_6);
   VAR_22 -= VAR_6.len;
  }
  FUNC_4(VAR_16, "%.*s", VAR_22, VAR_6.buf);
 }
}
