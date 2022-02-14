
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_family; struct addrinfo* ai_next; } ;
typedef scalar_t__ sa_family_t ;



__attribute__((used)) static struct addrinfo *FUNC_0(struct addrinfo *VAR_0, sa_family_t VAR_1)
{
 while(VAR_0)
 {
  if(VAR_0->ai_family == VAR_1)
   return VAR_0;

  VAR_0 = VAR_0->ai_next;
 }

 return ((void*)0);
}
