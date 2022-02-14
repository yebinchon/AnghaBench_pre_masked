
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct block_device {int dummy; } ;


 struct request_queue* FUNC_0 (struct block_device*) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;

__attribute__((used)) static bool FUNC_2(struct block_device *VAR_0)
{
 struct request_queue *VAR_1 = FUNC_0(VAR_0);

 return (VAR_1 && FUNC_1(VAR_1));
}
