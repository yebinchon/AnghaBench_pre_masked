
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_heap {scalar_t__ size; int p; } ;


 int VAR_0 ;
 int FUNC_0 (struct dn_heap*,int) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct dn_heap *VAR_1)
{
 if (VAR_1->size >0 )
  FUNC_1(VAR_1->p, VAR_0);
 FUNC_0(VAR_1, sizeof(*VAR_1) );
}
