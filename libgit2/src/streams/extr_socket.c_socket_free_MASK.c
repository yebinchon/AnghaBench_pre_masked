
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_stream ;
struct TYPE_3__ {struct TYPE_3__* port; struct TYPE_3__* host; } ;
typedef TYPE_1__ git_socket_stream ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(git_stream *VAR_0)
{
 git_socket_stream *VAR_1 = (git_socket_stream *) VAR_0;

 FUNC_0(VAR_1->host);
 FUNC_0(VAR_1->port);
 FUNC_0(VAR_1);
}
