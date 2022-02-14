
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uma_hash {scalar_t__ uh_hashsize; int * uh_slab_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct uma_hash *VAR_4)
{
 if (VAR_4->uh_slab_hash == ((void*)0))
  return;
 if (VAR_4->uh_hashsize == VAR_2)
  FUNC_1(VAR_3, VAR_4->uh_slab_hash, ((void*)0), VAR_1);
 else
  FUNC_0(VAR_4->uh_slab_hash, VAR_0);
}
