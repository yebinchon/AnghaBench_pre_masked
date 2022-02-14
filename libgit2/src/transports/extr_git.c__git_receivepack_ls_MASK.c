
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* current_stream; } ;
typedef TYPE_1__ git_subtransport ;
typedef int git_smart_subtransport_stream ;
struct TYPE_10__ {int io; } ;
typedef TYPE_2__ git_proto_stream ;
struct TYPE_11__ {int port; int host; } ;
typedef TYPE_3__ git_net_url ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,char const*) ;
 int FUNC_3 (TYPE_1__*,char const*,int ,int ,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(
 git_subtransport *VAR_3,
 const char *VAR_4,
 git_smart_subtransport_stream **VAR_5)
{
 git_net_url VAR_6 = VAR_0;
 const char *VAR_7 = VAR_4;
 git_proto_stream *VAR_8;
 int VAR_9;

 *VAR_5 = ((void*)0);
 if (!FUNC_0(VAR_4, VAR_2))
  VAR_7 += FUNC_6(VAR_2);

 if ((VAR_9 = FUNC_2(&VAR_6, VAR_4)) < 0)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_3, VAR_7, VAR_1, VAR_6.host, VAR_6.port, VAR_5);

 FUNC_1(&VAR_6);

 if (VAR_9 < 0) {
  FUNC_4(*VAR_5);
  return VAR_9;
 }

 VAR_8 = (git_proto_stream *) *VAR_5;

 if ((VAR_9 = FUNC_5(VAR_8->io)) < 0)
  return VAR_9;

 VAR_3->current_stream = VAR_8;

 return 0;
}
