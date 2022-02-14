
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {char* name; } ;



__attribute__((used)) static int FUNC_0(struct remote *VAR_0, void *VAR_1)
{
 const char **VAR_2 = VAR_1;

 if (*VAR_2)
  return -1;

 *VAR_2 = VAR_0->name;
 return 0;
}
