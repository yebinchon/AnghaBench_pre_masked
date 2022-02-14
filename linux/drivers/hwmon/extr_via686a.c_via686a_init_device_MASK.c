
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct via686a_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct via686a_data*,int ) ;
 int FUNC_1 (struct via686a_data*) ;
 int FUNC_2 (struct via686a_data*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct via686a_data *VAR_4)
{
 u8 VAR_5;


 VAR_5 = FUNC_0(VAR_4, VAR_0);
 FUNC_2(VAR_4, VAR_0, (VAR_5 | 0x01) & 0x7F);


 VAR_5 = FUNC_0(VAR_4, VAR_1);
 FUNC_2(VAR_4, VAR_1,
       (VAR_5 & ~VAR_3)
       | VAR_2);


 FUNC_1(VAR_4);
}
