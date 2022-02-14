
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fetch_progress; } ;
typedef TYPE_1__ progress_data ;
typedef int git_indexer_progress ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(const git_indexer_progress *VAR_0, void *VAR_1)
{
 progress_data *VAR_2 = (progress_data*)VAR_1;
 VAR_2->fetch_progress = *VAR_0;
 FUNC_0(VAR_2);
 return 0;
}
