
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {size_t pathlen; char const* name; size_t namelen; struct traverse_info* prev; } ;


 int FUNC_0 (struct traverse_info*,int ,int) ;
 size_t FUNC_1 (char const*) ;

void FUNC_2(struct traverse_info *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_1(VAR_1);
 static struct traverse_info VAR_3;

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 if (VAR_2 && VAR_1[VAR_2-1] == '/')
  VAR_2--;
 VAR_0->pathlen = VAR_2 ? VAR_2 + 1 : 0;
 VAR_0->name = VAR_1;
 VAR_0->namelen = VAR_2;
 if (VAR_2)
  VAR_0->prev = &VAR_3;
}
