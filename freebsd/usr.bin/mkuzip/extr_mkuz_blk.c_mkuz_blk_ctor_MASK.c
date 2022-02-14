
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mkuz_blk {size_t alen; int br_offset; } ;


 int VAR_0 ;
 struct mkuz_blk* FUNC_0 (int) ;

struct mkuz_blk *
FUNC_1(size_t VAR_1)
{
    struct mkuz_blk *VAR_2;

    VAR_2 = FUNC_0(sizeof(struct mkuz_blk) + VAR_1);
    VAR_2->alen = VAR_1;
    VAR_2->br_offset = VAR_0;
    return (VAR_2);
}
