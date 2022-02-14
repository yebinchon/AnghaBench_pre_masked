
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entropy_store {size_t entropy_count; TYPE_1__* poolinfo; int pull; } ;
struct TYPE_2__ {size_t poolfracbits; } ;


 int VAR_0 ;
 int FUNC_0 (struct entropy_store*,size_t) ;

__attribute__((used)) static void FUNC_1(struct entropy_store *VAR_1, size_t VAR_2)
{
 if (!VAR_1->pull ||
     VAR_1->entropy_count >= (VAR_2 << (VAR_0 + 3)) ||
     VAR_1->entropy_count > VAR_1->poolinfo->poolfracbits)
  return;

 FUNC_0(VAR_1, VAR_2);
}
