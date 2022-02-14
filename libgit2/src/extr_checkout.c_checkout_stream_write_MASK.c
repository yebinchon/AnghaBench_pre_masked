
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct checkout_stream {int path; int fd; } ;
typedef int git_writestream ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(
 git_writestream *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct checkout_stream *VAR_4 = (struct checkout_stream *)VAR_1;
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_4->fd, VAR_2, VAR_3)) < 0)
  FUNC_0(VAR_0, "could not write to '%s'", VAR_4->path);

 return VAR_5;
}
