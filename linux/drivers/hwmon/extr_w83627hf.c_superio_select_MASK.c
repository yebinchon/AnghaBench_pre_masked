
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627hf_sio_data {scalar_t__ sioaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct w83627hf_sio_data *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, VAR_1->sioaddr);
 FUNC_0(VAR_2, VAR_1->sioaddr + 1);
}
