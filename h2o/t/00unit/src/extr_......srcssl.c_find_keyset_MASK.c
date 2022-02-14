
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct st_quic_keyset_t {scalar_t__ name; } ;
struct TYPE_3__ {size_t size; struct st_quic_keyset_t* entries; } ;
struct TYPE_4__ {TYPE_1__ keys; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static struct st_quic_keyset_t *FUNC_0(uint8_t VAR_1)
{
    size_t VAR_2;
    for (VAR_2 = 0; VAR_2 != VAR_0.keys.size; ++VAR_2) {
        struct st_quic_keyset_t *VAR_3 = VAR_0.keys.entries + VAR_2;
        if (VAR_3->name == VAR_1)
            return VAR_3;
    }
    return ((void*)0);
}
