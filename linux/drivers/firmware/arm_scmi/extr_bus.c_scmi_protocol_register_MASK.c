
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scmi_prot_init_fn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(int VAR_3, scmi_prot_init_fn_t VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_1);
 VAR_5 = FUNC_0(&VAR_2, VAR_4, VAR_3, VAR_3 + 1,
   VAR_0);
 FUNC_3(&VAR_1);
 if (VAR_5 != VAR_3)
  FUNC_1("unable to allocate SCMI idr slot, err %d\n", VAR_5);

 return VAR_5;
}
