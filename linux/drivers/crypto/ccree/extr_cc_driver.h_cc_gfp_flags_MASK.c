
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int flags; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline gfp_t FUNC_0(struct crypto_async_request *VAR_3)
{
 return (VAR_3->flags & VAR_0) ?
   VAR_2 : VAR_1;
}
