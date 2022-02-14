
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct commit_graft {int nr_parent; int oid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct strbuf*,char*,int ) ;

__attribute__((used)) static int FUNC_2(const struct commit_graft *VAR_0, void *VAR_1)
{
 struct strbuf *VAR_2 = VAR_1;
 if (VAR_0->nr_parent == -1)
  FUNC_1(VAR_2, "shallow %s\n", FUNC_0(&VAR_0->oid));
 return 0;
}
