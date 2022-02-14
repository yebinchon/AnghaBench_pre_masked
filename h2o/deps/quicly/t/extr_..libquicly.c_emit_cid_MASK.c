
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ len; int cid; } ;
typedef TYPE_1__ quicly_cid_t ;


 int FUNC_0 (int *,int ,scalar_t__) ;

__attribute__((used)) static inline uint8_t *FUNC_1(uint8_t *VAR_0, const quicly_cid_t *VAR_1)
{
    if (VAR_1->len != 0) {
        FUNC_0(VAR_0, VAR_1->cid, VAR_1->len);
        VAR_0 += VAR_1->len;
    }
    return VAR_0;
}
