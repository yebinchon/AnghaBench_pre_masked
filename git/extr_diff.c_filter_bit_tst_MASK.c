
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int filter; } ;


 int* VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(char VAR_1, const struct diff_options *VAR_2)
{
 return VAR_2->filter & VAR_0[(int) VAR_1];
}
