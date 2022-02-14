
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct af_alg_sgl {scalar_t__ sg; scalar_t__ npages; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct af_alg_sgl *VAR_0,
      struct af_alg_sgl *VAR_1)
{
 FUNC_1(VAR_0->sg + VAR_0->npages - 1);
 FUNC_0(VAR_0->sg, VAR_0->npages + 1, VAR_1->sg);
}
