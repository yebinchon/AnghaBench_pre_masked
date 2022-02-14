
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct dir_entry {scalar_t__ nr; } ;


 struct dir_entry* FUNC_0 (struct index_state*,char const*,int) ;
 int FUNC_1 (struct index_state*) ;

int FUNC_2(struct index_state *VAR_0, const char *VAR_1, int VAR_2)
{
 struct dir_entry *VAR_3;

 FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 return VAR_3 && VAR_3->nr;
}
