
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xps2data {int lock; scalar_t__ base_address; } ;
struct serio {struct xps2data* port_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned char) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct serio *VAR_3, unsigned char VAR_4)
{
 struct xps2data *VAR_5 = VAR_3->port_data;
 unsigned long VAR_6;
 u32 VAR_7;
 int VAR_8 = -1;

 FUNC_2(&VAR_5->lock, VAR_6);


 VAR_7 = FUNC_0(VAR_5->base_address + VAR_0);
 if (!(VAR_7 & VAR_1)) {
  FUNC_1(VAR_5->base_address + VAR_2, VAR_4);
  VAR_8 = 0;
 }

 FUNC_3(&VAR_5->lock, VAR_6);

 return VAR_8;
}
