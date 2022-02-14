
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_manage_flash_t {int status; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int *,unsigned int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct rtas_manage_flash_t *VAR_0, unsigned int VAR_1)
{
 s32 VAR_2;

 do {
  VAR_2 = FUNC_1(FUNC_2("ibm,manage-flash-image"), 1, 1,
          ((void*)0), VAR_1);
 } while (FUNC_0(VAR_2));

 VAR_0->status = VAR_2;
}
