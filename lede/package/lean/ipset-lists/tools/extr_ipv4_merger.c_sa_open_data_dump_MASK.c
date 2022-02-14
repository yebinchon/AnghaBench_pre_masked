
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sa_open_data {size_t tmp_length; TYPE_1__* tmp_base; } ;
struct TYPE_2__ {int end; int start; } ;


 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct sa_open_data *VAR_0)
{
 size_t VAR_1;
 char VAR_2[20], VAR_3[20];

 for (VAR_1 = 0; VAR_1 < VAR_0->tmp_length; VAR_1++) {
  FUNC_1("%s-%s\n", FUNC_0(VAR_0->tmp_base[VAR_1].start, VAR_2),
   FUNC_0(VAR_0->tmp_base[VAR_1].end, VAR_3));
 }
}
