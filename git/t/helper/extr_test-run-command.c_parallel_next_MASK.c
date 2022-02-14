
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct child_process {int argv; int args; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct strbuf*,char*) ;

__attribute__((used)) static int FUNC_2(struct child_process *VAR_1,
    struct strbuf *VAR_2,
    void *VAR_3,
    void **VAR_4)
{
 struct child_process *VAR_5 = VAR_3;
 if (VAR_0 >= 4)
  return 0;

 FUNC_0(&VAR_1->args, VAR_5->argv);
 FUNC_1(VAR_2, "preloaded output of a child\n");
 VAR_0++;
 return 1;
}
