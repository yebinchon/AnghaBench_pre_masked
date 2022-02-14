
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int * file; } ;
typedef int o ;
typedef int FILE ;


 int FUNC_0 (struct diff_options*,int ,int) ;
 int FUNC_1 (struct diff_options*,int,int,int) ;

void FUNC_2(FILE *VAR_0, int VAR_1,
   int VAR_2, int VAR_3)
{
 struct diff_options VAR_4;
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.file = VAR_0;

 FUNC_1(&VAR_4, VAR_1, VAR_2, VAR_3);
}
