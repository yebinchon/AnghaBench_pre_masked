
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct mapped_device*) ;
 int FUNC_1 (int ,int,unsigned long,unsigned long,int,char*,unsigned int) ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(struct mapped_device *VAR_2,
          unsigned VAR_3, char **VAR_4, bool VAR_5,
          char *VAR_6, unsigned VAR_7)
{
 int VAR_8;
 char VAR_9;
 unsigned long VAR_10 = 0, VAR_11 = VAR_1;

 if (VAR_3 != 2 && VAR_3 != 4)
  return -VAR_0;

 if (FUNC_2(VAR_4[1], "%d%c", &VAR_8, &VAR_9) != 1 || VAR_8 < 0)
  return -VAR_0;

 if (VAR_3 > 3) {
  if (FUNC_3(VAR_4[2], "-") &&
      FUNC_2(VAR_4[2], "%lu%c", &VAR_10, &VAR_9) != 1)
   return -VAR_0;
  if (FUNC_3(VAR_4[3], "-") &&
      FUNC_2(VAR_4[3], "%lu%c", &VAR_11, &VAR_9) != 1)
   return -VAR_0;
 }

 return FUNC_1(FUNC_0(VAR_2), VAR_8, VAR_10, VAR_11, VAR_5,
         VAR_6, VAR_7);
}
