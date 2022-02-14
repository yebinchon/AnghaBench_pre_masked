
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxt_data {int * input_dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mxt_data *VAR_0)
{
 if (VAR_0->input_dev) {
  FUNC_0(VAR_0->input_dev);
  VAR_0->input_dev = ((void*)0);
 }
}
