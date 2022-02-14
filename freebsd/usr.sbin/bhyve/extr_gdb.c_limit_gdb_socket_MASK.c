
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int,unsigned long*,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (unsigned long*) ;

void
FUNC_5(int VAR_8)
{
 cap_rights_t VAR_9;
 unsigned long VAR_10[] = { VAR_7 };

 FUNC_0(&VAR_9, VAR_0, VAR_1, VAR_3, VAR_5,
     VAR_4, VAR_2);
 if (FUNC_2(VAR_8, &VAR_9) == -1)
  FUNC_3(VAR_6, "Unable to apply rights for sandbox");
 if (FUNC_1(VAR_8, VAR_10, FUNC_4(VAR_10)) == -1)
  FUNC_3(VAR_6, "Unable to apply rights for sandbox");
}
