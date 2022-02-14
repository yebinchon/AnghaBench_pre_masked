
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct strbuf {char const* buf; } ;
struct http_get_options {int initial_request; int no_cache; struct string_list* extra_headers; TYPE_1__* base_url; struct strbuf* effective_url; struct strbuf* charset; struct strbuf* content_type; } ;
struct discovery {char const* service; int refs; scalar_t__ proto_git; int buf_alloc; int buf; int len; } ;
typedef int http_options ;
typedef enum protocol_version { ____Placeholder_protocol_version } protocol_version ;
struct TYPE_4__ {scalar_t__ verbosity; } ;
struct TYPE_3__ {char const* buf; } ;





 struct strbuf VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct discovery*,char const*,struct strbuf*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct discovery*) ;
 scalar_t__ FUNC_5 (int,struct strbuf*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,int) ;
 int FUNC_8 (char const*,struct strbuf*,struct http_get_options*) ;
 struct discovery* VAR_3 ;
 int FUNC_9 (struct http_get_options*,int ,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_10 (struct discovery*,int) ;
 int FUNC_11 (struct discovery*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (struct strbuf*,struct strbuf*,struct strbuf*) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (struct strbuf*,char) ;
 int FUNC_15 (struct strbuf*,char*,char const*) ;
 int FUNC_16 (struct strbuf*,int *) ;
 int FUNC_17 (struct strbuf*) ;
 int FUNC_18 (char const*,char) ;
 int FUNC_19 (char const*,char const*) ;
 int FUNC_20 (struct string_list*,char const*) ;
 int FUNC_21 (struct string_list*,int ) ;
 char* FUNC_22 (char const*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_23 (int ,char*) ;
 struct discovery* FUNC_24 (int,int) ;
 char const* FUNC_25 (char const*) ;

__attribute__((used)) static struct discovery *FUNC_26(const char *VAR_8, int VAR_9)
{
 struct strbuf VAR_10 = VAR_0;
 struct strbuf VAR_11 = VAR_0;
 struct strbuf VAR_12 = VAR_0;
 struct strbuf VAR_13 = VAR_0;
 struct strbuf VAR_14 = VAR_0;
 struct strbuf VAR_15 = VAR_0;
 struct string_list VAR_16 = VAR_1;
 struct discovery *VAR_17 = VAR_3;
 int VAR_18, VAR_19 = 0;
 struct http_get_options VAR_20;
 enum protocol_version VAR_21 = FUNC_6();

 if (VAR_17 && !FUNC_19(VAR_8, VAR_17->service))
  return VAR_17;
 FUNC_4(VAR_17);

 FUNC_15(&VAR_13, "%sinfo/refs", VAR_7.buf);
 if ((FUNC_13(VAR_7.buf, "http://") || FUNC_13(VAR_7.buf, "https://")) &&
      FUNC_7("GIT_SMART_HTTP", 1)) {
  VAR_19 = 1;
  if (!FUNC_18(VAR_7.buf, '?'))
   FUNC_14(&VAR_13, '?');
  else
   FUNC_14(&VAR_13, '&');
  FUNC_15(&VAR_13, "service=%s", VAR_8);
 }






 if (VAR_21 == VAR_6 && !FUNC_19("git-receive-pack", VAR_8))
  VAR_21 = VAR_5;


 if (FUNC_5(VAR_21, &VAR_15))
  FUNC_20(&VAR_16, VAR_15.buf);

 FUNC_9(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.content_type = &VAR_10;
 VAR_20.charset = &VAR_11;
 VAR_20.effective_url = &VAR_14;
 VAR_20.base_url = &VAR_7;
 VAR_20.extra_headers = &VAR_16;
 VAR_20.initial_request = 1;
 VAR_20.no_cache = 1;

 VAR_18 = FUNC_8(VAR_13.buf, &VAR_12, &VAR_20);
 switch (VAR_18) {
 case 128:
  break;
 case 130:
  FUNC_12(&VAR_10, &VAR_11, &VAR_12);
  FUNC_2(FUNC_0("repository '%s' not found"),
      FUNC_22(VAR_7.buf));
 case 129:
  FUNC_12(&VAR_10, &VAR_11, &VAR_12);
  FUNC_2(FUNC_0("Authentication failed for '%s'"),
      FUNC_22(VAR_7.buf));
 default:
  FUNC_12(&VAR_10, &VAR_11, &VAR_12);
  FUNC_2(FUNC_0("unable to access '%s': %s"),
      FUNC_22(VAR_7.buf), VAR_2);
 }

 if (VAR_4.verbosity && !FUNC_13(VAR_13.buf, VAR_7.buf)) {
  char *VAR_22 = FUNC_22(VAR_7.buf);
  FUNC_23(FUNC_0("redirecting to %s"), VAR_22);
  FUNC_3(VAR_22);
 }

 VAR_17= FUNC_24(1, sizeof(*VAR_3));
 VAR_17->service = FUNC_25(VAR_8);
 VAR_17->buf_alloc = FUNC_16(&VAR_12, &VAR_17->len);
 VAR_17->buf = VAR_17->buf_alloc;

 if (VAR_19)
  FUNC_1(VAR_17, VAR_8, &VAR_10);

 if (VAR_17->proto_git)
  VAR_17->refs = FUNC_10(VAR_17, VAR_9);
 else
  VAR_17->refs = FUNC_11(VAR_17);

 FUNC_17(&VAR_13);
 FUNC_17(&VAR_10);
 FUNC_17(&VAR_11);
 FUNC_17(&VAR_14);
 FUNC_17(&VAR_12);
 FUNC_17(&VAR_15);
 FUNC_21(&VAR_16, 0);
 VAR_3 = VAR_17;
 return VAR_17;
}
