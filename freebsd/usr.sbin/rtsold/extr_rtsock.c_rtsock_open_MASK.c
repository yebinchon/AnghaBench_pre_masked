
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;

int
FUNC_4(void)
{
 cap_rights_t VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_3(VAR_2, VAR_3, 0);
 if (VAR_7 < 0)
  return (VAR_7);
 FUNC_0(&VAR_5, VAR_0, VAR_1);
 if (FUNC_1(VAR_7, &VAR_5) != 0) {
  VAR_6 = VAR_4;
  (void)FUNC_2(VAR_7);
  VAR_4 = VAR_4;
  return (-1);
 }
 return (VAR_7);
}
