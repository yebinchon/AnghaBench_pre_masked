
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct mfi_pd_list {int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct mfi_pd_list*) ;
 scalar_t__ FUNC_1 (int,int ,struct mfi_pd_list*,int,int *,int ,int *) ;
 struct mfi_pd_list* FUNC_2 (struct mfi_pd_list*,int) ;

int
FUNC_3(int VAR_1, struct mfi_pd_list **VAR_2, uint8_t *VAR_3)
{
 struct mfi_pd_list *VAR_4;
 uint32_t VAR_5;





 VAR_4 = ((void*)0);
 VAR_5 = 1024;
fetch:
 VAR_4 = FUNC_2(VAR_4, VAR_5);
 if (VAR_4 == ((void*)0))
  return (-1);
 if (FUNC_1(VAR_1, VAR_0, VAR_4, VAR_5, ((void*)0),
     0, VAR_3) < 0) {
  FUNC_0(VAR_4);
  return (-1);
 }

 if (VAR_4->size > VAR_5) {
  VAR_5 = VAR_4->size;
  goto fetch;
 }

 *VAR_2 = VAR_4;
 return (0);
}
