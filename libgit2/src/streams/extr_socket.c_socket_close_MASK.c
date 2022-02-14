
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_stream ;
struct TYPE_2__ {int s; } ;
typedef TYPE_1__ git_socket_stream ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(git_stream *VAR_1)
{
 git_socket_stream *VAR_2 = (git_socket_stream *) VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->s);
 VAR_2->s = VAR_0;

 return VAR_3;
}
