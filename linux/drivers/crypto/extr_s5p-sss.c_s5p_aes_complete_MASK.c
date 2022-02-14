
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct ablkcipher_request {TYPE_1__ base; } ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(struct ablkcipher_request *VAR_0, int VAR_1)
{
 VAR_0->base.complete(&VAR_0->base, VAR_1);
}
