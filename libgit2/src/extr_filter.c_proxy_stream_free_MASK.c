
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proxy_stream {int temp_buf; int input; } ;
typedef int git_writestream ;


 int FUNC_0 (struct proxy_stream*) ;
 int FUNC_1 (struct proxy_stream*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(git_writestream *VAR_0)
{
 struct proxy_stream *VAR_1 = (struct proxy_stream *)VAR_0;
 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->input);
 FUNC_2(&VAR_1->temp_buf);
 FUNC_1(VAR_1);
}
