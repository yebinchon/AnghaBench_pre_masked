
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {scalar_t__ len; int buf; } ;
struct merge_options {TYPE_1__* repo; } ;
struct index_state {int dummy; } ;
struct diff_filespec {scalar_t__ mode; int oid; } ;
struct TYPE_2__ {struct index_state* index; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct merge_options*,int *,struct strbuf*) ;
 int FUNC_3 (struct index_state const*,char const*,int ,scalar_t__,struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static int FUNC_5(struct merge_options *VAR_1,
     const struct diff_filespec *VAR_2,
     const struct diff_filespec *VAR_3,
     int VAR_4, const char *VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 struct strbuf VAR_7 = VAR_0;
 int VAR_8 = 0;
 const struct index_state *VAR_9 = VAR_1->repo->index;

 if (VAR_3->mode != VAR_2->mode)
  return 0;
 if (FUNC_1(&VAR_2->oid, &VAR_3->oid))
  return 1;
 if (!VAR_4)
  return 0;

 if (FUNC_2(VAR_1, &VAR_2->oid, &VAR_6) ||
     FUNC_2(VAR_1, &VAR_3->oid, &VAR_7))
  goto error_return;





 if (FUNC_3(VAR_9, VAR_5, VAR_6.buf, VAR_6.len, &VAR_6) |
     FUNC_3(VAR_9, VAR_5, VAR_7.buf, VAR_7.len, &VAR_7))
  VAR_8 = (VAR_6.len == VAR_7.len && !FUNC_0(VAR_6.buf, VAR_7.buf, VAR_6.len));

error_return:
 FUNC_4(&VAR_6);
 FUNC_4(&VAR_7);
 return VAR_8;
}
