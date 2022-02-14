
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t engine_len; int* engine_id; int engine_boots; int engine_time; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_2 ;

void
FUNC_2(void)
{
 uint32_t VAR_3;
 char *VAR_4, VAR_5[2 * VAR_0 + 2];

 VAR_4 = VAR_5;
 for (VAR_3 = 0; VAR_3 < VAR_1.engine.engine_len; VAR_3++)
  VAR_4 += FUNC_1(VAR_4, "%.2x", VAR_1.engine.engine_id[VAR_3]);
 *VAR_4++ = '\0';

 FUNC_0(VAR_2, "Engine ID 0x%s\n", VAR_5);
 FUNC_0(VAR_2, "Boots : %u\t\tTime : %d\n",
     VAR_1.engine.engine_boots,
     VAR_1.engine.engine_time);
}
