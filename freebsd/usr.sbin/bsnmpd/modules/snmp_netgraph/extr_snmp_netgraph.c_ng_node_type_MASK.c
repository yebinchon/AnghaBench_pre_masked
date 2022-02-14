
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nodeinfo {int type; } ;
struct ng_mesg {scalar_t__ data; } ;
typedef int ng_ID_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ng_mesg*) ;
 struct ng_mesg* FUNC_1 (int ,int ,int ,int *,int ) ;
 int FUNC_2 (char*,int ) ;

ng_ID_t
FUNC_3(ng_ID_t VAR_2, char *VAR_3)
{
 struct ng_mesg *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_1,
     ((void*)0), 0)) == ((void*)0))
  return (0);
 FUNC_2(VAR_3, ((struct nodeinfo *)(void *)VAR_4->data)->type);
 FUNC_0(VAR_4);
 return (VAR_2);
}
