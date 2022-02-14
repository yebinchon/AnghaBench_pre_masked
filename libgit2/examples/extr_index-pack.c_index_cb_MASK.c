
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int indexed_objects; int total_objects; } ;
typedef TYPE_1__ git_indexer_progress ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int FUNC_1(const git_indexer_progress *VAR_0, void *VAR_1)
{
 (void)VAR_1;
 FUNC_0("\rProcessing %u of %u", VAR_0->indexed_objects, VAR_0->total_objects);

 return 0;
}
