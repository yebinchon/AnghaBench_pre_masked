
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int base; } ;
struct TYPE_7__ {TYPE_1__ mimetype; } ;
struct TYPE_8__ {TYPE_2__ data; } ;
typedef TYPE_3__ h2o_mimemap_type_t ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(h2o_mimemap_type_t *VAR_0, h2o_mimemap_type_t *VAR_1)
{
    return FUNC_0(VAR_0->data.mimetype.base, VAR_0->data.mimetype.len, VAR_1->data.mimetype.base, VAR_1->data.mimetype.len);
}
