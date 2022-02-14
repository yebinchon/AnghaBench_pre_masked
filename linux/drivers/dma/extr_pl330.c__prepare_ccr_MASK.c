
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pl330_reqcfg {int brst_len; int brst_size; int scctl; int dcctl; int swap; scalar_t__ insnaccess; scalar_t__ nonsecure; scalar_t__ privileged; scalar_t__ dst_inc; scalar_t__ src_inc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static inline u32 FUNC_0(const struct pl330_reqcfg *VAR_15)
{
 u32 VAR_16 = 0;

 if (VAR_15->src_inc)
  VAR_16 |= VAR_11;

 if (VAR_15->dst_inc)
  VAR_16 |= VAR_4;


 if (VAR_15->privileged)
  VAR_16 |= VAR_13 | VAR_6;
 if (VAR_15->nonsecure)
  VAR_16 |= VAR_12 | VAR_5;
 if (VAR_15->insnaccess)
  VAR_16 |= VAR_10 | VAR_3;

 VAR_16 |= (((VAR_15->brst_len - 1) & 0xf) << VAR_7);
 VAR_16 |= (((VAR_15->brst_len - 1) & 0xf) << VAR_0);

 VAR_16 |= (VAR_15->brst_size << VAR_8);
 VAR_16 |= (VAR_15->brst_size << VAR_1);

 VAR_16 |= (VAR_15->scctl << VAR_9);
 VAR_16 |= (VAR_15->dcctl << VAR_2);

 VAR_16 |= (VAR_15->swap << VAR_14);

 return VAR_16;
}
