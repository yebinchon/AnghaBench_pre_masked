
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int filelist; } ;
struct fname {struct fname* name; } ;


 struct fname* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct fname*) ;
 int VAR_0 ;

void
FUNC_3(struct snmp_toolinfo *VAR_1)
{
 struct fname *VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 while ((VAR_2 = FUNC_0(&VAR_1->filelist)) != ((void*)0)) {
  FUNC_1(&VAR_1->filelist, VAR_0);
  if (VAR_2->name)
   FUNC_2(VAR_2->name);
  FUNC_2(VAR_2);
 }
}
