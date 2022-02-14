
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* key; } ;
typedef TYPE_3__ yoml_mapping_element_t ;
struct TYPE_7__ {int scalar; } ;
struct TYPE_6__ {TYPE_2__ data; } ;


 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const yoml_mapping_element_t *VAR_0, const yoml_mapping_element_t *VAR_1)
{
    size_t VAR_2 = FUNC_1(VAR_0->key->data.scalar), VAR_3 = FUNC_1(VAR_1->key->data.scalar);
    if (VAR_2 < VAR_3)
        return 1;
    else if (VAR_2 > VAR_3)
        return -1;

    return FUNC_0(VAR_0->key->data.scalar, VAR_1->key->data.scalar);
}
