
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mdc_chan {int chan_nr; int mdma; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct mdc_chan *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->mdma, VAR_0->chan_nr * 0x040 + VAR_1);
}
