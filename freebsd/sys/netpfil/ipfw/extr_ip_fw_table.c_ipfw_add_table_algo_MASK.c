
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tables_config {int algo_count; struct table_algo** def_algo; struct table_algo** algo; } ;
struct table_algo {scalar_t__ type; size_t idx; int flags; int ta_buf_size; } ;
struct ip_fw_chain {int dummy; } ;


 struct tables_config* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct table_algo* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct table_algo*,struct table_algo*,size_t) ;
 size_t FUNC_4 (int ,int) ;

int
FUNC_5(struct ip_fw_chain *VAR_7, struct table_algo *VAR_8, size_t VAR_9,
    int *VAR_10)
{
 struct tables_config *VAR_11;
 struct table_algo *VAR_12;
 size_t VAR_13;

 if (VAR_9 > sizeof(struct table_algo))
  return (VAR_0);


 VAR_13 = FUNC_4(VAR_8->ta_buf_size, sizeof(void *));
 if (VAR_13 > VAR_5)
  return (VAR_0);

 FUNC_1(VAR_8->type <= VAR_1,("Increase IPFW_TABLE_MAXTYPE"));


 VAR_12 = FUNC_2(sizeof(struct table_algo), VAR_2, VAR_3 | VAR_4);
 FUNC_3(VAR_12, VAR_8, VAR_9);

 VAR_11 = FUNC_0(VAR_7);

 FUNC_1(VAR_11->algo_count < 255, ("Increase algo array size"));

 VAR_11->algo[++VAR_11->algo_count] = VAR_12;
 VAR_12->idx = VAR_11->algo_count;


 if ((VAR_12->flags & VAR_6) != 0 &&
     VAR_11->def_algo[VAR_12->type] == ((void*)0))
  VAR_11->def_algo[VAR_12->type] = VAR_12;

 *VAR_10 = VAR_12->idx;

 return (0);
}
