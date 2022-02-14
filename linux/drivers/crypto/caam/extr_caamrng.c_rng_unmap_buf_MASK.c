
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct buf_data {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,scalar_t__,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct device *VAR_2, struct buf_data *VAR_3)
{
 if (VAR_3->addr)
  FUNC_0(VAR_2, VAR_3->addr, VAR_1,
     VAR_0);
}
