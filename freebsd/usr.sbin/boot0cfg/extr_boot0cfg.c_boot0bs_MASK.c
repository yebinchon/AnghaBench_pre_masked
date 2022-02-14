
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct byte_pattern {int member_0; int member_1; int* member_2; int off; scalar_t__ len; int key; } ;
typedef int id1 ;
typedef int id0 ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const u_int8_t *VAR_1)
{

    static u_int8_t VAR_2[] = {0xfc, 0x31, 0xc0, 0x8e, 0xc0, 0x8e, 0xd8,
        0x8e, 0xd0, 0xbc, 0x00, 0x7c };

    static u_int8_t VAR_3[] = {'D', 'r', 'i', 'v', 'e', ' '};
    static struct byte_pattern VAR_4[] = {
        {0x0, sizeof(VAR_2), VAR_2},
        {0x1b2, sizeof(VAR_3), VAR_3},
        {1, 0, ((void*)0)},
        {0x0, sizeof(VAR_2), VAR_2},
        {0x1ae, sizeof(VAR_3), VAR_3},
        {2, 0, ((void*)0)},
        {0, 0, ((void*)0)},
    };
    struct byte_pattern *VAR_5 = VAR_4;

    for (; VAR_5->off || VAR_5->len; VAR_5++) {
 if (VAR_5->len == 0)
     break;
 if (!FUNC_0(VAR_1 + VAR_5->off, VAR_5->key, VAR_5->len))
     continue;
 while (VAR_5->len)
     VAR_5++;
    }
    VAR_0 = VAR_5->off;
    return VAR_5->off;
}
