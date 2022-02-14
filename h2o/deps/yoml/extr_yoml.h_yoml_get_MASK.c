
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t size; TYPE_1__* elements; } ;
struct TYPE_9__ {TYPE_2__ mapping; int scalar; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_3__ data; } ;
typedef TYPE_4__ yoml_t ;
struct TYPE_7__ {TYPE_4__* value; TYPE_4__* key; } ;


 scalar_t__ YOML_TYPE_MAPPING ;
 scalar_t__ YOML_TYPE_SCALAR ;
 scalar_t__ strcmp (int ,char const*) ;

__attribute__((used)) static inline yoml_t *yoml_get(yoml_t *node, const char *name)
{
    size_t i;

    if (node->type != YOML_TYPE_MAPPING)
        return ((void*)0);
    for (i = 0; i != node->data.mapping.size; ++i) {
        yoml_t *key = node->data.mapping.elements[i].key;
        if (key->type == YOML_TYPE_SCALAR && strcmp(key->data.scalar, name) == 0)
            return node->data.mapping.elements[i].value;
    }
    return ((void*)0);
}
