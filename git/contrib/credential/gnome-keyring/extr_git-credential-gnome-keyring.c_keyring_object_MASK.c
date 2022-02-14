
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {int path; int host; scalar_t__ port; } ;


 char* FUNC_0 (char*,int ,int ,...) ;

__attribute__((used)) static char *FUNC_1(struct credential *VAR_0)
{
 if (!VAR_0->path)
  return ((void*)0);

 if (VAR_0->port)
  return FUNC_0("%s:%hd/%s", VAR_0->host, VAR_0->port, VAR_0->path);

 return FUNC_0("%s/%s", VAR_0->host, VAR_0->path);
}
