
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct hashfile {int dummy; } ;


 struct strbuf VAR_0 ;
 struct hashfile* FUNC_0 (int,char*) ;
 int FUNC_1 (struct strbuf*,char*) ;
 char* FUNC_2 (struct strbuf*,int *) ;

struct hashfile *FUNC_3(char **VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2, "pack/tmp_pack_XXXXXX");
 *VAR_1 = FUNC_2(&VAR_2, ((void*)0));
 return FUNC_0(VAR_3, *VAR_1);
}
