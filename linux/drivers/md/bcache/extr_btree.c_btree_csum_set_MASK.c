
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int* ptr; } ;
struct btree {TYPE_1__ key; } ;
struct bset {int dummy; } ;


 int FUNC_0 (int,void*,int) ;
 void* FUNC_1 (struct bset*) ;

__attribute__((used)) static uint64_t FUNC_2(struct btree *VAR_0, struct bset *VAR_1)
{
 uint64_t VAR_2 = VAR_0->key.ptr[0];
 void *VAR_3 = (void *) VAR_1 + 8, *VAR_4 = FUNC_1(VAR_1);

 VAR_2 = FUNC_0(VAR_2, VAR_3, VAR_4 - VAR_3);
 return VAR_2 ^ 0xffffffffffffffffULL;
}
