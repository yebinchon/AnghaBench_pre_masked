
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t length; } ;
struct TYPE_6__ {TYPE_1__ deltas; } ;
typedef TYPE_2__ git_diff ;


 int FUNC_0 (TYPE_2__ const*) ;

size_t FUNC_1(const git_diff *VAR_0)
{
 FUNC_0(VAR_0);
 return VAR_0->deltas.length;
}
