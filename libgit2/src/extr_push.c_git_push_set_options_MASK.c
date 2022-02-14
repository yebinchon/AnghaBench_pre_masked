
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int proxy_opts; int custom_headers; int pb_parallelism; } ;
typedef TYPE_2__ git_push_options ;
struct TYPE_7__ {int * proxy; int * custom_headers; } ;
struct TYPE_9__ {TYPE_1__ connection; int pb_parallelism; } ;
typedef TYPE_3__ git_push ;


 int FUNC_0 (TYPE_2__ const*,int ,char*) ;
 int VAR_0 ;

int FUNC_1(git_push *VAR_1, const git_push_options *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -1;

 FUNC_0(VAR_2, VAR_0, "git_push_options");

 VAR_1->pb_parallelism = VAR_2->pb_parallelism;
 VAR_1->connection.custom_headers = &VAR_2->custom_headers;
 VAR_1->connection.proxy = &VAR_2->proxy_opts;

 return 0;
}
