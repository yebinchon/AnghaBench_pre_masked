
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {scalar_t__ output_prefix; } ;


 struct diff_options* VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(struct diff_options *VAR_2)
{
 VAR_0 = VAR_2;


 if (VAR_2 && !VAR_2->output_prefix)
  VAR_2->output_prefix = VAR_1;
}
