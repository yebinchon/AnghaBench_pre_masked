
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_ctx_binding_state {int dirty; } ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;




 int FUNC_1 (unsigned long,int *) ;
 unsigned long FUNC_2 (int *,unsigned long,unsigned long) ;
 int FUNC_3 (struct vmw_ctx_binding_state*) ;
 int FUNC_4 (struct vmw_ctx_binding_state*) ;
 int FUNC_5 (struct vmw_ctx_binding_state*) ;
 int FUNC_6 (struct vmw_ctx_binding_state*) ;

__attribute__((used)) static int FUNC_7(struct vmw_ctx_binding_state *VAR_1)
{
 int VAR_2 = 0;
 unsigned long VAR_3 = 0;

 while ((VAR_3 = FUNC_2(&VAR_1->dirty, VAR_0, VAR_3))
       < VAR_0) {

  switch (VAR_3) {
  case 130:
   VAR_2 = FUNC_4(VAR_1);
   break;
  case 131:
   VAR_2 = FUNC_3(VAR_1);
   break;
  case 129:
   VAR_2 = FUNC_5(VAR_1);
   break;
  case 128:
   VAR_2 = FUNC_6(VAR_1);
   break;
  default:
   FUNC_0();
  }
  if (VAR_2)
   return VAR_2;

  FUNC_1(VAR_3, &VAR_1->dirty);
  VAR_3++;
 }

 return 0;
}
