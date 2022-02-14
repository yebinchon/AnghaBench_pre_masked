
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct TYPE_3__ {int * node; int clock_seq_low; int clock_seq_hi_and_reserved; int time_hi_and_version; int time_mid; int time_low; } ;
typedef TYPE_1__ mkimg_uuid_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(void *VAR_0, const mkimg_uuid_t *VAR_1)
{
 uint8_t *VAR_2 = VAR_0;
 u_int VAR_3;

 FUNC_1(VAR_2, VAR_1->time_low);
 FUNC_0(VAR_2 + 4, VAR_1->time_mid);
 FUNC_0(VAR_2 + 6, VAR_1->time_hi_and_version);
 VAR_2[8] = VAR_1->clock_seq_hi_and_reserved;
 VAR_2[9] = VAR_1->clock_seq_low;
 for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
  VAR_2[10 + VAR_3] = VAR_1->node[VAR_3];
}
