
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plot {int width; int separate_bars; int num_datasets; int min; int max; int * bar; int * data; scalar_t__ height; } ;


 struct plot VAR_0 ;

__attribute__((used)) static void
FUNC_0(int VAR_1, int VAR_2, int VAR_3)
{
 struct plot *VAR_4;

 VAR_4 = &VAR_0;
 VAR_4->width = VAR_1;
 VAR_4->height = 0;
 VAR_4->data = ((void*)0);
 VAR_4->bar = ((void*)0);
 VAR_4->separate_bars = VAR_2;
 VAR_4->num_datasets = VAR_3;
 VAR_4->min = 999e99;
 VAR_4->max = -999e99;
}
