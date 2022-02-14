
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int IOCStatus; } ;
struct TYPE_11__ {int Function; } ;
typedef TYPE_1__ MPI2_IOC_FACTS_REQUEST ;
typedef TYPE_2__ MPI2_IOC_FACTS_REPLY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int,TYPE_1__*,int,TYPE_2__*,int,int *,int ,int *,int ,int) ;
 int FUNC_5 (int,TYPE_1__*,int,TYPE_2__*,int,int *,int ,int ) ;

MPI2_IOC_FACTS_REPLY *
FUNC_6(int VAR_4)
{
 MPI2_IOC_FACTS_REPLY *VAR_5;
 MPI2_IOC_FACTS_REQUEST VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(sizeof(MPI2_IOC_FACTS_REPLY));
 if (VAR_5 == ((void*)0)) {
  VAR_3 = VAR_1;
  return (((void*)0));
 }

 FUNC_1(&VAR_6, sizeof(MPI2_IOC_FACTS_REQUEST));
 VAR_6.Function = VAR_2;


 VAR_7 = FUNC_4(VAR_4, &VAR_6, sizeof(MPI2_IOC_FACTS_REQUEST),
     VAR_5, sizeof(MPI2_IOC_FACTS_REPLY), ((void*)0), 0, ((void*)0), 0, 10);




 if (VAR_7) {
  FUNC_2(VAR_5);
  return (((void*)0));
 }

 if (!FUNC_0(VAR_5->IOCStatus)) {
  FUNC_2(VAR_5);
  VAR_3 = VAR_0;
  return (((void*)0));
 }
 return (VAR_5);
}
