
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {TYPE_3__* backend; } ;
typedef TYPE_1__ git_odb_stream ;
struct TYPE_6__ {int type; int size; int buffer; } ;
typedef TYPE_2__ fake_wstream ;
struct TYPE_7__ {int (* write ) (TYPE_3__*,int const*,int ,int ,int ) ;} ;


 int FUNC_0 (TYPE_3__*,int const*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(git_odb_stream *VAR_0, const git_oid *VAR_1)
{
 fake_wstream *VAR_2 = (fake_wstream *)VAR_0;
 return VAR_0->backend->write(VAR_0->backend, VAR_1, VAR_2->buffer, VAR_2->size, VAR_2->type);
}
