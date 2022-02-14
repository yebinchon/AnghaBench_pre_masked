
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct list_objects_filter_options {int filter_spec; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct strbuf*,char const*,int ) ;
 int FUNC_1 (struct strbuf*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(
 struct list_objects_filter_options *VAR_2, const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 FUNC_0(&VAR_4, VAR_3, VAR_1);
 FUNC_3("Add to combine filter-spec: %s\n", VAR_4.buf);
 FUNC_2(&VAR_2->filter_spec, FUNC_1(&VAR_4, ((void*)0)));
}
