
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_iter_set {scalar_t__ k; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct btree_iter_set VAR_0,
        struct btree_iter_set VAR_1)
{
 int64_t VAR_2 = FUNC_0(VAR_0.k, VAR_1.k);

 return VAR_2 ? VAR_2 > 0 : VAR_0.k < VAR_1.k;
}
