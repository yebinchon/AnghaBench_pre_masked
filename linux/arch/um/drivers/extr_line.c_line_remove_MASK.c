
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct line*,int,char*,int *,char**) ;

int FUNC_1(struct line *VAR_1, unsigned int VAR_2, int VAR_3, char **VAR_4)
{
 if (VAR_3 >= VAR_2) {
  *VAR_4 = "Device number out of range";
  return -VAR_0;
 }
 return FUNC_0(VAR_1, VAR_3, "none", ((void*)0), VAR_4);
}
