
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct artpec6_crypto_walk {scalar_t__ offset; TYPE_1__* sg; } ;
struct TYPE_3__ {scalar_t__ length; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (size_t,scalar_t__) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_3(struct artpec6_crypto_walk *VAR_0,
       size_t VAR_1)
{
 while (VAR_1 && VAR_0->sg) {
  size_t VAR_2;

  FUNC_0(VAR_0->offset > VAR_0->sg->length);

  VAR_2 = FUNC_1(VAR_1, (size_t)VAR_0->sg->length - VAR_0->offset);
  VAR_1 -= VAR_2;
  VAR_0->offset += VAR_2;
  if (VAR_0->offset == VAR_0->sg->length) {
   VAR_0->sg = FUNC_2(VAR_0->sg);
   VAR_0->offset = 0;
  }

 }

 return VAR_1;
}
