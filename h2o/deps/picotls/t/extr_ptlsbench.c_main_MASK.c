
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct utsname {int machine; int sysname; } ;
struct TYPE_2__ {int hash; int aead; int algo_name; int provider; } ;
typedef int OS ;
typedef int HW ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,char*,int,scalar_t__,int ,int ,int ,int ,int,int,scalar_t__*) ;
 size_t VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct utsname*) ;

int FUNC_7(int VAR_2, char **VAR_3)
{
    int VAR_4 = 0;
    uint64_t VAR_5 = 0xdeadbeef;
    uint64_t VAR_6 = 0;
    int VAR_7 = FUNC_0(&VAR_5);
    char VAR_8[128];
    char VAR_9[128];

    struct utsname VAR_10;






    VAR_8[0] = 0;
    VAR_9[0] = 0;
    if (FUNC_6(&VAR_10) == 0) {
        if (FUNC_5(VAR_10.sysname) + 1 < sizeof(VAR_8)){
            FUNC_3(VAR_8, VAR_10.sysname);
        }
        if (FUNC_5(VAR_10.machine) + 1 < sizeof(VAR_9)){
            FUNC_3(VAR_9, VAR_10.machine);
        }
    }



    FUNC_2("OS, HW, bits, mode, 10M ops, provider, version, algorithm, N, L, encrypt us, decrypt us, encrypt mbps, decrypt mbps,\n");


    for (size_t VAR_11 = 0; VAR_4 == 0 && VAR_11 < VAR_1; VAR_11++) {
        VAR_4 = FUNC_1(VAR_8, VAR_9, VAR_7, VAR_5, VAR_0[VAR_11].provider, VAR_0[VAR_11].algo_name, VAR_0[VAR_11].aead, VAR_0[VAR_11].hash, 1000,
                             1500, &VAR_6);
    }



    if (VAR_6 == 0){
       FUNC_2("Unexpected value of test sum s = %llx\n", (unsigned long long)VAR_6);
    }

    return VAR_4;
}
