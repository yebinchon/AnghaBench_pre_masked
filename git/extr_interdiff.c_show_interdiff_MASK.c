
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct rev_info {int idiff_oid2; int idiff_oid1; int diffopt; } ;
struct diff_options {struct strbuf* output_prefix_data; int output_prefix; int output_format; } ;
typedef int opts ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct diff_options*) ;
 int FUNC_1 (struct diff_options*) ;
 int FUNC_2 (int ,int ,char*,struct diff_options*) ;
 int FUNC_3 (struct diff_options*) ;
 int VAR_2 ;
 int FUNC_4 (struct diff_options*,int *,int) ;
 int FUNC_5 (struct strbuf*,char,int) ;
 int FUNC_6 (struct strbuf*) ;

void FUNC_7(struct rev_info *VAR_3, int VAR_4)
{
 struct diff_options VAR_5;
 struct strbuf VAR_6 = VAR_1;

 FUNC_4(&VAR_5, &VAR_3->diffopt, sizeof(VAR_5));
 VAR_5.output_format = VAR_0;
 VAR_5.output_prefix = VAR_2;
 FUNC_5(&VAR_6, ' ', VAR_4);
 VAR_5.output_prefix_data = &VAR_6;
 FUNC_1(&VAR_5);

 FUNC_2(VAR_3->idiff_oid1, VAR_3->idiff_oid2, "", &VAR_5);
 FUNC_3(&VAR_5);
 FUNC_0(&VAR_5);

 FUNC_6(&VAR_6);
}
