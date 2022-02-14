
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ last; scalar_t__ first; } ;
struct mv_cesa_engine {TYPE_1__ chain; } ;


 int FUNC_0 (struct mv_cesa_engine*,int ) ;
 int FUNC_1 (struct mv_cesa_engine*,int ) ;

__attribute__((used)) static int FUNC_2(struct mv_cesa_engine *VAR_0, u32 VAR_1)
{
 if (VAR_0->chain.first && VAR_0->chain.last)
  return FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_0, VAR_1);
}
