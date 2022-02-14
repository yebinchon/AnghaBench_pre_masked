
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ct_request {int status; int fence; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct ct_request *VAR_1, u32 *VAR_2)
{
 int VAR_3;







 VAR_3 = FUNC_3(FUNC_0(FUNC_0(VAR_1->status)), 10);
 if (VAR_3)
  VAR_3 = FUNC_2(FUNC_0(FUNC_0(VAR_1->status)), 10);


 if (FUNC_1(VAR_3))
  FUNC_0("CT: fence %u err %d\n", VAR_1->fence, VAR_3);

 *VAR_2 = VAR_1->status;
 return VAR_3;
}
