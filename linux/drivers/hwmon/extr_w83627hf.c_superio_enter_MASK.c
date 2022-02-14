
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627hf_sio_data {int sioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct w83627hf_sio_data *VAR_2)
{
 if (!FUNC_1(VAR_2->sioaddr, 2, VAR_0))
  return -VAR_1;

 FUNC_0(0x87, VAR_2->sioaddr);
 FUNC_0(0x87, VAR_2->sioaddr);

 return 0;
}
