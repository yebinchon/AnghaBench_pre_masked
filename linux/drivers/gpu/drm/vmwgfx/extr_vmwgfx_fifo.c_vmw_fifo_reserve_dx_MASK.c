
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_private {scalar_t__ cman; } ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (scalar_t__,int ,int,int,int *) ;
 void* FUNC_3 (struct vmw_private*,int ) ;

void *FUNC_4(struct vmw_private *VAR_1, uint32_t VAR_2,
     int VAR_3)
{
 void *VAR_4;

 if (VAR_1->cman)
  VAR_4 = FUNC_2(VAR_1->cman, VAR_2,
      VAR_3, 0, ((void*)0));
 else if (VAR_3 == VAR_0)
  VAR_4 = FUNC_3(VAR_1, VAR_2);
 else {
  FUNC_1(1, "Command buffer has not been allocated.\n");
  VAR_4 = ((void*)0);
 }
 if (FUNC_0(VAR_4))
  return ((void*)0);

 return VAR_4;
}
