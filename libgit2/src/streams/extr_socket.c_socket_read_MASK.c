
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
typedef int git_stream ;
struct TYPE_2__ {int s; } ;
typedef TYPE_1__ git_socket_stream ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,void*,size_t,int ) ;

__attribute__((used)) static ssize_t FUNC_2(git_stream *VAR_0, void *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;
 git_socket_stream *VAR_4 = (git_socket_stream *) VAR_0;

 if ((VAR_3 = FUNC_1(VAR_4->s, VAR_1, VAR_2, 0)) < 0)
  FUNC_0("error receiving socket data");

 return VAR_3;
}
