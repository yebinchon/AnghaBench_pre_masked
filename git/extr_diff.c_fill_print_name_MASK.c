
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct diffstat_file {int print_name; int comments; int name; int from_name; scalar_t__ is_renamed; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,int ,int ) ;
 int FUNC_1 (int ,struct strbuf*,int *,int ) ;
 int FUNC_2 (struct strbuf*,char*,int ) ;
 int FUNC_3 (struct strbuf*,int *) ;

__attribute__((used)) static void FUNC_4(struct diffstat_file *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;

 if (VAR_1->print_name)
  return;

 if (VAR_1->is_renamed)
  FUNC_0(&VAR_2, VAR_1->from_name, VAR_1->name);
 else
  FUNC_1(VAR_1->name, &VAR_2, ((void*)0), 0);

 if (VAR_1->comments)
  FUNC_2(&VAR_2, " (%s)", VAR_1->comments);

 VAR_1->print_name = FUNC_3(&VAR_2, ((void*)0));
}
