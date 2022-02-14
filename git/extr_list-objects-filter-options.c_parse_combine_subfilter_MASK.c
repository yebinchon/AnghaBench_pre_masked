
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct list_objects_filter_options {size_t sub_nr; int * sub; int sub_alloc; } ;


 int FUNC_0 (int *,size_t,int,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*,struct strbuf*) ;
 scalar_t__ FUNC_3 (struct strbuf*,struct strbuf*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
 struct list_objects_filter_options *VAR_0,
 struct strbuf *VAR_1,
 struct strbuf *VAR_2)
{
 size_t VAR_3 = VAR_0->sub_nr;
 char *VAR_4;
 int VAR_5;

 FUNC_0(VAR_0->sub, VAR_0->sub_nr, 1,
        VAR_0->sub_alloc);

 VAR_4 = FUNC_4(VAR_1->buf);

 VAR_5 = FUNC_3(VAR_1, VAR_2) ||
  FUNC_2(
   &VAR_0->sub[VAR_3], VAR_4, VAR_2);

 FUNC_1(VAR_4);
 return VAR_5;
}
