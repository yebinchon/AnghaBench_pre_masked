
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int n_rules; int static_len; scalar_t__ id; int map; } ;
struct ip_fw {scalar_t__ id; int set; int rulenum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ip_fw*) ;
 int FUNC_2 (int ,struct ip_fw**,int) ;
 int FUNC_3 (struct ip_fw**,int ) ;
 struct ip_fw** FUNC_4 (struct ip_fw_chain*,int,int) ;
 struct ip_fw** FUNC_5 (struct ip_fw_chain*,struct ip_fw**,int) ;

int
FUNC_6(struct ip_fw_chain *VAR_4, struct ip_fw *VAR_5,
    int VAR_6)
{
 struct ip_fw **VAR_7;

 VAR_7 = FUNC_4(VAR_4, 1, VAR_6);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 if (VAR_4->n_rules > 0)
  FUNC_2(VAR_4->map, VAR_7,
      VAR_4->n_rules * sizeof(struct ip_fw *));
 VAR_7[VAR_4->n_rules] = VAR_5;
 VAR_5->rulenum = VAR_1;
 VAR_5->set = VAR_3;
 VAR_5->id = VAR_4->id + 1;

 VAR_7 = FUNC_5(VAR_4, VAR_7, VAR_4->n_rules + 1);
 VAR_4->static_len += FUNC_1(VAR_5);
 FUNC_0(VAR_4);
 FUNC_3(VAR_7, VAR_2);
 return (0);
}
