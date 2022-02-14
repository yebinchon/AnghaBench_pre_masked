
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_writepack {int indexer; } ;
struct git_odb_writepack {int dummy; } ;
typedef int git_indexer_progress ;


 int FUNC_0 (struct pack_writepack*) ;
 int FUNC_1 (int ,void const*,size_t,int *) ;

__attribute__((used)) static int FUNC_2(struct git_odb_writepack *VAR_0, const void *VAR_1, size_t VAR_2, git_indexer_progress *VAR_3)
{
 struct pack_writepack *VAR_4 = (struct pack_writepack *)VAR_0;

 FUNC_0(VAR_4);

 return FUNC_1(VAR_4->indexer, VAR_1, VAR_2, VAR_3);
}
