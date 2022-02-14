
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_result_enable {unsigned long long random_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lev_copyexec_result_enable* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (unsigned long long,int) ;

int FUNC_2 (unsigned long long VAR_2, int VAR_3) {
  int VAR_4 = FUNC_1 (VAR_2, VAR_3);
  if (!VAR_4) {
    struct lev_copyexec_result_enable *VAR_5 = FUNC_0 (VAR_3 ? VAR_1 : VAR_0, sizeof (*VAR_5), 0);
    VAR_5->random_tag = VAR_2;
  }
  return VAR_4;
}
