
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {int m_data; int flags; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (TYPE_2__*,char***) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (char*) ;

PLAN *
FUNC_6(OPTION *VAR_4, char ***VAR_5)
{
 char *VAR_6;
 PLAN *VAR_7;
 mode_t *VAR_8;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 VAR_3 &= ~VAR_0;

 VAR_7 = FUNC_4(VAR_4);

 if (*VAR_6 == '-') {
  VAR_7->flags |= VAR_2;
  ++VAR_6;
 } else if (*VAR_6 == '+') {
  VAR_7->flags |= VAR_1;
  ++VAR_6;
 }

 if ((VAR_8 = FUNC_5(VAR_6)) == ((void*)0))
  FUNC_0(1, "%s: %s: illegal mode string", VAR_4->name, VAR_6);

 VAR_7->m_data = FUNC_2(VAR_8, 0);
 FUNC_1(VAR_8);
 return VAR_7;
}
