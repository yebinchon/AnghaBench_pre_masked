
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wstr; scalar_t__ cstr; } ;
struct bwstring {scalar_t__ len; TYPE_1__ data; } ;
typedef int bwstring_iterator ;


 int VAR_0 ;

__attribute__((used)) static inline bwstring_iterator
FUNC_0(struct bwstring *VAR_1)
{

 return ((VAR_0 == 1) ?
     (bwstring_iterator) (VAR_1->data.cstr + VAR_1->len) :
     (bwstring_iterator) (VAR_1->data.wstr + VAR_1->len));
}
