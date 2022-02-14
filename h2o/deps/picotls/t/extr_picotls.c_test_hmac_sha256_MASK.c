
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int (* final ) (TYPE_1__*,int *,int ) ;int (* update ) (TYPE_1__*,char const*,int ) ;} ;
typedef TYPE_1__ ptls_hash_context_t ;
typedef int digest ;
struct TYPE_11__ {int hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_9__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_1__*,char const*,int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;
 int FUNC_8 (TYPE_1__*,char const*,int ) ;
 int FUNC_9 (TYPE_1__*,int *,int ) ;
 int FUNC_10 (TYPE_1__*,char const*,int ) ;
 int FUNC_11 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static void FUNC_12(void)
{

    const char *VAR_4 = "\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b", *VAR_5 = "Hi There",
               *VAR_6 =
                   "\xb0\x34\x4c\x61\xd8\xdb\x38\x53\x5c\xa8\xaf\xce\xaf\x0b\xf1\x2b\x88\x1d\xc2\x00\xc9\x83\x3d\xa7\x26\xe9\x37"
                   "\x6c\x2e\x32\xcf\xf7";
    uint8_t VAR_7[32];

    ptls_hash_context_t *VAR_8 =
        FUNC_4(FUNC_0(VAR_3, VAR_0)->hash, VAR_4, FUNC_5(VAR_4));

    FUNC_2(VAR_7, 0, sizeof(VAR_7));
    VAR_8->update(VAR_8, VAR_5, FUNC_5(VAR_5));
    VAR_8->final(VAR_8, VAR_7, VAR_2);
    FUNC_3(FUNC_1(VAR_7, VAR_6, 32) == 0);

    FUNC_2(VAR_7, 0, sizeof(VAR_7));
    VAR_8->update(VAR_8, VAR_5, FUNC_5(VAR_5));
    VAR_8->final(VAR_8, VAR_7, VAR_2);
    FUNC_3(FUNC_1(VAR_7, VAR_6, 32) == 0);

    FUNC_2(VAR_7, 0, sizeof(VAR_7));
    VAR_8->update(VAR_8, VAR_5, FUNC_5(VAR_5));
    VAR_8->final(VAR_8, VAR_7, VAR_1);
    FUNC_3(FUNC_1(VAR_7, VAR_6, 32) == 0);
}
