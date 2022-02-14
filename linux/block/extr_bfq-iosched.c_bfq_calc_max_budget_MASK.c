
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct bfq_data {int bfq_timeout; scalar_t__ peak_rate; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct bfq_data *VAR_2)
{
 return (u64)VAR_2->peak_rate * VAR_1 *
  FUNC_0(VAR_2->bfq_timeout)>>VAR_0;
}
