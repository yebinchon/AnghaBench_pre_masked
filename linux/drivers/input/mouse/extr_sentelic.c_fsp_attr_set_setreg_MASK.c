
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct psmouse*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (struct psmouse*,int) ;
 size_t FUNC_2 (char*,int,unsigned int*) ;
 unsigned int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct psmouse *VAR_2, void *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6, VAR_7;
 char *VAR_8;
 ssize_t VAR_9;

 VAR_6 = FUNC_3(VAR_4, &VAR_8, 16);
 if (VAR_8 == VAR_4 || *VAR_8 != ' ' || VAR_6 > 0xff)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8 + 1, 16, &VAR_7);
 if (VAR_9)
  return VAR_9;

 if (VAR_7 > 0xff)
  return -VAR_0;

 if (FUNC_1(VAR_2, 1))
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_2, VAR_6, VAR_7) < 0 ? -VAR_1 : VAR_5;

 FUNC_1(VAR_2, 0);

 return VAR_5;
}
