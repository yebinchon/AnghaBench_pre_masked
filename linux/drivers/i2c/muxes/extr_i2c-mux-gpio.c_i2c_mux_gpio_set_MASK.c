
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiomux {int gpios; int ngpios; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int*,int ) ;
 int FUNC_2 (int ,int ,int *,unsigned int*) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static void FUNC_3(const struct gpiomux *VAR_1, unsigned VAR_2)
{
 FUNC_1(VAR_0, FUNC_0(VAR_2));

 VAR_0[0] = VAR_2;

 FUNC_2(VAR_1->ngpios, VAR_1->gpios, ((void*)0), VAR_0);
}
