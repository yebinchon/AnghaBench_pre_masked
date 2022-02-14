
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct checkout_stream {int fd; scalar_t__ open; } ;
typedef int git_writestream ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(git_writestream *VAR_0)
{
 struct checkout_stream *VAR_1 = (struct checkout_stream *)VAR_0;
 FUNC_0(VAR_1 && VAR_1->open);

 VAR_1->open = 0;
 return FUNC_1(VAR_1->fd);
}
