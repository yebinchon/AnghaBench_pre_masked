
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t offset; } ;
typedef TYPE_1__ gitno_buffer ;
typedef int git_smart_subtransport_stream ;
struct TYPE_7__ {int io; int sent_command; } ;
typedef TYPE_2__ git_proto_stream ;


 int FUNC_0 (int ,TYPE_1__*,char*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(
 git_smart_subtransport_stream *VAR_0,
 char *VAR_1,
 size_t VAR_2,
 size_t *VAR_3)
{
 int VAR_4;
 git_proto_stream *VAR_5 = (git_proto_stream *)VAR_0;
 gitno_buffer VAR_6;

 *VAR_3 = 0;

 if (!VAR_5->sent_command && (VAR_4 = FUNC_2(VAR_5)) < 0)
  return VAR_4;

 FUNC_0(VAR_5->io, &VAR_6, VAR_1, VAR_2);

 if ((VAR_4 = FUNC_1(&VAR_6)) < 0)
  return VAR_4;

 *VAR_3 = VAR_6.offset;

 return 0;
}
