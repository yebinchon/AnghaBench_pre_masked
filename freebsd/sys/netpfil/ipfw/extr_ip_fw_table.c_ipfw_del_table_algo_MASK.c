
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tables_config {int algo_count; struct table_algo** def_algo; struct table_algo** algo; } ;
struct table_algo {size_t type; } ;
struct ip_fw_chain {int dummy; } ;


 struct tables_config* FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct table_algo*,int ) ;

void
FUNC_3(struct ip_fw_chain *VAR_1, int VAR_2)
{
 struct tables_config *VAR_3;
 struct table_algo *VAR_4;

 VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_2 <= VAR_3->algo_count, ("algo idx %d out of range 1..%d",
     VAR_2, VAR_3->algo_count));

 VAR_4 = VAR_3->algo[VAR_2];
 FUNC_1(VAR_4 != ((void*)0), ("algo idx %d is NULL", VAR_2));

 if (VAR_3->def_algo[VAR_4->type] == VAR_4)
  VAR_3->def_algo[VAR_4->type] = ((void*)0);

 FUNC_2(VAR_4, VAR_0);
}
