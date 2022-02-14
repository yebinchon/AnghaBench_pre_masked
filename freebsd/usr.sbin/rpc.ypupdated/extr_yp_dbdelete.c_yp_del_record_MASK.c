
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* del ) (TYPE_1__*,int *,int ) ;int (* close ) (TYPE_1__*) ;} ;
typedef int DBT ;
typedef TYPE_1__ DB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(DB *VAR_3, DBT *VAR_4)
{
 int VAR_5;

 if ((VAR_5 = (VAR_3->del)(VAR_3,VAR_4,0))) {
  switch (VAR_5) {
  case 1:
   return(VAR_1);
   break;
  case -1:
  default:
   (void)(VAR_3->close)(VAR_3);
   return(VAR_0);
   break;
  }
 }

 return(VAR_2);
}
