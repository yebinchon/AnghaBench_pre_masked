
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pack; } ;
typedef TYPE_2__ git_indexer ;
struct TYPE_7__ {int size; } ;
struct TYPE_5__ {TYPE_4__ mwf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_1(git_indexer *VAR_1)
{
 VAR_1->pack->mwf.size -= VAR_0;
 FUNC_0(&VAR_1->pack->mwf);
}
