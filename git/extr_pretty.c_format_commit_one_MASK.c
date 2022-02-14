
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct strbuf {int len; } ;
struct process_trailer_options {int no_divider; int only_trailers; int unfold; int value_only; struct strbuf* separator; struct string_list* filter_data; int filter; } ;
struct TYPE_15__ {int len; int off; } ;
struct TYPE_14__ {int len; int off; } ;
struct TYPE_18__ {char result; char const* gpg_output; char const* signer; char const* key; char const* fingerprint; char const* primary_key_fingerprint; } ;
struct format_commit_context {char* message; char const* commit_encoding; int subject_off; int body_off; int commit_message_parsed; int message_off; TYPE_7__* pretty_ctx; TYPE_6__ committer; TYPE_5__ author; int commit_header_parsed; TYPE_9__ signature_check; struct commit* commit; int auto_color; } ;
struct commit_list {TYPE_3__* item; struct commit_list* next; } ;
struct TYPE_10__ {int oid; int parsed; } ;
struct commit {struct commit_list* parents; TYPE_1__ object; } ;
struct TYPE_17__ {char* util; } ;
struct TYPE_16__ {char const* notes_message; int date_mode; int reflog_info; int date_mode_explicit; TYPE_4__* rev; int abbrev; int color; } ;
struct TYPE_13__ {int sources; } ;
struct TYPE_11__ {int oid; } ;
struct TYPE_12__ {TYPE_2__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 struct process_trailer_options VAR_3 ;
 struct strbuf VAR_4 ;
 struct string_list VAR_5 ;
 int FUNC_0 (struct commit*,TYPE_9__*) ;
 char const* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct strbuf*,struct commit const*,int ) ;
 int FUNC_3 (struct strbuf*,struct commit const*,int ,char*,char*,char*) ;
 size_t FUNC_4 (struct strbuf*,char const,char const*,int ,int *) ;
 size_t FUNC_5 (struct strbuf*,char const,int ,int *) ;
 int FUNC_6 (struct strbuf*,char const*) ;
 int FUNC_7 (struct strbuf*,char const*,char*) ;
 int VAR_6 ;
 int FUNC_8 (struct strbuf*,char const*,struct process_trailer_options*) ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (struct commit const*) ;
 int FUNC_11 (struct strbuf*,int ) ;
 int FUNC_12 (struct strbuf*,int ,int *,int ,int) ;
 char const* FUNC_13 (int *,struct commit const*) ;
 scalar_t__ FUNC_14 (char const*,char*,char const**,char const**,size_t*) ;
 int FUNC_15 (char const*,char*,char const**,int*) ;
 char const* FUNC_16 (int *) ;
 int FUNC_17 (struct strbuf*,char const*,struct format_commit_context*) ;
 int FUNC_18 (struct format_commit_context*) ;
 int FUNC_19 (struct format_commit_context*) ;
 int FUNC_20 (int ,int *) ;
 size_t FUNC_21 (char const*,struct format_commit_context*) ;
 char** FUNC_22 (int ,struct commit const*) ;
 int FUNC_23 (struct strbuf*,struct format_commit_context*,unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_24 (char const*,char*,char const**) ;
 int FUNC_25 (char const*,char*) ;
 int FUNC_26 (struct strbuf*,int *,int ) ;
 int FUNC_27 (struct strbuf*,char) ;
 int FUNC_28 (struct strbuf*,char const*) ;
 int FUNC_29 (struct strbuf*,char*,size_t (*) (struct strbuf*,char const*,int *),int *) ;
 size_t FUNC_30 (struct strbuf*,char const*,int *) ;
 int FUNC_31 (struct strbuf*) ;
 int FUNC_32 (struct strbuf*) ;
 char* FUNC_33 (char const*,char) ;
 TYPE_8__* FUNC_34 (struct string_list*,char const*) ;
 int FUNC_35 (struct string_list*,int ) ;
 unsigned long FUNC_36 (char const*,char**,int) ;
 int VAR_7 ;
 int FUNC_37 (int ) ;
 char* FUNC_38 (char const*,size_t) ;

__attribute__((used)) static size_t FUNC_39(struct strbuf *VAR_8,
    const char *VAR_9,
    void *VAR_10)
{
 struct format_commit_context *VAR_11 = VAR_10;
 const struct commit *VAR_12 = VAR_11->commit;
 const char *VAR_13 = VAR_11->message;
 struct commit_list *VAR_14;
 const char *VAR_15;
 size_t VAR_16;
 char **VAR_17;


 VAR_16 = FUNC_30(VAR_8, VAR_9, ((void*)0));
 if (VAR_16)
  return VAR_16;

 switch (VAR_9[0]) {
 case 'C':
  if (FUNC_25(VAR_9 + 1, "(auto)")) {
   VAR_11->auto_color = FUNC_37(VAR_11->pretty_ctx->color);
   if (VAR_11->auto_color && VAR_8->len)
    FUNC_28(VAR_8, VAR_2);
   return 7;
  } else {
   int VAR_18 = FUNC_17(VAR_8, VAR_9, VAR_11);
   if (VAR_18)
    VAR_11->auto_color = 0;





   return VAR_18;
  }
 case 'w':
  if (VAR_9[1] == '(') {
   unsigned long VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
   char *VAR_22;
   const char *VAR_23 = VAR_9 + 2;
   const char *VAR_24 = FUNC_33(VAR_23, ')');
   if (!VAR_24)
    return 0;
   if (VAR_24 > VAR_23) {
    VAR_19 = FUNC_36(VAR_23, &VAR_22, 10);
    if (*VAR_22 == ',') {
     VAR_20 = FUNC_36(VAR_22 + 1, &VAR_22, 10);
     if (*VAR_22 == ',') {
      VAR_21 = FUNC_36(VAR_22 + 1,
         &VAR_22, 10);
     }
    }
    if (*VAR_22 != ')')
     return 0;
   }
   FUNC_23(VAR_8, VAR_11, VAR_19, VAR_20, VAR_21);
   return VAR_24 - VAR_9 + 1;
  } else
   return 0;

 case '<':
 case '>':
  return FUNC_21(VAR_9, VAR_11);
 }


 if (!VAR_12->object.parsed)
  FUNC_20(VAR_7, &VAR_12->object.oid);

 switch (VAR_9[0]) {
 case 'H':
  FUNC_28(VAR_8, FUNC_1(VAR_11->auto_color, VAR_0));
  FUNC_28(VAR_8, FUNC_16(&VAR_12->object.oid));
  FUNC_28(VAR_8, FUNC_1(VAR_11->auto_color, VAR_1));
  return 1;
 case 'h':
  FUNC_28(VAR_8, FUNC_1(VAR_11->auto_color, VAR_0));
  FUNC_26(VAR_8, &VAR_12->object.oid,
      VAR_11->pretty_ctx->abbrev);
  FUNC_28(VAR_8, FUNC_1(VAR_11->auto_color, VAR_1));
  return 1;
 case 'T':
  FUNC_28(VAR_8, FUNC_16(FUNC_10(VAR_12)));
  return 1;
 case 't':
  FUNC_26(VAR_8,
      FUNC_10(VAR_12),
      VAR_11->pretty_ctx->abbrev);
  return 1;
 case 'P':
  for (VAR_14 = VAR_12->parents; VAR_14; VAR_14 = VAR_14->next) {
   if (VAR_14 != VAR_12->parents)
    FUNC_27(VAR_8, ' ');
   FUNC_28(VAR_8, FUNC_16(&VAR_14->item->object.oid));
  }
  return 1;
 case 'p':
  for (VAR_14 = VAR_12->parents; VAR_14; VAR_14 = VAR_14->next) {
   if (VAR_14 != VAR_12->parents)
    FUNC_27(VAR_8, ' ');
   FUNC_26(VAR_8, &VAR_14->item->object.oid,
       VAR_11->pretty_ctx->abbrev);
  }
  return 1;
 case 'm':
  FUNC_28(VAR_8, FUNC_13(((void*)0), VAR_12));
  return 1;
 case 'd':
  FUNC_2(VAR_8, VAR_12, VAR_11->auto_color);
  return 1;
 case 'D':
  FUNC_3(VAR_8, VAR_12, VAR_11->auto_color, "", ", ", "");
  return 1;
 case 'S':
  if (!(VAR_11->pretty_ctx->rev && VAR_11->pretty_ctx->rev->sources))
   return 0;
  VAR_17 = FUNC_22(VAR_11->pretty_ctx->rev->sources, VAR_12);
  if (!(VAR_17 && *VAR_17))
   return 0;
  FUNC_28(VAR_8, *VAR_17);
  return 1;
 case 'g':
  switch(VAR_9[1]) {
  case 'd':
  case 'D':
   if (VAR_11->pretty_ctx->reflog_info)
    FUNC_12(VAR_8,
          VAR_11->pretty_ctx->reflog_info,
          &VAR_11->pretty_ctx->date_mode,
          VAR_11->pretty_ctx->date_mode_explicit,
          (VAR_9[1] == 'd'));
   return 2;
  case 's':
   if (VAR_11->pretty_ctx->reflog_info)
    FUNC_11(VAR_8, VAR_11->pretty_ctx->reflog_info);
   return 2;
  case 'n':
  case 'N':
  case 'e':
  case 'E':
   return FUNC_5(VAR_8,
          VAR_9[1],
          VAR_11->pretty_ctx->reflog_info,
          &VAR_11->pretty_ctx->date_mode);
  }
  return 0;
 case 'N':
  if (VAR_11->pretty_ctx->notes_message) {
   FUNC_28(VAR_8, VAR_11->pretty_ctx->notes_message);
   return 1;
  }
  return 0;
 }

 if (VAR_9[0] == 'G') {
  if (!VAR_11->signature_check.result)
   FUNC_0(VAR_11->commit, &(VAR_11->signature_check));
  switch (VAR_9[1]) {
  case 'G':
   if (VAR_11->signature_check.gpg_output)
    FUNC_28(VAR_8, VAR_11->signature_check.gpg_output);
   break;
  case '?':
   switch (VAR_11->signature_check.result) {
   case 'G':
   case 'B':
   case 'E':
   case 'U':
   case 'N':
   case 'X':
   case 'Y':
   case 'R':
    FUNC_27(VAR_8, VAR_11->signature_check.result);
   }
   break;
  case 'S':
   if (VAR_11->signature_check.signer)
    FUNC_28(VAR_8, VAR_11->signature_check.signer);
   break;
  case 'K':
   if (VAR_11->signature_check.key)
    FUNC_28(VAR_8, VAR_11->signature_check.key);
   break;
  case 'F':
   if (VAR_11->signature_check.fingerprint)
    FUNC_28(VAR_8, VAR_11->signature_check.fingerprint);
   break;
  case 'P':
   if (VAR_11->signature_check.primary_key_fingerprint)
    FUNC_28(VAR_8, VAR_11->signature_check.primary_key_fingerprint);
   break;
  default:
   return 0;
  }
  return 2;
 }



 if (!VAR_11->commit_header_parsed)
  FUNC_18(VAR_11);

 switch (VAR_9[0]) {
 case 'a':
  return FUNC_4(VAR_8, VAR_9[1],
       VAR_13 + VAR_11->author.off, VAR_11->author.len,
       &VAR_11->pretty_ctx->date_mode);
 case 'c':
  return FUNC_4(VAR_8, VAR_9[1],
       VAR_13 + VAR_11->committer.off, VAR_11->committer.len,
       &VAR_11->pretty_ctx->date_mode);
 case 'e':
  if (VAR_11->commit_encoding)
   FUNC_28(VAR_8, VAR_11->commit_encoding);
  return 1;
 case 'B':

  FUNC_28(VAR_8, VAR_13 + VAR_11->message_off + 1);
  return 1;
 }


 if (!VAR_11->commit_message_parsed)
  FUNC_19(VAR_11);

 switch (VAR_9[0]) {
 case 's':
  FUNC_7(VAR_8, VAR_13 + VAR_11->subject_off, " ");
  return 1;
 case 'f':
  FUNC_6(VAR_8, VAR_13 + VAR_11->subject_off);
  return 1;
 case 'b':
  FUNC_28(VAR_8, VAR_13 + VAR_11->body_off);
  return 1;
 }

 if (FUNC_24(VAR_9, "(trailers", &VAR_15)) {
  struct process_trailer_options VAR_25 = VAR_3;
  struct string_list VAR_26 = VAR_5;
  struct strbuf VAR_27 = VAR_4;
  size_t VAR_28 = 0;

  VAR_25.no_divider = 1;

  if (*VAR_15 == ':') {
   VAR_15++;
   for (;;) {
    const char *VAR_29;
    size_t VAR_30;

    if (FUNC_14(VAR_15, "key", &VAR_15, &VAR_29, &VAR_30)) {
     uintptr_t VAR_31 = VAR_30;

     if (!VAR_29)
      goto trailer_out;

     if (VAR_31 && VAR_29[VAR_31 - 1] == ':')
      VAR_31--;
     FUNC_34(&VAR_26, VAR_29)->util = (char *)VAR_31;

     VAR_25.filter = VAR_6;
     VAR_25.filter_data = &VAR_26;
     VAR_25.only_trailers = 1;
    } else if (FUNC_14(VAR_15, "separator", &VAR_15, &VAR_29, &VAR_30)) {
     char *VAR_32;

     FUNC_32(&VAR_27);
     VAR_32 = FUNC_38(VAR_29, VAR_30);
     FUNC_29(&VAR_27, VAR_32, FUNC_30, ((void*)0));
     FUNC_9(VAR_32);
     VAR_25.separator = &VAR_27;
    } else if (!FUNC_15(VAR_15, "only", &VAR_15, &VAR_25.only_trailers) &&
        !FUNC_15(VAR_15, "unfold", &VAR_15, &VAR_25.unfold) &&
        !FUNC_15(VAR_15, "valueonly", &VAR_15, &VAR_25.value_only))
     break;
   }
  }
  if (*VAR_15 == ')') {
   FUNC_8(VAR_8, VAR_13 + VAR_11->subject_off, &VAR_25);
   VAR_28 = VAR_15 - VAR_9 + 1;
  }
 trailer_out:
  FUNC_35(&VAR_26, 0);
  FUNC_31(&VAR_27);
  return VAR_28;
 }

 return 0;
}
