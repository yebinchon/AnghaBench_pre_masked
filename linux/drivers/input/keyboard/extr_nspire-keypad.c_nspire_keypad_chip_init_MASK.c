
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nspire_keypad {unsigned long scan_interval; unsigned long row_delay; int int_mask; scalar_t__ reg_base; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct nspire_keypad *VAR_7)
{
 unsigned long VAR_8 = 0, VAR_9, VAR_10, VAR_11;

 VAR_9 = (FUNC_1(VAR_7->clk) / 1000000);
 if (VAR_9 == 0)
  VAR_9 = 1;

 VAR_10 = VAR_9 * VAR_7->scan_interval;
 FUNC_0(VAR_10 >= (1 << 16));
 VAR_10 &= 0xffff;

 VAR_11 = VAR_9 * VAR_7->row_delay;
 FUNC_0(VAR_11 >= (1 << 14));
 VAR_11 &= 0x3fff;

 VAR_8 |= 3 << 0;
 VAR_8 |= VAR_11 << 2;
 VAR_8 |= VAR_10 << 16;
 FUNC_2(VAR_8, VAR_7->reg_base + VAR_4);

 VAR_8 = (VAR_1 & 0xff) | (VAR_0 & 0xff)<<8;
 FUNC_2(VAR_8, VAR_7->reg_base + VAR_2);


 VAR_7->int_mask = 1 << 1;
 FUNC_2(VAR_7->int_mask, VAR_7->reg_base + VAR_3);



 FUNC_2(0, VAR_7->reg_base + VAR_5);

 FUNC_2(~0, VAR_7->reg_base + VAR_6);

 return 0;
}
