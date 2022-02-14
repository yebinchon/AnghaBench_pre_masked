
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_request {int req_base; int (* cb ) (struct sec_bd_info*,int ) ;} ;
struct sec_bd_info {int dummy; } ;


 int FUNC_0 (struct sec_bd_info*,int ) ;

void FUNC_1(struct sec_bd_info *VAR_0, void *VAR_1)
{
 struct sec_request *VAR_2 = VAR_1;

 VAR_2->cb(VAR_0, VAR_2->req_base);
}
