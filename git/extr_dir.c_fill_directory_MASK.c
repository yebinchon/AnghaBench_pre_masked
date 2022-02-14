
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {TYPE_1__* items; } ;
struct index_state {int dummy; } ;
struct dir_struct {int dummy; } ;
struct TYPE_2__ {char* match; } ;


 size_t FUNC_0 (struct pathspec const*) ;
 int FUNC_1 (struct dir_struct*,struct index_state*,char const*,size_t,struct pathspec const*) ;

int FUNC_2(struct dir_struct *VAR_0,
     struct index_state *VAR_1,
     const struct pathspec *VAR_2)
{
 const char *VAR_3;
 size_t VAR_4;





 VAR_4 = FUNC_0(VAR_2);
 VAR_3 = VAR_4 ? VAR_2->items[0].match : "";


 FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4, VAR_2);

 return VAR_4;
}
