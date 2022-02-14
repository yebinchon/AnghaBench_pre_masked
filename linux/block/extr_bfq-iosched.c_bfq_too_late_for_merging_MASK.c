
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {scalar_t__ service_from_backlogged; scalar_t__ first_IO_time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct bfq_queue *VAR_1)
{
 return VAR_1->service_from_backlogged > 0 &&
  FUNC_0(VAR_1->first_IO_time +
           VAR_0);
}
