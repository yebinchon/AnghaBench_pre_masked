
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct option {char* member_2; int* member_3; int member_6; int member_8; int * member_7; int member_5; int member_4; int member_1; int member_0; } ;
struct fmt_merge_msg_opts {int add_title; int credit_people; int shortlog_len; } ;
typedef int opts ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (float,char*,char const**,int ) ;
 struct option FUNC_3 (char,char*,char const**,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct strbuf VAR_5 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct strbuf*,struct strbuf*,struct fmt_merge_msg_opts*) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct fmt_merge_msg_opts*,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;
 int * VAR_9 ;
 int FUNC_11 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_12 (struct strbuf*,int ,int ) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (int ,struct option*) ;
 int FUNC_15 (int ,int ,int ) ;

int FUNC_16(int VAR_10, const char **VAR_11, const char *VAR_12)
{
 const char *VAR_13 = ((void*)0);
 const char *VAR_14 = ((void*)0);
 int VAR_15 = -1;
 struct option VAR_16[] = {
  { VAR_1, 0, "log", VAR_15, FUNC_0("n"),
    FUNC_0("populate log with at most <n> entries from shortlog"),
    VAR_3, ((void*)0), VAR_0 },
  { VAR_1, 0, "summary", VAR_15, FUNC_0("n"),
    FUNC_0("alias for --log (deprecated)"),
    VAR_3 | VAR_2, ((void*)0),
    VAR_0 },
  FUNC_3('m', "message", &VAR_14, FUNC_0("text"),
   FUNC_0("use <text> as start of message")),
  FUNC_2('F', "file", &VAR_13, FUNC_0("file to read from")),
  FUNC_1()
 };

 FILE *VAR_17 = VAR_9;
 struct strbuf VAR_18 = VAR_5, VAR_19 = VAR_5;
 int VAR_20;
 struct fmt_merge_msg_opts VAR_21;

 FUNC_8(VAR_6, ((void*)0));
 VAR_10 = FUNC_10(VAR_10, VAR_11, VAR_12, VAR_16, VAR_7,
        0);
 if (VAR_10 > 0)
  FUNC_14(VAR_7, VAR_16);
 if (VAR_15 < 0)
  VAR_15 = (VAR_8 > 0) ? VAR_8 : 0;

 if (VAR_13 && FUNC_13(VAR_13, "-")) {
  VAR_17 = FUNC_7(VAR_13, "r");
  if (!VAR_17)
   FUNC_4("cannot open '%s'", VAR_13);
 }

 if (FUNC_12(&VAR_18, FUNC_5(VAR_17), 0) < 0)
  FUNC_4("could not read input file");

 if (VAR_14)
  FUNC_11(&VAR_19, VAR_14);

 FUNC_9(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.add_title = !VAR_14;
 VAR_21.credit_people = 1;
 VAR_21.shortlog_len = VAR_15;

 VAR_20 = FUNC_6(&VAR_18, &VAR_19, &VAR_21);
 if (VAR_20)
  return VAR_20;
 FUNC_15(VAR_4, VAR_19.buf, VAR_19.len);
 return 0;
}
