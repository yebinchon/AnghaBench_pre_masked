
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct patch_util {struct object_id oid; int i; int patch; } ;
struct diff_options {int file; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (struct diff_options*,int ) ;
 int FUNC_1 (struct object_id*,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 struct commit* FUNC_3 (int ,struct object_id*) ;
 int FUNC_4 (int ,struct commit*,struct strbuf*) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,char,int ) ;
 int FUNC_7 (struct strbuf*,char*,...) ;
 int FUNC_8 (struct strbuf*,char const*) ;
 int FUNC_9 (struct strbuf*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_12(struct diff_options *VAR_7,
          int VAR_8,
          struct strbuf *VAR_9,
          struct strbuf *VAR_10,
          struct patch_util *VAR_11,
          struct patch_util *VAR_12)
{
 struct object_id *VAR_13 = VAR_11 ? &VAR_11->oid : &VAR_12->oid;
 struct commit *VAR_14;
 char VAR_15;
 const char *VAR_16 = FUNC_0(VAR_7, VAR_5);
 const char *VAR_17 = FUNC_0(VAR_7, VAR_4);
 const char *VAR_18 = FUNC_0(VAR_7, VAR_3);
 const char *VAR_19 = FUNC_0(VAR_7, VAR_2);
 const char *VAR_20;

 if (!VAR_10->len)
  FUNC_6(VAR_10, '-',
    FUNC_11(FUNC_1(VAR_13,
         VAR_1)));

 if (!VAR_12) {
  VAR_20 = VAR_17;
  VAR_15 = '<';
 } else if (!VAR_11) {
  VAR_20 = VAR_18;
  VAR_15 = '>';
 } else if (FUNC_10(VAR_11->patch, VAR_12->patch)) {
  VAR_20 = VAR_19;
  VAR_15 = '!';
 } else {
  VAR_20 = VAR_19;
  VAR_15 = '=';
 }

 FUNC_9(VAR_9);
 FUNC_8(VAR_9, VAR_15 == '!' ? VAR_17 : VAR_20);
 if (!VAR_11)
  FUNC_7(VAR_9, "%*s:  %s ", VAR_8, "-", VAR_10->buf);
 else
  FUNC_7(VAR_9, "%*d:  %s ", VAR_8, VAR_11->i + 1,
       FUNC_1(&VAR_11->oid, VAR_1));

 if (VAR_15 == '!')
  FUNC_7(VAR_9, "%s%s", VAR_16, VAR_20);
 FUNC_5(VAR_9, VAR_15);
 if (VAR_15 == '!')
  FUNC_7(VAR_9, "%s%s", VAR_16, VAR_18);

 if (!VAR_12)
  FUNC_7(VAR_9, " %*s:  %s", VAR_8, "-", VAR_10->buf);
 else
  FUNC_7(VAR_9, " %*d:  %s", VAR_8, VAR_12->i + 1,
       FUNC_1(&VAR_12->oid, VAR_1));

 VAR_14 = FUNC_3(VAR_6, VAR_13);
 if (VAR_14) {
  if (VAR_15 == '!')
   FUNC_7(VAR_9, "%s%s", VAR_16, VAR_20);

  FUNC_5(VAR_9, ' ');
  FUNC_4(VAR_0, VAR_14, VAR_9);
 }
 FUNC_7(VAR_9, "%s\n", VAR_16);

 FUNC_2(VAR_9->buf, VAR_9->len, 1, VAR_7->file);
}
