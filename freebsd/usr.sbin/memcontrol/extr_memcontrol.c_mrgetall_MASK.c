
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_range_op {int* mo_arg; struct mem_range_desc* mo_desc; } ;
struct mem_range_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int,int) ;
 scalar_t__ FUNC_2 (int,int ,struct mem_range_op*) ;
 struct mem_range_desc* FUNC_3 (int) ;

__attribute__((used)) static struct mem_range_desc *
FUNC_4(int VAR_1, int *VAR_2)
{
    struct mem_range_desc *VAR_3;
    struct mem_range_op VAR_4;

    VAR_4.mo_arg[0] = 0;
    if (FUNC_2(VAR_1, VAR_0, &VAR_4))
 FUNC_0(1, "can't size range descriptor array");

    *VAR_2 = VAR_4.mo_arg[0];
    VAR_3 = FUNC_3(*VAR_2 * sizeof(struct mem_range_desc));
    if (VAR_3 == ((void*)0))
 FUNC_1(1, "can't allocate %zd bytes for %d range descriptors",
      *VAR_2 * sizeof(struct mem_range_desc), *VAR_2);

    VAR_4.mo_arg[0] = *VAR_2;
    VAR_4.mo_desc = VAR_3;
    if (FUNC_2(VAR_1, VAR_0, &VAR_4))
 FUNC_0(1, "can't fetch range descriptor array");

    return(VAR_3);
}
