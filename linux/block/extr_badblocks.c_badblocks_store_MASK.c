
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct badblocks {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct badblocks*,unsigned long long,int,int) ;
 int FUNC_1 (char const*,char*,unsigned long long*,int*,char*) ;

ssize_t FUNC_2(struct badblocks *VAR_2, const char *VAR_3, size_t VAR_4,
   int VAR_5)
{
 unsigned long long VAR_6;
 int VAR_7;
 char VAR_8;

 switch (FUNC_1(VAR_3, "%llu %d%c", &VAR_6, &VAR_7, &VAR_8)) {
 case 3:
  if (VAR_8 != '\n')
   return -VAR_0;

 case 2:
  if (VAR_7 <= 0)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_0(VAR_2, VAR_6, VAR_7, !VAR_5))
  return -VAR_1;
 else
  return VAR_4;
}
