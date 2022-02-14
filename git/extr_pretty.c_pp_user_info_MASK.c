
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char const* buf; size_t len; } ;
struct pretty_print_context {int fmt; int date_mode; TYPE_1__* from_ident; int in_body_headers; scalar_t__ mailmap; } ;
struct ident_split {char* mail_begin; char* mail_end; char* name_begin; char* name_end; } ;
struct TYPE_2__ {char* mail_begin; char const* mail_end; char* name_begin; char const* name_end; } ;






 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_1 (struct strbuf*,char const*,size_t,char const*,int ) ;
 int FUNC_2 (struct strbuf*,char const*,size_t) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct ident_split*) ;
 size_t FUNC_5 (struct strbuf*) ;
 int FUNC_6 (scalar_t__,char const**,size_t*,char const**,size_t*) ;
 scalar_t__ FUNC_7 (char const*,size_t) ;
 scalar_t__ FUNC_8 (char const*,size_t) ;
 int FUNC_9 (struct ident_split*,int *) ;
 scalar_t__ FUNC_10 (struct ident_split*,char const*,int) ;
 int FUNC_11 (struct strbuf*,char const*,size_t) ;
 int FUNC_12 (struct strbuf*,char const*,size_t,int,int,int) ;
 int FUNC_13 (struct strbuf*,char) ;
 int FUNC_14 (struct strbuf*,char*,...) ;
 int FUNC_15 (struct strbuf*,char*) ;
 int FUNC_16 (struct strbuf*,int *) ;
 int FUNC_17 (struct strbuf*) ;
 char* FUNC_18 (char const*,char) ;
 int FUNC_19 (int *,int ) ;
 size_t FUNC_20 (char*) ;

void FUNC_21(struct pretty_print_context *VAR_4,
    const char *VAR_5, struct strbuf *VAR_6,
    const char *VAR_7, const char *VAR_8)
{
 struct ident_split VAR_9;
 char *VAR_10;
 const char *VAR_11, *VAR_12;
 size_t VAR_13, VAR_14;
 int VAR_15 = 78;

 if (VAR_4->fmt == VAR_0)
  return;

 VAR_10 = FUNC_18(VAR_7, '\n');
 if (FUNC_10(&VAR_9, VAR_7, VAR_10 - VAR_7))
  return;

 VAR_11 = VAR_9.mail_begin;
 VAR_14 = VAR_9.mail_end - VAR_9.mail_begin;
 VAR_12 = VAR_9.name_begin;
 VAR_13 = VAR_9.name_end - VAR_9.name_begin;

 if (VAR_4->mailmap)
  FUNC_6(VAR_4->mailmap, &VAR_11, &VAR_14, &VAR_12, &VAR_13);

 if (FUNC_3(VAR_4->fmt)) {
  if (VAR_4->from_ident && FUNC_4(VAR_4->from_ident, &VAR_9)) {
   struct strbuf VAR_16 = VAR_3;

   FUNC_15(&VAR_16, "From: ");
   FUNC_11(&VAR_16, VAR_12, VAR_13);
   FUNC_15(&VAR_16, " <");
   FUNC_11(&VAR_16, VAR_11, VAR_14);
   FUNC_15(&VAR_16, ">\n");
   FUNC_19(&VAR_4->in_body_headers,
        FUNC_16(&VAR_16, ((void*)0)));

   VAR_11 = VAR_4->from_ident->mail_begin;
   VAR_14 = VAR_4->from_ident->mail_end - VAR_11;
   VAR_12 = VAR_4->from_ident->name_begin;
   VAR_13 = VAR_4->from_ident->name_end - VAR_12;
  }

  FUNC_15(VAR_6, "From: ");
  if (FUNC_7(VAR_12, VAR_13)) {
   FUNC_1(VAR_6, VAR_12, VAR_13,
        VAR_8, VAR_1);
   VAR_15 = 76;
  } else if (FUNC_8(VAR_12, VAR_13)) {
   struct strbuf VAR_17 = VAR_3;
   FUNC_2(&VAR_17, VAR_12, VAR_13);
   FUNC_12(VAR_6, VAR_17.buf, VAR_17.len,
       -6, 1, VAR_15);
   FUNC_17(&VAR_17);
  } else {
   FUNC_12(VAR_6, VAR_12, VAR_13,
       -6, 1, VAR_15);
  }

  if (VAR_15 <
      FUNC_5(VAR_6) + FUNC_20(" <") + VAR_14 + FUNC_20(">"))
   FUNC_13(VAR_6, '\n');
  FUNC_14(VAR_6, " <%.*s>\n", (int)VAR_14, VAR_11);
 } else {
  FUNC_14(VAR_6, "%s: %.*s%.*s <%.*s>\n", VAR_5,
       (VAR_4->fmt == 130) ? 4 : 0, "    ",
       (int)VAR_13, VAR_12, (int)VAR_14, VAR_11);
 }

 switch (VAR_4->fmt) {
 case 128:
  FUNC_14(VAR_6, "Date:   %s\n",
       FUNC_9(&VAR_9, &VAR_4->date_mode));
  break;
 case 131:
 case 129:
  FUNC_14(VAR_6, "Date: %s\n",
       FUNC_9(&VAR_9, FUNC_0(VAR_2)));
  break;
 case 130:
  FUNC_14(VAR_6, "%sDate: %s\n", VAR_5,
       FUNC_9(&VAR_9, &VAR_4->date_mode));
  break;
 default:

  break;
 }
}
