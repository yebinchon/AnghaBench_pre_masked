
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int ge_y; int gej_y; int ge_x; int gej_x; int fe_y; int fe_x; int scalar_y; int scalar_x; } ;
typedef TYPE_1__ bench_inv ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char const*,int) ;
 int FUNC_2 (int *,unsigned char const*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned char const*,int *) ;

void FUNC_6(void* VAR_0) {
    bench_inv *VAR_1 = (bench_inv*)VAR_0;

    static const unsigned char VAR_2[32] = {
        0x02, 0x03, 0x05, 0x07, 0x0b, 0x0d, 0x11, 0x13,
        0x17, 0x1d, 0x1f, 0x25, 0x29, 0x2b, 0x2f, 0x35,
        0x3b, 0x3d, 0x43, 0x47, 0x49, 0x4f, 0x53, 0x59,
        0x61, 0x65, 0x67, 0x6b, 0x6d, 0x71, 0x7f, 0x83
    };

    static const unsigned char VAR_3[32] = {
        0x82, 0x83, 0x85, 0x87, 0x8b, 0x8d, 0x81, 0x83,
        0x97, 0xad, 0xaf, 0xb5, 0xb9, 0xbb, 0xbf, 0xc5,
        0xdb, 0xdd, 0xe3, 0xe7, 0xe9, 0xef, 0xf3, 0xf9,
        0x11, 0x15, 0x17, 0x1b, 0x1d, 0xb1, 0xbf, 0xd3
    };

    FUNC_5(&VAR_1->scalar_x, VAR_2, ((void*)0));
    FUNC_5(&VAR_1->scalar_y, VAR_3, ((void*)0));
    FUNC_2(&VAR_1->fe_x, VAR_2);
    FUNC_2(&VAR_1->fe_y, VAR_3);
    FUNC_0(FUNC_3(&VAR_1->ge_x, &VAR_1->fe_x, 0));
    FUNC_0(FUNC_3(&VAR_1->ge_y, &VAR_1->fe_y, 1));
    FUNC_4(&VAR_1->gej_x, &VAR_1->ge_x);
    FUNC_4(&VAR_1->gej_y, &VAR_1->ge_y);
    FUNC_1(VAR_1->data, VAR_2, 32);
    FUNC_1(VAR_1->data + 32, VAR_3, 32);
}
