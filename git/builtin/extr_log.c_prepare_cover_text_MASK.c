
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; char* buf; } ;
struct pretty_print_context {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct strbuf VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_0 (struct strbuf*,char*,char*) ;
 int FUNC_1 (struct pretty_print_context*,char const**,struct strbuf*,int ) ;
 int FUNC_2 (struct pretty_print_context*,char const**,struct strbuf*,char const*,int) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(struct pretty_print_context *VAR_7,
          const char *VAR_8,
          struct strbuf *VAR_9,
          const char *VAR_10,
          int VAR_11)
{
 const char *VAR_12 = "*** SUBJECT HERE ***";
 const char *VAR_13 = "*** BLURB HERE ***";
 struct strbuf VAR_14 = VAR_5;
 struct strbuf VAR_15 = VAR_5;

 if (VAR_6 == VAR_3)
  goto do_pp;

 if (VAR_8 && *VAR_8)
  FUNC_3(&VAR_14, VAR_8);
 if (!VAR_14.len)
  goto do_pp;

 if (VAR_6 == VAR_4 ||
   VAR_6 == VAR_0)
  VAR_13 = FUNC_0(&VAR_15, VAR_14.buf, " ");

 if (VAR_6 == VAR_2 ||
   (VAR_6 == VAR_0 &&
    VAR_15.len > VAR_1))
  VAR_13 = VAR_14.buf;
 else
  VAR_12 = VAR_15.buf;

do_pp:
 FUNC_2(VAR_7, &VAR_12, VAR_9, VAR_10, VAR_11);
 FUNC_1(VAR_7, &VAR_13, VAR_9, 0);

 FUNC_4(&VAR_14);
 FUNC_4(&VAR_15);
}
