
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int domainset_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int const*) ;
 int VAR_7 ;

void
FUNC_4(const domainset_t *VAR_8)
{
 if (VAR_2 == VAR_3) {
  FUNC_1(&VAR_4);
  VAR_7++;
  FUNC_0(&VAR_7, &VAR_4, VAR_1 | VAR_0,
      "pageprocwait", 1);
 } else {





  FUNC_1(&VAR_4);
  if (FUNC_3(VAR_8)) {
   VAR_6++;
   FUNC_0(&VAR_5, &VAR_4,
       VAR_1 | VAR_0, "vmwait", 0);
  } else
   FUNC_2(&VAR_4);
 }
}
