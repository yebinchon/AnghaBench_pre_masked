
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int size; int bita_avail; int reserved_size; } ;
struct TYPE_4__ {int lock; int ** keys; TYPE_3__ rsa_slots; } ;
struct TYPE_5__ {TYPE_1__ keys; } ;
typedef int RSA ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 size_t VAR_1 ;
 int FUNC_2 (int ,TYPE_3__*) ;
 size_t FUNC_3 (int ,int ,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static size_t FUNC_7(RSA *VAR_3)
{
    FUNC_5(&VAR_2.keys.lock);

    FUNC_2(VAR_0, &VAR_2.keys.rsa_slots);

    size_t VAR_4 = FUNC_3(VAR_2.keys.rsa_slots.bita_avail, VAR_2.keys.rsa_slots.reserved_size, 0);

    if (VAR_4 == VAR_1)
        FUNC_4("no available slot for key");


    FUNC_0(VAR_2.keys.rsa_slots.bita_avail, VAR_4);

    VAR_2.keys.rsa_slots.size++;
    VAR_2.keys.keys[VAR_4] = VAR_3;
    FUNC_1(VAR_3);
    FUNC_6(&VAR_2.keys.lock);

    return VAR_4;
}
