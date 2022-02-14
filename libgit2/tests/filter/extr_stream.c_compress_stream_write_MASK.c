
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compress_stream {scalar_t__ mode; } ;
typedef int git_writestream ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct compress_stream*,char const*,size_t) ;
 int FUNC_1 (struct compress_stream*,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(git_writestream *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct compress_stream *VAR_4 = (struct compress_stream *)VAR_1;

 return (VAR_4->mode == VAR_0) ?
  FUNC_0(VAR_4, VAR_2, VAR_3) :
  FUNC_1(VAR_4, VAR_2, VAR_3);
}
