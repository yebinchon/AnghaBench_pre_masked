
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct mfi_config_data {int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct mfi_config_data*) ;
 scalar_t__ FUNC_1 (int,int,struct mfi_config_data*,int,int *,size_t,int *) ;
 struct mfi_config_data* FUNC_2 (struct mfi_config_data*,int) ;

int
FUNC_3(int VAR_1, uint32_t VAR_2, struct mfi_config_data **VAR_3,
 uint8_t *VAR_4, size_t VAR_5)
{
 struct mfi_config_data *VAR_6;
 uint32_t VAR_7;
 int VAR_8;





 VAR_6 = ((void*)0);
 VAR_7 = 1024;
fetch:
 VAR_6 = FUNC_2(VAR_6, VAR_7);
 if (VAR_6 == ((void*)0))
  return (-1);
 if (FUNC_1(VAR_1, VAR_2, VAR_6,
     VAR_7, VAR_4, VAR_5, ((void*)0)) < 0) {
  VAR_8 = VAR_0;
  FUNC_0(VAR_6);
  VAR_0 = VAR_8;
  return (-1);
 }

 if (VAR_6->size > VAR_7) {
  VAR_7 = VAR_6->size;
  goto fetch;
 }

 *VAR_3 = VAR_6;
 return (0);
}
