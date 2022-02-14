
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct streebog_uint512 {int* qword; } ;



__attribute__((used)) static void FUNC_0(const struct streebog_uint512 *VAR_0,
    const struct streebog_uint512 *VAR_1,
    struct streebog_uint512 *VAR_2)
{
 VAR_2->qword[0] = VAR_0->qword[0] ^ VAR_1->qword[0];
 VAR_2->qword[1] = VAR_0->qword[1] ^ VAR_1->qword[1];
 VAR_2->qword[2] = VAR_0->qword[2] ^ VAR_1->qword[2];
 VAR_2->qword[3] = VAR_0->qword[3] ^ VAR_1->qword[3];
 VAR_2->qword[4] = VAR_0->qword[4] ^ VAR_1->qword[4];
 VAR_2->qword[5] = VAR_0->qword[5] ^ VAR_1->qword[5];
 VAR_2->qword[6] = VAR_0->qword[6] ^ VAR_1->qword[6];
 VAR_2->qword[7] = VAR_0->qword[7] ^ VAR_1->qword[7];
}
