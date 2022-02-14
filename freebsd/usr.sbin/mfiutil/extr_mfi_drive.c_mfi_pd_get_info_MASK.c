
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct mfi_pd_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,int ,struct mfi_pd_info*,int,int *,int,int *) ;

int
FUNC_2(int VAR_1, uint16_t VAR_2, struct mfi_pd_info *VAR_3,
    uint8_t *VAR_4)
{
 uint8_t VAR_5[2];

 FUNC_0(&VAR_5[0], VAR_2);
 return (FUNC_1(VAR_1, VAR_0, VAR_3,
     sizeof(struct mfi_pd_info), VAR_5, 2, VAR_4));
}
