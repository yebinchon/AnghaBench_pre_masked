
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct testvec_config {scalar_t__ iv_offset; scalar_t__ finalization_type; int req_flags; scalar_t__ nosimd; scalar_t__ iv_offset_relative_to_alignmask; TYPE_1__* dst_divs; TYPE_1__* src_divs; int * name; } ;
struct TYPE_4__ {scalar_t__ proportion_of_total; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static bool FUNC_3(const struct testvec_config *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5->name == ((void*)0))
  return 0;

 if (!FUNC_2(VAR_5->src_divs, FUNC_0(VAR_5->src_divs),
    &VAR_6))
  return 0;

 if (VAR_5->dst_divs[0].proportion_of_total) {
  if (!FUNC_2(VAR_5->dst_divs,
     FUNC_0(VAR_5->dst_divs), &VAR_6))
   return 0;
 } else {
  if (FUNC_1(VAR_5->dst_divs, 0, sizeof(VAR_5->dst_divs)))
   return 0;

 }

 if (VAR_5->iv_offset +
     (VAR_5->iv_offset_relative_to_alignmask ? VAR_2 : 0) >
     VAR_2 + 1)
  return 0;

 if ((VAR_6 & (VAR_3 | VAR_4)) &&
     VAR_5->finalization_type == VAR_1)
  return 0;

 if ((VAR_5->nosimd || (VAR_6 & VAR_4)) &&
     (VAR_5->req_flags & VAR_0))
  return 0;

 return 1;
}
