
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct poly1305_kat {int expected_tag_hex; int test_msg_len; int test_msg_hex; int test_key_hex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct poly1305_kat const*,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(const struct poly1305_kat *VAR_2,
    uint8_t VAR_3[__min_size(VAR_1)], char *VAR_4,
    uint8_t VAR_5[FUNC_1(VAR_0)])
{
 FUNC_0(VAR_2, VAR_2->test_key_hex, VAR_3, VAR_1);
 FUNC_0(VAR_2, VAR_2->test_msg_hex, VAR_4, VAR_2->test_msg_len);
 FUNC_0(VAR_2, VAR_2->expected_tag_hex, VAR_5, VAR_0);
}
