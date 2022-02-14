
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,void*,size_t,int ) ;

ssize_t FUNC_1(int VAR_4, void *VAR_5, size_t VAR_6, off_t VAR_7)
{
 ssize_t VAR_8;
 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;
 while (1) {
  VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
  if ((VAR_8 < 0) && (VAR_3 == VAR_0 || VAR_3 == VAR_1))
   continue;
  return VAR_8;
 }
}
