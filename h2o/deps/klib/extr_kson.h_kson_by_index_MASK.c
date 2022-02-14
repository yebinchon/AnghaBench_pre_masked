
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__ const** child; } ;
struct TYPE_7__ {TYPE_1__ v; scalar_t__ n; } ;
typedef TYPE_2__ kson_node_t ;


 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static inline const kson_node_t *FUNC_1(const kson_node_t *VAR_0, long VAR_1)
{
 if (!FUNC_0(VAR_0)) return 0;
 return 0 <= VAR_1 && VAR_1 < (long)VAR_0->n? VAR_0->v.child[VAR_1] : 0;
}
