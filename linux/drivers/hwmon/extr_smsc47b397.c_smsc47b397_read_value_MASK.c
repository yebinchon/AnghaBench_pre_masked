
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smsc47b397_data {int lock; scalar_t__ addr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct smsc47b397_data *VAR_0, u8 VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->lock);
 FUNC_3(VAR_1, VAR_0->addr);
 VAR_2 = FUNC_0(VAR_0->addr + 1);
 FUNC_2(&VAR_0->lock);
 return VAR_2;
}
