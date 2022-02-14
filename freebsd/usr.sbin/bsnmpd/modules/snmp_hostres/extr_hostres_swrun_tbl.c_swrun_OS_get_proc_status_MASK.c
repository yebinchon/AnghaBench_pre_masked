
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int ki_stat; } ;
typedef enum SWRunStatus { ____Placeholder_SWRunStatus } SWRunStatus ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static enum SWRunStatus
FUNC_2(const struct kinfo_proc *VAR_5)
{

 FUNC_0(VAR_5 != ((void*)0));
 if(VAR_5 == ((void*)0)) {
  return (VAR_1);
 }





 switch (VAR_5->ki_stat) {

 case 130:
  return (VAR_2);

 case 129:
 case 133:
 case 131:
  return (VAR_3);

 case 128:
  return (VAR_1);

 case 134:
 case 132:
  return (VAR_4);

 default:
  FUNC_1(VAR_0,"Unknown process state: %d", VAR_5->ki_stat);
  return (VAR_1);
 }
}
