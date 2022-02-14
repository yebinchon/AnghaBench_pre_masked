
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxt_data {int crc_completion; scalar_t__ config_crc; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxt_data*,int ,int ,int) ;
 int FUNC_1 (struct mxt_data*,int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mxt_data *VAR_1, u8 VAR_2, u8 VAR_3)
{




 VAR_1->config_crc = 0;
 FUNC_2(&VAR_1->crc_completion);

 FUNC_0(VAR_1, VAR_2, VAR_3, 1);





 FUNC_1(VAR_1, &VAR_1->crc_completion, VAR_0);
}
