
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sis5595_data {int lock; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sis5595_data *VAR_2, u8 VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_2->lock);
 FUNC_3(VAR_3, VAR_2->addr + VAR_0);
 VAR_4 = FUNC_0(VAR_2->addr + VAR_1);
 FUNC_2(&VAR_2->lock);
 return VAR_4;
}
