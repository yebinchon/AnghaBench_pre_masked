
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(void)
{
 VAR_5 = FUNC_3(VAR_5, VAR_1);
 VAR_5 = FUNC_2(VAR_5, VAR_2);

 VAR_6 = FUNC_3(VAR_6, VAR_1);
 VAR_6 = FUNC_2(VAR_6, VAR_2);

 FUNC_0(&VAR_3);

 if (FUNC_1(&VAR_4)) {
  FUNC_4("Couldn't register ib_mad client\n");
  return -VAR_0;
 }

 return 0;
}
