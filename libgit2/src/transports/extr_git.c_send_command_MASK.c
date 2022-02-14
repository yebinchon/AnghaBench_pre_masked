
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sent_command; int io; int url; int cmd; } ;
typedef TYPE_1__ git_proto_stream ;
struct TYPE_8__ {int size; int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(git_proto_stream *VAR_1)
{
 git_buf VAR_2 = VAR_0;
 int VAR_3;

 if ((VAR_3 = FUNC_0(&VAR_2, VAR_1->cmd, VAR_1->url)) < 0)
  goto cleanup;

 if ((VAR_3 = FUNC_2(VAR_1->io, VAR_2.ptr, VAR_2.size, 0)) < 0)
  goto cleanup;

 VAR_1->sent_command = 1;

cleanup:
 FUNC_1(&VAR_2);
 return VAR_3;
}
