
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proxy_stream {int input; } ;
typedef int git_writestream ;


 int FUNC_0 (struct proxy_stream*) ;
 int FUNC_1 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(
 git_writestream *VAR_0, const char *VAR_1, size_t VAR_2)
{
 struct proxy_stream *VAR_3 = (struct proxy_stream *)VAR_0;
 FUNC_0(VAR_3);

 return FUNC_1(&VAR_3->input, VAR_1, VAR_2);
}
