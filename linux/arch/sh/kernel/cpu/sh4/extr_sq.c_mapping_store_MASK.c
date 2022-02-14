
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long,char*,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char const*,char*,unsigned long*,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(const char *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4 = 0, VAR_5 = 0;

 FUNC_3(VAR_2, "%lx %lx", &VAR_4, &VAR_5);
 if (!VAR_4)
  return -VAR_0;

 if (FUNC_0(VAR_5)) {
  int VAR_6 = FUNC_1(VAR_4, VAR_5, "Userspace", VAR_1);
  if (VAR_6 < 0)
   return VAR_6;
 } else
  FUNC_2(VAR_4);

 return VAR_3;
}
