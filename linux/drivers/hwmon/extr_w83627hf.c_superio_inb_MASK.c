
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627hf_sio_data {scalar_t__ sioaddr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_2(struct w83627hf_sio_data *VAR_0, int VAR_1)
{
 FUNC_1(VAR_1, VAR_0->sioaddr);
 return FUNC_0(VAR_0->sioaddr + 1);
}
