
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_i2c {scalar_t__ curr_recv_count; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct cdns_i2c *VAR_1, bool VAR_2)
{
 return (VAR_2 &&
  (VAR_1->curr_recv_count == VAR_0 + 1));
}
