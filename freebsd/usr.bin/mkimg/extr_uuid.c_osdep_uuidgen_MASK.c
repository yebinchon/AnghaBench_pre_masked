
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef long long uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {int time_mid; int time_hi_and_version; int clock_seq_hi_and_reserved; int clock_seq_low; int* node; scalar_t__ time_low; } ;
typedef TYPE_1__ mkimg_uuid_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(mkimg_uuid_t *VAR_0)
{
 struct timeval VAR_1;
 uint64_t VAR_2 = 0x01B21DD213814000LL;
 u_int VAR_3;
 uint16_t VAR_4;

 if (FUNC_1(&VAR_1, ((void*)0)) == -1)
  FUNC_0();

 VAR_2 += (uint64_t)VAR_1.tv_sec * 10000000LL;
 VAR_2 += VAR_1.tv_usec * 10;

 VAR_0->time_low = (uint32_t)VAR_2;
 VAR_0->time_mid = (uint16_t)(VAR_2 >> 32);
 VAR_0->time_hi_and_version = (uint16_t)(VAR_2 >> 48) & 0xfff;
 VAR_0->time_hi_and_version |= 1 << 12;

 VAR_4 = FUNC_2();

 VAR_0->clock_seq_hi_and_reserved = (uint8_t)(VAR_4 >> 8) & 0x3f;
 VAR_0->clock_seq_low = (uint8_t)VAR_4;

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
  VAR_0->node[VAR_3] = (uint8_t)FUNC_2();
 VAR_0->node[0] |= 0x01;
}
