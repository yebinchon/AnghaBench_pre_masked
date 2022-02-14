
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_8__ {scalar_t__ type; int id_; } ;
struct TYPE_7__ {scalar_t__ type; int id_; } ;
struct TYPE_9__ {int weight_m1; int exclusive; TYPE_2__ dependency; TYPE_1__ prioritized; } ;
typedef TYPE_3__ h2o_http3_priority_frame_t ;
typedef int frame ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,size_t const*,size_t,char const**) ;
 size_t* FUNC_1 (size_t*,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
    h2o_mem_pool_t VAR_5;
    h2o_http3_priority_frame_t VAR_6;
    const char *VAR_7;
    uint8_t VAR_8[VAR_4];
    size_t VAR_9;
    int VAR_10;

    FUNC_3(&VAR_5);


    VAR_6.prioritized.type = VAR_2;
    VAR_6.prioritized.id_ = 12345;
    VAR_6.dependency.type = VAR_3;
    VAR_6.dependency.id_ = 67890;
    VAR_6.weight_m1 = 123;
    VAR_9 = FUNC_1(VAR_8, &VAR_6) - VAR_8;


    FUNC_5(VAR_9 == 1 + 1 + 1 + 2 + 1);
    FUNC_5(VAR_8[0] == VAR_0);
    FUNC_5(VAR_8[1] == VAR_9 - 2);
    FUNC_4(&VAR_6, 0, sizeof(VAR_6));
    VAR_10 = FUNC_0(&VAR_6, (const uint8_t *)VAR_8 + 2, VAR_9 - 2, &VAR_7);
    FUNC_5(VAR_10 == 0);
    FUNC_5(VAR_6.prioritized.type == VAR_2);
    FUNC_5(VAR_6.prioritized.id_ == 12345);
    FUNC_5(VAR_6.dependency.type == VAR_3);
    FUNC_5(VAR_6.dependency.id_ == 0);
    FUNC_5(!VAR_6.exclusive);
    FUNC_5(VAR_6.weight_m1 == 123);


    VAR_6.prioritized.type = VAR_1;
    VAR_6.prioritized.id_ = 12345;
    VAR_6.exclusive = 1;
    VAR_9 = FUNC_1(VAR_8, &VAR_6) - VAR_8;


    FUNC_5(VAR_9 == 1 + 1 + 1 + 2 + 1);
    FUNC_5(VAR_8[0] == VAR_0);
    FUNC_5(VAR_8[1] == VAR_9 - 2);
    FUNC_4(&VAR_6, 0, sizeof(VAR_6));
    VAR_10 = FUNC_0(&VAR_6, (const uint8_t *)VAR_8 + 2, VAR_9 - 2, &VAR_7);
    FUNC_5(VAR_10 == 0);
    FUNC_5(VAR_6.prioritized.type == VAR_1);
    FUNC_5(VAR_6.prioritized.id_ == 12345);
    FUNC_5(VAR_6.dependency.type == VAR_3);
    FUNC_5(VAR_6.dependency.id_ == 0);
    FUNC_5(VAR_6.exclusive);
    FUNC_5(VAR_6.weight_m1 == 123);


    VAR_6.dependency.type = VAR_2;
    VAR_6.dependency.id_ = 67890;
    VAR_6.exclusive = 0;
    VAR_9 = FUNC_1(VAR_8, &VAR_6) - VAR_8;


    FUNC_5(VAR_9 == 1 + 1 + 1 + 2 + 4 + 1);
    FUNC_5(VAR_8[0] == VAR_0);
    FUNC_5(VAR_8[1] == VAR_9 - 2);
    FUNC_4(&VAR_6, 0, sizeof(VAR_6));
    VAR_10 = FUNC_0(&VAR_6, (const uint8_t *)VAR_8 + 2, VAR_9 - 2, &VAR_7);
    FUNC_5(VAR_10 == 0);
    FUNC_5(VAR_6.prioritized.type == VAR_1);
    FUNC_5(VAR_6.prioritized.id_ == 12345);
    FUNC_5(VAR_6.dependency.type == VAR_2);
    FUNC_5(VAR_6.dependency.id_ == 67890);
    FUNC_5(!VAR_6.exclusive);
    FUNC_5(VAR_6.weight_m1 == 123);


    VAR_10 = FUNC_0(&VAR_6, (const uint8_t *)VAR_8 + 2, 1, &VAR_7);
    FUNC_5(VAR_10 != 0);
    VAR_10 = FUNC_0(&VAR_6, (const uint8_t *)VAR_8 + 2, VAR_9 - 1, &VAR_7);
    FUNC_5(VAR_10 != 0);

    FUNC_2(&VAR_5);
}
