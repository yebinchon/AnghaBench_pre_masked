
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_smart_subtransport_stream ;
struct TYPE_3__ {int io; int sent_command; } ;
typedef TYPE_1__ git_proto_stream ;


 int FUNC_0 (int ,char const*,size_t,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(
 git_smart_subtransport_stream *VAR_0,
 const char *VAR_1,
 size_t VAR_2)
{
 git_proto_stream *VAR_3 = (git_proto_stream *)VAR_0;
 int VAR_4;

 if (!VAR_3->sent_command && (VAR_4 = FUNC_1(VAR_3)) < 0)
  return VAR_4;

 return FUNC_0(VAR_3->io, VAR_1, VAR_2, 0);
}
