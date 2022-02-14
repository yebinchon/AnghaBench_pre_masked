
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {size_t number; } ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int ** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct parport *VAR_3)
{
 if (!VAR_1[VAR_3->number])
  return;

 FUNC_1(VAR_2, FUNC_0(VAR_0, VAR_3->number));
 VAR_1[VAR_3->number] = ((void*)0);
}
