
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* sc_p ;
typedef int node_p ;
struct TYPE_6__ {scalar_t__ hook; } ;
struct TYPE_5__ {scalar_t__ hook; } ;
struct TYPE_7__ {TYPE_2__ right; TYPE_1__ left; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(node_p VAR_0)
{
 const sc_p VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->left.hook && VAR_1->right.hook)
  FUNC_1(VAR_1->left.hook, VAR_1->right.hook);

 return (0);
}
