
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct6775_data {int have_temp; int* temp_src; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct nct6775_data *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!(VAR_1->have_temp & FUNC_0(VAR_4)))
   continue;
  if (VAR_3 == VAR_1->temp_src[VAR_4]) {
   VAR_5 = VAR_4 + 1;
   break;
  }
 }

 return FUNC_1(VAR_2, "%d\n", VAR_5);
}
