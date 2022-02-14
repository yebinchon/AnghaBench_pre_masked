
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {int m_data; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,int ,char*) ;
 int VAR_10 ;
 char* FUNC_1 (TYPE_2__*,char***) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;

PLAN *
FUNC_3(OPTION *VAR_11, char ***VAR_12)
{
 char *VAR_13;
 PLAN *VAR_14;
 mode_t VAR_15;

 VAR_13 = FUNC_1(VAR_11, VAR_12);
 if (VAR_13[0] != 'd')
  VAR_10 &= ~VAR_0;

 switch (VAR_13[0]) {
 case 'b':
  VAR_15 = VAR_2;
  break;
 case 'c':
  VAR_15 = VAR_3;
  break;
 case 'd':
  VAR_15 = VAR_4;
  break;
 case 'f':
  VAR_15 = VAR_7;
  break;
 case 'l':
  VAR_15 = VAR_6;
  break;
 case 'p':
  VAR_15 = VAR_5;
  break;
 case 's':
  VAR_15 = VAR_8;
  break;






 default:
  FUNC_0(1, "%s: %s: unknown type", VAR_11->name, VAR_13);
 }

 VAR_14 = FUNC_2(VAR_11);
 VAR_14->m_data = VAR_15;
 return VAR_14;
}
