
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ follow_renames; } ;
struct diff_options {TYPE_1__ flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct object_id const*,struct object_id const*,struct strbuf*,struct diff_options*) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct object_id const*,struct object_id const*,struct strbuf*,struct diff_options*) ;

int FUNC_6(const struct object_id *VAR_1,
    const struct object_id *VAR_2,
    const char *VAR_3, struct diff_options *VAR_4)
{
 struct strbuf VAR_5;
 int VAR_6;

 FUNC_3(&VAR_5, VAR_0);
 FUNC_2(&VAR_5, VAR_3);

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_4);
 if (!*VAR_3 && VAR_4->flags.follow_renames && FUNC_0())
  FUNC_5(VAR_1, VAR_2, &VAR_5, VAR_4);

 FUNC_4(&VAR_5);

 return VAR_6;
}
