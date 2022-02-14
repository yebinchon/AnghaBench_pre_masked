
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecc_point {unsigned int ndigits; void* x; void* y; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct ecc_point*) ;
 struct ecc_point* FUNC_3 (int,int ) ;

__attribute__((used)) static struct ecc_point *FUNC_4(unsigned int VAR_1)
{
 struct ecc_point *VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);

 if (!VAR_2)
  return ((void*)0);

 VAR_2->x = FUNC_0(VAR_1);
 if (!VAR_2->x)
  goto err_alloc_x;

 VAR_2->y = FUNC_0(VAR_1);
 if (!VAR_2->y)
  goto err_alloc_y;

 VAR_2->ndigits = VAR_1;

 return VAR_2;

err_alloc_y:
 FUNC_1(VAR_2->x);
err_alloc_x:
 FUNC_2(VAR_2);
 return ((void*)0);
}
