
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct collected_reflog {int oid; } ;
struct collect_reflog_cb {scalar_t__ nr; struct collected_reflog** e; int alloc; TYPE_1__* wt; } ;
struct TYPE_2__ {int is_current; } ;


 int FUNC_0 (struct collected_reflog**,scalar_t__,int ) ;
 int FUNC_1 (struct collected_reflog*,int ,int ) ;
 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_2 (int *,struct object_id const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int VAR_2 ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (TYPE_1__*,struct strbuf*,char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3, const struct object_id *VAR_4, int VAR_5, void *VAR_6)
{
 struct collected_reflog *VAR_7;
 struct collect_reflog_cb *VAR_8 = VAR_6;
 struct strbuf VAR_9 = VAR_1;





 if (!VAR_8->wt->is_current && FUNC_3(VAR_3) == VAR_0)
  return 0;

 FUNC_5(VAR_8->wt, &VAR_9, VAR_3);
 FUNC_1(VAR_7, VAR_2, VAR_9.buf);
 FUNC_4(&VAR_9);

 FUNC_2(&VAR_7->oid, VAR_4);
 FUNC_0(VAR_8->e, VAR_8->nr + 1, VAR_8->alloc);
 VAR_8->e[VAR_8->nr++] = VAR_7;
 return 0;
}
