
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_client {int pid; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (struct agp_client*) ;
 struct agp_client* FUNC_1 (int,int ) ;

struct agp_client *FUNC_2(pid_t VAR_1)
{
 struct agp_client *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct agp_client), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->pid = VAR_1;
 FUNC_0(VAR_2);
 return VAR_2;
}
