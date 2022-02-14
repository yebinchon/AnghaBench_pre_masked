
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int total; unsigned char* buffer; int* ihv; int found_collision; } ;
typedef TYPE_1__ SHA1_CTX ;


 int FUNC_0 (TYPE_1__*,char const*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int*) ;

int FUNC_2(unsigned char VAR_1[20], SHA1_CTX *VAR_2)
{
 uint32_t VAR_3 = VAR_2->total & 63;
 uint32_t VAR_4 = (VAR_3 < 56) ? (56 - VAR_3) : (120 - VAR_3);
 uint64_t VAR_5;
 FUNC_0(VAR_2, (const char*)(VAR_0), VAR_4);

 VAR_5 = VAR_2->total - VAR_4;
 VAR_5 <<= 3;
 VAR_2->buffer[56] = (unsigned char)(VAR_5 >> 56);
 VAR_2->buffer[57] = (unsigned char)(VAR_5 >> 48);
 VAR_2->buffer[58] = (unsigned char)(VAR_5 >> 40);
 VAR_2->buffer[59] = (unsigned char)(VAR_5 >> 32);
 VAR_2->buffer[60] = (unsigned char)(VAR_5 >> 24);
 VAR_2->buffer[61] = (unsigned char)(VAR_5 >> 16);
 VAR_2->buffer[62] = (unsigned char)(VAR_5 >> 8);
 VAR_2->buffer[63] = (unsigned char)(VAR_5);
 FUNC_1(VAR_2, (uint32_t*)(VAR_2->buffer));
 VAR_1[0] = (unsigned char)(VAR_2->ihv[0] >> 24);
 VAR_1[1] = (unsigned char)(VAR_2->ihv[0] >> 16);
 VAR_1[2] = (unsigned char)(VAR_2->ihv[0] >> 8);
 VAR_1[3] = (unsigned char)(VAR_2->ihv[0]);
 VAR_1[4] = (unsigned char)(VAR_2->ihv[1] >> 24);
 VAR_1[5] = (unsigned char)(VAR_2->ihv[1] >> 16);
 VAR_1[6] = (unsigned char)(VAR_2->ihv[1] >> 8);
 VAR_1[7] = (unsigned char)(VAR_2->ihv[1]);
 VAR_1[8] = (unsigned char)(VAR_2->ihv[2] >> 24);
 VAR_1[9] = (unsigned char)(VAR_2->ihv[2] >> 16);
 VAR_1[10] = (unsigned char)(VAR_2->ihv[2] >> 8);
 VAR_1[11] = (unsigned char)(VAR_2->ihv[2]);
 VAR_1[12] = (unsigned char)(VAR_2->ihv[3] >> 24);
 VAR_1[13] = (unsigned char)(VAR_2->ihv[3] >> 16);
 VAR_1[14] = (unsigned char)(VAR_2->ihv[3] >> 8);
 VAR_1[15] = (unsigned char)(VAR_2->ihv[3]);
 VAR_1[16] = (unsigned char)(VAR_2->ihv[4] >> 24);
 VAR_1[17] = (unsigned char)(VAR_2->ihv[4] >> 16);
 VAR_1[18] = (unsigned char)(VAR_2->ihv[4] >> 8);
 VAR_1[19] = (unsigned char)(VAR_2->ihv[4]);
 return VAR_2->found_collision;
}
