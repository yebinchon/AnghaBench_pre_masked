
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int hash; } ;
typedef TYPE_1__ git_indexer ;
struct TYPE_11__ {char* ptr; int size; } ;
typedef TYPE_2__ git_buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (TYPE_2__*,size_t) ;
 int FUNC_5 (char*,int *) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(git_buf *VAR_1, git_indexer *VAR_2, const char *VAR_3)
{
 const char VAR_4[] = "pack-";
 size_t VAR_5 = (size_t)VAR_1->size;


 while (VAR_5 > 0 && VAR_1->ptr[VAR_5 - 1] != '/')
  VAR_5--;

 if (FUNC_0(VAR_1, VAR_5 + 1 + FUNC_6(VAR_4) +
      VAR_0 + FUNC_6(VAR_3) + 1) < 0)
  return -1;

 FUNC_4(VAR_1, VAR_5);
 FUNC_3(VAR_1, VAR_4);
 FUNC_5(VAR_1->ptr + FUNC_1(VAR_1), &VAR_2->hash);
 VAR_1->size += VAR_0;
 FUNC_3(VAR_1, VAR_3);

 return FUNC_2(VAR_1) ? -1 : 0;
}
