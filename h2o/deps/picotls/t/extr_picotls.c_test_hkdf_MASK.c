
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char const uint8_t ;
typedef int salt ;
struct TYPE_5__ {int digest_size; } ;
typedef TYPE_1__ ptls_hash_algorithm_t ;
typedef int okm ;
typedef int info ;
typedef int ikm ;
struct TYPE_6__ {TYPE_1__* hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char const*,int,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char const*,int ,int ) ;
 int FUNC_5 (char const*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    ptls_hash_algorithm_t *VAR_3 = FUNC_0(VAR_2, VAR_0)->hash;
    const char VAR_4[] = "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c";
    const char VAR_5[] = "\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b\x0b";
    const char VAR_6[] = "\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9";
    uint8_t VAR_7[VAR_1];
    uint8_t VAR_8[42];

    FUNC_4(VAR_3, VAR_7, FUNC_5(VAR_4, sizeof(VAR_4) - 1), FUNC_5(VAR_5, sizeof(VAR_5) - 1));
    FUNC_2(FUNC_1(VAR_7,
              "\x07\x77\x09\x36\x2c\x2e\x32\xdf\x0d\xdc\x3f\x0d\xc4\x7b\xba\x63\x90\xb6\xc7\x3b\xb5\x0f\x9c\x31\x22\xec\x84"
              "\x4a\xd7\xc2\xb3\xe5",
              32) == 0);

    FUNC_3(VAR_3, VAR_8, sizeof(VAR_8), FUNC_5(VAR_7, VAR_3->digest_size), FUNC_5(VAR_6, sizeof(VAR_6) - 1));
    FUNC_2(FUNC_1(VAR_8,
              "\x3c\xb2\x5f\x25\xfa\xac\xd5\x7a\x90\x43\x4f\x64\xd0\x36\x2f\x2a\x2d\x2d\x0a\x90\xcf\x1a\x5a\x4c\x5d\xb0\x2d"
              "\x56\xec\xc4\xc5\xbf\x34\x00\x72\x08\xd5\xb8\x87\x18\x58\x65",
              sizeof(VAR_8)) == 0);
}
