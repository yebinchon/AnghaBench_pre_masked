
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct atmel_i2c_cmd {int count; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,size_t) ;

__attribute__((used)) static void FUNC_3(struct atmel_i2c_cmd *VAR_1)
{
 u8 *VAR_2 = &VAR_1->count;
 size_t VAR_3 = VAR_1->count - VAR_0;
 __le16 *VAR_4 = (__le16 *)(VAR_2 + VAR_3);

 *VAR_4 = FUNC_1(FUNC_0(FUNC_2(0, VAR_2, VAR_3)));
}
