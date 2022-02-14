
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecrdsa_ctx {int curve_oid; int curve; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void const*,size_t) ;

int FUNC_2(void *VAR_1, size_t VAR_2, unsigned char VAR_3,
         const void *VAR_4, size_t VAR_5)
{
 struct ecrdsa_ctx *VAR_6 = VAR_1;

 VAR_6->curve_oid = FUNC_1(VAR_4, VAR_5);
 if (!VAR_6->curve_oid)
  return -VAR_0;
 VAR_6->curve = FUNC_0(VAR_6->curve_oid);
 return 0;
}
