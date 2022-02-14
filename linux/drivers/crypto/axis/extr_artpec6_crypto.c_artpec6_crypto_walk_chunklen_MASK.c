
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct artpec6_crypto_walk {scalar_t__ offset; TYPE_1__* sg; } ;
struct TYPE_2__ {scalar_t__ length; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(const struct artpec6_crypto_walk *VAR_0)
{
 FUNC_0(VAR_0->sg->length == VAR_0->offset);

 return VAR_0->sg->length - VAR_0->offset;
}
