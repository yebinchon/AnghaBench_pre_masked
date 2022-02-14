
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* format_callback_data; int format_callback; int output_format; } ;
struct rev_info {TYPE_1__ diffopt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,struct rev_info*,char*) ;
 int FUNC_2 (struct rev_info*,int ) ;
 int FUNC_3 (int ,int *,struct rev_info*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_3 = 0;
 struct rev_info VAR_4;


 FUNC_1(VAR_2, &VAR_4, "");
 FUNC_3(0, ((void*)0), &VAR_4, ((void*)0));
 VAR_4.diffopt.output_format |=
  VAR_0;
 VAR_4.diffopt.format_callback = VAR_1;
 VAR_4.diffopt.format_callback_data = &VAR_3;
 FUNC_2(&VAR_4, 0);





 VAR_3 += FUNC_0();

 return VAR_3;
}
