
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
typedef int git_stream ;
struct TYPE_2__ {int s; } ;
typedef TYPE_1__ git_socket_stream ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_2(git_stream *VAR_1, const char *VAR_2, size_t VAR_3, int VAR_4)
{
 git_socket_stream *VAR_5 = (git_socket_stream *) VAR_1;
 ssize_t VAR_6;

 VAR_0 = 0;

 if ((VAR_6 = FUNC_1(VAR_5->s, VAR_2, VAR_3, VAR_4)) < 0) {
  FUNC_0("error sending data");
  return -1;
 }

 return VAR_6;
}
