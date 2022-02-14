
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ts_nbus {struct gpio_descs* data; } ;
struct gpio_descs {int info; int desc; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int,int ,int ,int *) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(struct ts_nbus *VAR_1, u8 VAR_2)
{
 struct gpio_descs *VAR_3 = VAR_1->data;
 FUNC_0(VAR_0, 8);

 VAR_0[0] = VAR_2;

 FUNC_1(8, VAR_3->desc, VAR_3->info, VAR_0);
}
