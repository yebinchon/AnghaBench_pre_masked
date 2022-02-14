
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int dummy; } ;
struct strbuf {int dummy; } ;
struct name_entry {int pathlen; int path; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (struct strbuf*,int *) ;
 int FUNC_1 (struct strbuf*,struct traverse_info const*,int ,int ) ;

__attribute__((used)) static char *FUNC_2(const struct traverse_info *VAR_1, const struct name_entry *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 FUNC_1(&VAR_3, VAR_1, VAR_2->path, VAR_2->pathlen);
 return FUNC_0(&VAR_3, ((void*)0));
}
