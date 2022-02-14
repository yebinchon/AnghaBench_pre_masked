
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int,void*,size_t) ;

ssize_t FUNC_2(int VAR_4, void *VAR_5, size_t VAR_6)
{
 ssize_t VAR_7;
 if (VAR_6 > VAR_1)
     VAR_6 = VAR_1;
 while (1) {
  VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
  if (VAR_7 < 0) {
   if (VAR_3 == VAR_0)
    continue;
   if (FUNC_0(VAR_4, VAR_2, VAR_3))
    continue;
  }
  return VAR_7;
 }
}
