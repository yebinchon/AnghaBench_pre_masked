
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pr_rssize; } ;
typedef TYPE_1__ psinfo_t ;
typedef int psinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,TYPE_1__*,int) ;
 int FUNC_3 (int) ;

int FUNC_4(size_t* VAR_3) {
  psinfo_t VAR_4;
  int VAR_5;
  int VAR_6;

  VAR_6 = FUNC_1("/proc/self/psinfo", VAR_0);
  if (VAR_6 == -1)
    return FUNC_0(VAR_2);


  VAR_5 = VAR_1;
  if (FUNC_2(VAR_6, &VAR_4, sizeof(VAR_4)) == sizeof(VAR_4)) {
    *VAR_3 = (size_t)VAR_4.pr_rssize * 1024;
    VAR_5 = 0;
  }
  FUNC_3(VAR_6);

  return VAR_5;
}
