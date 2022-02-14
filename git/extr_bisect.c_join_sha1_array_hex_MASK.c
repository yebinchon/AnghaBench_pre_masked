
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct oid_array {int nr; scalar_t__ oid; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,int ) ;
 char* FUNC_3 (struct strbuf*,int *) ;

__attribute__((used)) static char *FUNC_4(struct oid_array *VAR_1, char VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->nr; VAR_4++) {
  FUNC_2(&VAR_3, FUNC_0(VAR_1->oid + VAR_4));
  if (VAR_4 + 1 < VAR_1->nr)
   FUNC_1(&VAR_3, VAR_2);
 }

 return FUNC_3(&VAR_3, ((void*)0));
}
