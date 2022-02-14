
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ planenum; int contents; struct TYPE_3__** children; } ;
typedef TYPE_1__ node_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0 (node_t *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (VAR_2->planenum == VAR_1)
  return VAR_2->contents;

 VAR_3 = FUNC_0(VAR_2->children[0]);
 VAR_4 = FUNC_0(VAR_2->children[1]);
 VAR_5 = VAR_3|VAR_4;



 if ( ! (VAR_3&VAR_0) || ! (VAR_4&VAR_0) )
  VAR_5 &= ~VAR_0;
 return VAR_5;
}
