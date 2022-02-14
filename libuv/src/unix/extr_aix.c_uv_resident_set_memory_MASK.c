
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pr_rssize; } ;
typedef TYPE_1__ psinfo_t ;
typedef int psinfo ;
typedef int pp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,TYPE_1__*,int) ;
 int FUNC_4 (char*,int,char*,unsigned long) ;
 int FUNC_5 (int) ;

int FUNC_6(size_t* VAR_3) {
  char VAR_4[64];
  psinfo_t VAR_5;
  int VAR_6;
  int VAR_7;

  FUNC_4(VAR_4, sizeof(VAR_4), "/proc/%lu/psinfo", (unsigned long) FUNC_1());

  VAR_7 = FUNC_2(VAR_4, VAR_0);
  if (VAR_7 == -1)
    return FUNC_0(VAR_2);


  VAR_6 = VAR_1;
  if (FUNC_3(VAR_7, &VAR_5, sizeof(VAR_5)) == sizeof(VAR_5)) {
    *VAR_3 = (size_t)VAR_5.pr_rssize * 1024;
    VAR_6 = 0;
  }
  FUNC_5(VAR_7);

  return VAR_6;
}
