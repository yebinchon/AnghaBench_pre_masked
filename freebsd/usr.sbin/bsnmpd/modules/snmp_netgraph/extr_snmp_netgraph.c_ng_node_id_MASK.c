
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nodeinfo {int id; } ;
struct ng_mesg {scalar_t__ data; } ;
typedef int ng_ID_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ng_mesg*) ;
 struct ng_mesg* FUNC_1 (char const*,int ,int ,int *,int ) ;

ng_ID_t
FUNC_2(const char *VAR_2)
{
 struct ng_mesg *VAR_3;
 ng_ID_t VAR_4;

 if ((VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1,
     ((void*)0), 0)) == ((void*)0))
  return (0);
 VAR_4 = ((struct nodeinfo *)(void *)VAR_3->data)->id;
 FUNC_0(VAR_3);
 return (VAR_4);
}
