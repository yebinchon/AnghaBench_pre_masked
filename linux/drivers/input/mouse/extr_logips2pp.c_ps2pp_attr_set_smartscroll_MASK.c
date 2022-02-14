
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned int smartscroll; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,unsigned int*) ;
 int FUNC_1 (struct psmouse*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_1, void *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 > 1)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_5);
 VAR_1->smartscroll = VAR_5;
 return VAR_4;
}
