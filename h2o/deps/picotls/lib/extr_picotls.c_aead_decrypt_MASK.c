
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct st_ptls_traffic_protection_t {int seq; int aead; } ;
typedef int aad ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int ,void*,void const*,size_t,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct st_ptls_traffic_protection_t *VAR_2, void *VAR_3, size_t *VAR_4, const void *VAR_5, size_t VAR_6)
{
    uint8_t VAR_7[5];

    FUNC_0(VAR_7, VAR_6);
    if ((*VAR_4 = FUNC_1(VAR_2->aead, VAR_3, VAR_5, VAR_6, VAR_2->seq, VAR_7, sizeof(VAR_7))) == VAR_1)
        return VAR_0;
    ++VAR_2->seq;
    return 0;
}
