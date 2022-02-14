
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int parent; } ;
typedef TYPE_1__ git_subtransport ;
struct TYPE_10__ {int free; int write; int read; int * subtransport; } ;
typedef TYPE_2__ git_smart_subtransport_stream ;
struct TYPE_11__ {char const* cmd; TYPE_2__ parent; int io; int url; } ;
typedef TYPE_3__ git_proto_stream ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,char const*,char const*) ;

__attribute__((used)) static int FUNC_6(
 git_subtransport *VAR_4,
 const char *VAR_5,
 const char *VAR_6,
 const char *VAR_7,
 const char *VAR_8,
 git_smart_subtransport_stream **VAR_9)
{
 git_proto_stream *VAR_10;

 if (!VAR_9)
  return -1;

 VAR_10 = FUNC_2(1, sizeof(git_proto_stream));
 FUNC_0(VAR_10);

 VAR_10->parent.subtransport = &VAR_4->parent;
 VAR_10->parent.read = VAR_2;
 VAR_10->parent.write = VAR_3;
 VAR_10->parent.free = VAR_1;

 VAR_10->cmd = VAR_6;
 VAR_10->url = FUNC_4(VAR_5);

 if (!VAR_10->url) {
  FUNC_3(VAR_10);
  return -1;
 }

 if ((FUNC_5(&VAR_10->io, VAR_7, VAR_8)) < 0)
  return -1;

 FUNC_1(VAR_10->io, VAR_0, "git_stream");

 *VAR_9 = &VAR_10->parent;
 return 0;
}
