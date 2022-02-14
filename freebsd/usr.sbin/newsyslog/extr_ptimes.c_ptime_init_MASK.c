
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptime_data {int did_adj4dst; } ;


 int VAR_0 ;
 struct ptime_data* FUNC_0 (int) ;
 int FUNC_1 (struct ptime_data*,struct ptime_data const*,int) ;
 int FUNC_2 (struct ptime_data*,char,int) ;

struct ptime_data *
FUNC_3(const struct ptime_data *VAR_1)
{
 struct ptime_data *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct ptime_data));
 if (VAR_1 != ((void*)0)) {
  FUNC_1(VAR_2, VAR_1, sizeof(struct ptime_data));
 } else {
  FUNC_2(VAR_2, '\0', sizeof(struct ptime_data));
  VAR_2->did_adj4dst = VAR_0;
 }

 return (VAR_2);
}
