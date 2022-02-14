
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; scalar_t__ len; } ;
struct rev_info {int pending; scalar_t__ reflog_info; scalar_t__ no_walk; } ;
struct object {int flags; scalar_t__ type; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct object*,char const*,int *,unsigned int,char const*) ;
 int FUNC_1 (scalar_t__,struct commit*,char const*) ;
 int FUNC_2 (char const*,int ,struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(struct rev_info *VAR_3,
      struct object *VAR_4,
      const char *VAR_5, unsigned VAR_6,
      const char *VAR_7)
{
 if (!VAR_4)
  return;
 if (VAR_3->no_walk && (VAR_4->flags & VAR_2))
  VAR_3->no_walk = 0;
 if (VAR_3->reflog_info && VAR_4->type == VAR_0) {
  struct strbuf VAR_8 = VAR_1;
  int VAR_9 = FUNC_2(VAR_5, 0, &VAR_8, 0);

  if (0 < VAR_9 && VAR_5[VAR_9] && VAR_8.len)
   FUNC_3(&VAR_8, VAR_5 + VAR_9);
  FUNC_1(VAR_3->reflog_info,
        (struct commit *)VAR_4,
        VAR_8.buf[0] ? VAR_8.buf: VAR_5);
  FUNC_4(&VAR_8);
  return;
 }
 FUNC_0(VAR_4, VAR_5, &VAR_3->pending, VAR_6, VAR_7);
}
