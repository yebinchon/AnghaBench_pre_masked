
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ received_bytes; scalar_t__ declared_size; int (* write ) (TYPE_1__*,char const*,size_t) ;int hash_ctx; } ;
typedef TYPE_1__ git_odb_stream ;


 int FUNC_0 (int ,char const*,size_t) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char const*,size_t) ;

int FUNC_3(git_odb_stream *VAR_0, const char *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_0->hash_ctx, VAR_1, VAR_2);

 VAR_0->received_bytes += VAR_2;

 if (VAR_0->received_bytes > VAR_0->declared_size)
  return FUNC_1(VAR_0,
   "stream_write()");

 return VAR_0->write(VAR_0, VAR_1, VAR_2);
}
