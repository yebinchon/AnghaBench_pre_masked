
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_7__ {scalar_t__ received_bytes; scalar_t__ declared_size; int (* finalize_write ) (TYPE_2__*,int *) ;TYPE_1__* backend; int hash_ctx; } ;
typedef TYPE_2__ git_odb_stream ;
struct TYPE_6__ {int odb; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int *) ;

int FUNC_4(git_oid *VAR_0, git_odb_stream *VAR_1)
{
 if (VAR_1->received_bytes != VAR_1->declared_size)
  return FUNC_2(VAR_1,
   "stream_finalize_write()");

 FUNC_0(VAR_0, VAR_1->hash_ctx);

 if (FUNC_1(VAR_1->backend->odb, VAR_0))
  return 0;

 return VAR_1->finalize_write(VAR_1, VAR_0);
}
