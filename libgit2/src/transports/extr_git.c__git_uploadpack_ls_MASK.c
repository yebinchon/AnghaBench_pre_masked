
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
struct TYPE_11__ {char* host; char* port; } ;
typedef TYPE_3__ git_net_url ;


 char* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,char const*) ;
 int FUNC_3 (TYPE_1__*,char const*,int ,char const*,char const*,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(
 git_subtransport *VAR_4,
 const char *VAR_5,
 git_smart_subtransport_stream **VAR_6)
{
 git_net_url VAR_7 = VAR_1;
 const char *VAR_8 = VAR_5;
 const char *VAR_9, *VAR_10;
 git_proto_stream *VAR_11;
 int VAR_12;

 *VAR_6 = ((void*)0);

 if (!FUNC_0(VAR_5, VAR_3))
  VAR_8 += FUNC_6(VAR_3);

 if ((VAR_12 = FUNC_2(&VAR_7, VAR_5)) < 0)
  return VAR_12;

 VAR_9 = VAR_7.host;
 VAR_10 = VAR_7.port ? VAR_7.port : VAR_0;

 VAR_12 = FUNC_3(VAR_4, VAR_8, VAR_2, VAR_9, VAR_10, VAR_6);

 FUNC_1(&VAR_7);

 if (VAR_12 < 0) {
  FUNC_4(*VAR_6);
  return VAR_12;
 }

 VAR_11 = (git_proto_stream *) *VAR_6;
 if ((VAR_12 = FUNC_5(VAR_11->io)) < 0) {
  FUNC_4(*VAR_6);
  return VAR_12;
 }

 VAR_4->current_stream = VAR_11;

 return 0;
}
