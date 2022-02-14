
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct time_amortization_table {int dummy; } ;
struct cache_uri {int * data; } ;
struct amortization_counter {scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct time_amortization_table* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct time_amortization_table*,scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cache_uri*) ;
 int**** VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_4 (struct cache_uri *VAR_7, int VAR_8) {



  int VAR_9;
  struct amortization_counter *VAR_10 = (struct amortization_counter *) &VAR_7->data[VAR_3];
  struct time_amortization_table *VAR_11 = VAR_2;
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {







    FUNC_1 (VAR_11, VAR_6 + VAR_9, VAR_8);
    FUNC_0 (VAR_11++, VAR_10++, VAR_8);
  }
  FUNC_3 (VAR_7);
}
