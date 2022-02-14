
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file; } ;
struct rev_info {TYPE_1__ diffopt; } ;
struct diff_options {int output_format; } ;
struct commit {int dummy; } ;
typedef int opts ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct diff_options*) ;
 int FUNC_1 (struct diff_options*) ;
 int FUNC_2 (int ,int ,char*,struct diff_options*) ;
 int FUNC_3 (struct diff_options*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct commit*) ;
 int FUNC_6 (struct diff_options*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_7(struct rev_info *VAR_2,
     struct commit *VAR_3, struct commit *VAR_4)
{
 struct diff_options VAR_5;

 FUNC_6(&VAR_5, &VAR_2->diffopt, sizeof(VAR_5));
 VAR_5.output_format = VAR_1 | VAR_0;
 FUNC_1(&VAR_5);

 FUNC_2(FUNC_5(VAR_3),
        FUNC_5(VAR_4),
        "", &VAR_5);
 FUNC_3(&VAR_5);
 FUNC_0(&VAR_5);

 FUNC_4(VAR_2->diffopt.file, "\n");
}
