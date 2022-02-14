
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_writepack {int indexer; } ;
struct git_odb_writepack {int dummy; } ;
typedef int git_indexer_progress ;


 int FUNC_0 (struct pack_writepack*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct git_odb_writepack *VAR_0, git_indexer_progress *VAR_1)
{
 struct pack_writepack *VAR_2 = (struct pack_writepack *)VAR_0;

 FUNC_0(VAR_2);

 return FUNC_1(VAR_2->indexer, VAR_1);
}
