
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct create_tag_options {scalar_t__ cleanup_mode; int sign; scalar_t__ message_given; scalar_t__ use_editor; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct strbuf VAR_8 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (struct strbuf*,int ,struct object_id*) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (struct object_id*) ;
 scalar_t__ FUNC_12 (char*,struct strbuf*,int *) ;
 char* VAR_11 ;
 int FUNC_13 (int ,struct object_id const*,int *) ;
 int FUNC_14 (struct object_id const*) ;
 int FUNC_15 (char*,int,int) ;
 int VAR_12 ;
 int FUNC_16 (struct strbuf*,char) ;
 int FUNC_17 (struct strbuf*,char*,int ,int ,char const*,int ) ;
 int FUNC_18 (struct strbuf*,char*,char const*,int ) ;
 int FUNC_19 (struct strbuf*,int ,int ,int ) ;
 int FUNC_20 (struct strbuf*) ;
 int FUNC_21 (struct strbuf*) ;
 int FUNC_22 (struct strbuf*,int) ;
 char* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int FUNC_23 (int) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int,int ,int ) ;
 int FUNC_26 (int,struct object_id*) ;

__attribute__((used)) static void FUNC_27(const struct object_id *VAR_16, const char *VAR_17,
         const char *VAR_18,
         struct strbuf *VAR_19, struct create_tag_options *VAR_20,
         struct object_id *VAR_21, struct object_id *VAR_22)
{
 enum object_type VAR_23;
 struct strbuf VAR_24 = VAR_8;
 char *VAR_25 = ((void*)0);

 VAR_23 = FUNC_13(VAR_15, VAR_16, ((void*)0));
 if (VAR_23 <= VAR_3)
  FUNC_4(FUNC_0("bad object type."));

 if (VAR_23 == VAR_4 && VAR_9)
  FUNC_1(FUNC_0(VAR_11), VAR_18, VAR_17);

 FUNC_17(&VAR_24,
      "object %s\n"
      "type %s\n"
      "tag %s\n"
      "tagger %s\n\n",
      FUNC_14(VAR_16),
      FUNC_23(VAR_23),
      VAR_18,
      FUNC_9(VAR_2));

 if (!VAR_20->message_given || VAR_20->use_editor) {
  int VAR_26;


  VAR_25 = FUNC_10("TAG_EDITMSG");
  VAR_26 = FUNC_15(VAR_25, VAR_5 | VAR_6 | VAR_7, 0600);
  if (VAR_26 < 0)
   FUNC_5(FUNC_0("could not create file '%s'"), VAR_25);

  if (VAR_20->message_given) {
   FUNC_25(VAR_26, VAR_19->buf, VAR_19->len);
   FUNC_21(VAR_19);
  } else if (!FUNC_11(VAR_21)) {
   FUNC_26(VAR_26, VAR_21);
  } else {
   struct strbuf VAR_27 = VAR_8;
   FUNC_16(&VAR_27, '\n');
   if (VAR_20->cleanup_mode == VAR_0)
    FUNC_18(&VAR_27, FUNC_0(VAR_13), VAR_18, VAR_10);
   else
    FUNC_18(&VAR_27, FUNC_0(VAR_14), VAR_18, VAR_10);
   FUNC_25(VAR_26, VAR_27.buf, VAR_27.len);
   FUNC_20(&VAR_27);
  }
  FUNC_3(VAR_26);

  if (FUNC_12(VAR_25, VAR_19, ((void*)0))) {
   FUNC_7(VAR_12,
   "%s", FUNC_0("Please supply the message using either -m or -F option.\n"));
   FUNC_6(1);
  }
 }

 if (VAR_20->cleanup_mode != VAR_1)
  FUNC_22(VAR_19, VAR_20->cleanup_mode == VAR_0);

 if (!VAR_20->message_given && !VAR_19->len)
  FUNC_4(FUNC_0("no tag message?"));

 FUNC_19(VAR_19, 0, VAR_24.buf, VAR_24.len);
 FUNC_20(&VAR_24);

 if (FUNC_2(VAR_19, VAR_20->sign, VAR_22) < 0) {
  if (VAR_25)
   FUNC_7(VAR_12, FUNC_0("The tag message has been left in %s\n"),
    VAR_25);
  FUNC_6(128);
 }
 if (VAR_25) {
  FUNC_24(VAR_25);
  FUNC_8(VAR_25);
 }
}
