
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct salinfo_data_saved {unsigned int cpu; int cpu_event; scalar_t__ buffer; struct salinfo_data_saved* data_saved; } ;
struct salinfo_data {unsigned int cpu; int cpu_event; scalar_t__ buffer; struct salinfo_data* data_saved; } ;


 int FUNC_0 (struct salinfo_data_saved*) ;
 int FUNC_1 (unsigned int,int *) ;
 int VAR_0 ;
 struct salinfo_data_saved* VAR_1 ;
 int FUNC_2 (struct salinfo_data_saved*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4 = FUNC_0(VAR_1);
 struct salinfo_data *VAR_5;

 FUNC_3(&VAR_0);
 for (VAR_3 = 0, VAR_5 = VAR_1; VAR_3 < VAR_4; ++VAR_3, ++VAR_5) {
  struct salinfo_data_saved *VAR_6;
  int VAR_7 = FUNC_0(VAR_5->data_saved) - 1;

  for (VAR_6 = VAR_5->data_saved + VAR_7; VAR_7 >= 0;
       --VAR_7, --VAR_6) {
   if (VAR_6->buffer && VAR_6->cpu == VAR_2)
    FUNC_2(VAR_5, VAR_7);
  }
  FUNC_1(VAR_2, &VAR_5->cpu_event);
 }
 FUNC_4(&VAR_0);
 return 0;
}
