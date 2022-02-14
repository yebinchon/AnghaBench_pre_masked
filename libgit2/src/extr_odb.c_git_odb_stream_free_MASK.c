
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* free ) (TYPE_1__*) ;int hash_ctx; } ;
typedef TYPE_1__ git_odb_stream ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(git_odb_stream *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_1(VAR_0->hash_ctx);
 FUNC_0(VAR_0->hash_ctx);
 VAR_0->free(VAR_0);
}
