
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_hash_ctx ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__,void*,unsigned int) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_2(git_hash_ctx *VAR_3, int VAR_4, void *VAR_5, unsigned int VAR_6)
{
 while (VAR_6) {
  unsigned int VAR_7 = VAR_2;
  unsigned int VAR_8 = VAR_0 - VAR_7;
  if (VAR_8 > VAR_6)
   VAR_8 = VAR_6;
  FUNC_1(VAR_1 + VAR_7, VAR_5, VAR_8);
  VAR_7 += VAR_8;
  if (VAR_7 == VAR_0) {
   VAR_2 = VAR_7;
   if (FUNC_0(VAR_3, VAR_4))
    return -1;
   VAR_7 = 0;
  }
  VAR_2 = VAR_7;
  VAR_6 -= VAR_8;
  VAR_5 = (char *) VAR_5 + VAR_8;
 }
 return 0;
}
