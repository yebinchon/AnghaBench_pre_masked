
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int point ;
struct TYPE_2__ {int* scalar; int point; int ctx; } ;
typedef TYPE_1__ bench_ecdh_data ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_3(void* VAR_1) {
    int VAR_2;
    bench_ecdh_data *VAR_3 = (bench_ecdh_data*)VAR_1;
    const unsigned char VAR_4[] = {
        0x03,
        0x54, 0x94, 0xc1, 0x5d, 0x32, 0x09, 0x97, 0x06,
        0xc2, 0x39, 0x5f, 0x94, 0x34, 0x87, 0x45, 0xfd,
        0x75, 0x7c, 0xe3, 0x0e, 0x4e, 0x8c, 0x90, 0xfb,
        0xa2, 0xba, 0xd1, 0x84, 0xf8, 0x83, 0xc6, 0x9f
    };


    VAR_3->ctx = FUNC_1(VAR_0);
    for (VAR_2 = 0; VAR_2 < 32; VAR_2++) {
        VAR_3->scalar[VAR_2] = VAR_2 + 1;
    }
    FUNC_0(FUNC_2(VAR_3->ctx, &VAR_3->point, VAR_4, sizeof(VAR_4)) == 1);
}
