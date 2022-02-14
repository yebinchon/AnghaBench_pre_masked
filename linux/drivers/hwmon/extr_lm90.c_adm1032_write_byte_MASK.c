
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int flags; int addr; int adapter; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ,int ,int ,int *) ;

__attribute__((used)) static inline s32 FUNC_1(struct i2c_client *VAR_3, u8 VAR_4)
{
 return FUNC_0(VAR_3->adapter, VAR_3->addr,
         VAR_3->flags & ~VAR_0,
         VAR_2, VAR_4, VAR_1, ((void*)0));
}
