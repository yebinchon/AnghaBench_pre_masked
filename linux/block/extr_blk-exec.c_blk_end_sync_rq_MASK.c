
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct completion* end_io_data; } ;
struct completion {int dummy; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct completion*) ;

__attribute__((used)) static void FUNC_1(struct request *VAR_0, blk_status_t VAR_1)
{
 struct completion *VAR_2 = VAR_0->end_io_data;

 VAR_0->end_io_data = ((void*)0);





 FUNC_0(VAR_2);
}
