
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct wt_status {int fp; scalar_t__ display_comment_prefix; int ahead_behind_flags; int branch; int is_initial; } ;
struct strbuf {char* buf; } ;
struct branch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 struct branch* FUNC_2 (char const*) ;
 int FUNC_3 (int ,struct wt_status*) ;
 int FUNC_4 (int ,int ,char*,...) ;
 char VAR_5 ;
 int FUNC_5 (struct branch*,struct strbuf*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,char const**) ;
 int FUNC_9 (struct strbuf*,int ,int) ;
 int FUNC_10 (struct strbuf*) ;
 char* FUNC_11 (char const*,char) ;

__attribute__((used)) static void FUNC_12(struct wt_status *VAR_6)
{
 struct strbuf VAR_7 = VAR_2;
 const char *VAR_8, *VAR_9, *VAR_10;
 struct branch *VAR_11;
 char VAR_12[3];
 int VAR_13;
 uint64_t VAR_14 = 0;

 FUNC_1(VAR_6->branch && !VAR_6->is_initial);
 if (!FUNC_8(VAR_6->branch, "refs/heads/", &VAR_10))
  return;
 VAR_11 = FUNC_2(VAR_10);

 VAR_14 = FUNC_7();

 if (!FUNC_5(VAR_11, &VAR_7, VAR_6->ahead_behind_flags))
  return;

 if (VAR_4 &&
     VAR_6->ahead_behind_flags == VAR_1) {
  uint64_t VAR_15 = (FUNC_7() - VAR_14) / 1000000;
  if (VAR_15 > VAR_0) {
   FUNC_9(&VAR_7, FUNC_0("\n"
        "It took %.2f seconds to compute the branch ahead/behind values.\n"
        "You can use '--no-ahead-behind' to avoid this.\n"),
        VAR_15 / 1000.0);
  }
 }

 VAR_13 = 0;
 if (VAR_6->display_comment_prefix) {
  VAR_12[VAR_13++] = VAR_5;
  VAR_12[VAR_13++] = ' ';
 }
 VAR_12[VAR_13] = '\0';

 for (VAR_8 = VAR_7.buf; (VAR_9 = FUNC_11(VAR_8, '\n')) != ((void*)0); VAR_8 = VAR_9 + 1)
  FUNC_4(VAR_6->fp, FUNC_3(VAR_3, VAR_6),
     "%s%.*s", VAR_12,
     (int)(VAR_9 - VAR_8), VAR_8);
 if (VAR_6->display_comment_prefix)
  FUNC_4(VAR_6->fp, FUNC_3(VAR_3, VAR_6), "%c",
     VAR_5);
 else
  FUNC_6("\n", VAR_6->fp);
 FUNC_10(&VAR_7);
}
