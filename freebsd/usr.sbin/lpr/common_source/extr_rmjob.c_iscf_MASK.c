
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;



int
FUNC_0(const struct dirent *VAR_0)
{
 return(VAR_0->d_name[0] == 'c' && VAR_0->d_name[1] == 'f');
}
