
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct number {scalar_t__ scale; int number; } ;


 int FUNC_0 (int ,scalar_t__) ;

void
FUNC_1(struct number *VAR_0, u_int VAR_1)
{

 FUNC_0(VAR_0->number, VAR_1 - VAR_0->scale);
 VAR_0->scale = VAR_1;
}
