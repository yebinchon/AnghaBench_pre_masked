
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpets {unsigned long hp_tick_freq; } ;


 unsigned long FUNC_0 (unsigned long long,unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct hpets *VAR_0,
       unsigned long VAR_1)
{
 unsigned long long VAR_2;

 VAR_2 = VAR_0->hp_tick_freq + (VAR_1 >> 1);
 return FUNC_0(VAR_2, VAR_1);
}
