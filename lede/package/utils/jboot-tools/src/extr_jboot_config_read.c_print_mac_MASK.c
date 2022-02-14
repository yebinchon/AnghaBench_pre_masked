
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_header {scalar_t__ type; scalar_t__ id; int* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(struct data_header **VAR_2, int VAR_3)
{

 for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4]->type == VAR_0
      && VAR_2[VAR_4]->id == VAR_1) {
   int VAR_5;
   for (VAR_5 = 0; VAR_5 < 5; VAR_5++)
    FUNC_0("%02x:", VAR_2[VAR_4]->data[VAR_5]);
   FUNC_0("%02x\n", VAR_2[VAR_4]->data[VAR_5]);
  }

 }

}
