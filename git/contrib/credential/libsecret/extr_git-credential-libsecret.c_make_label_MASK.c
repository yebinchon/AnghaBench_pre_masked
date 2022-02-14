
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {char* path; int host; int protocol; scalar_t__ port; } ;


 char* FUNC_0 (char*,int ,int ,char*,...) ;

__attribute__((used)) static char *FUNC_1(struct credential *VAR_0)
{
 if (VAR_0->port)
  return FUNC_0("Git: %s://%s:%hu/%s",
     VAR_0->protocol, VAR_0->host, VAR_0->port, VAR_0->path ? VAR_0->path : "");
 else
  return FUNC_0("Git: %s://%s/%s",
     VAR_0->protocol, VAR_0->host, VAR_0->path ? VAR_0->path : "");
}
