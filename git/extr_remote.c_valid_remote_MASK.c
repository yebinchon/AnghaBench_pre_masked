
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int foreign_vcs; int url; } ;



__attribute__((used)) static int FUNC_0(const struct remote *VAR_0)
{
 return (!!VAR_0->url) || (!!VAR_0->foreign_vcs);
}
