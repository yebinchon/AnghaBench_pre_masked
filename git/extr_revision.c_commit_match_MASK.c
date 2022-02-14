
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char* buf; scalar_t__ len; } ;
struct TYPE_4__ {scalar_t__ header_list; scalar_t__ use_reflog_filter; int pattern_list; } ;
struct rev_info {scalar_t__ invert_grep; TYPE_2__ grep_filter; scalar_t__ show_notes; int mailmap; int reflog_info; } ;
struct TYPE_3__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char*,int ) ;
 int FUNC_1 (int *,struct strbuf*,char const*,int) ;
 char* FUNC_2 () ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,scalar_t__) ;
 char* FUNC_5 (struct commit*,int *,char const*) ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*,char const*) ;
 int FUNC_8 (struct strbuf*) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (struct commit*,char const*) ;

__attribute__((used)) static int FUNC_11(struct commit *VAR_1, struct rev_info *VAR_2)
{
 int VAR_3;
 const char *VAR_4;
 const char *VAR_5;
 struct strbuf VAR_6 = VAR_0;

 if (!VAR_2->grep_filter.pattern_list && !VAR_2->grep_filter.header_list)
  return 1;


 if (VAR_2->grep_filter.use_reflog_filter) {
  FUNC_7(&VAR_6, "reflog ");
  FUNC_3(&VAR_6, VAR_2->reflog_info);
  FUNC_6(&VAR_6, '\n');
 }
 VAR_4 = FUNC_2();
 VAR_5 = FUNC_5(VAR_1, ((void*)0), VAR_4);


 if (VAR_6.len)
  FUNC_7(&VAR_6, VAR_5);

 if (VAR_2->grep_filter.header_list && VAR_2->mailmap) {
  if (!VAR_6.len)
   FUNC_7(&VAR_6, VAR_5);

  FUNC_0(&VAR_6, "\nauthor ", VAR_2->mailmap);
  FUNC_0(&VAR_6, "\ncommitter ", VAR_2->mailmap);
 }


 if (VAR_2->show_notes) {
  if (!VAR_6.len)
   FUNC_7(&VAR_6, VAR_5);
  FUNC_1(&VAR_1->object.oid, &VAR_6, VAR_4, 1);
 }
 if (VAR_6.len)
  VAR_3 = FUNC_4(&VAR_2->grep_filter, VAR_6.buf, VAR_6.len);
 else
  VAR_3 = FUNC_4(&VAR_2->grep_filter,
         (char *)VAR_5, FUNC_9(VAR_5));
 FUNC_8(&VAR_6);
 FUNC_10(VAR_1, VAR_5);
 return VAR_2->invert_grep ? !VAR_3 : VAR_3;
}
