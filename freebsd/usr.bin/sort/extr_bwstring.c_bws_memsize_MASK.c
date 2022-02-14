
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwstring {size_t len; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;

size_t
FUNC_1(const struct bwstring *VAR_1)
{

 return ((VAR_0 == 1) ? (VAR_1->len + 2 + sizeof(struct bwstring)) :
     (FUNC_0(VAR_1->len + 1) + sizeof(struct bwstring)));
}
