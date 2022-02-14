
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_encoder {int dummy; } ;
struct encoder_init_data {size_t transmitter; int channel; size_t hpd_source; } ;
struct dcn10_link_encoder {struct link_encoder base; } ;


 int VAR_0 ;
 int FUNC_0 (struct dcn10_link_encoder*,struct encoder_init_data const*,int *,int *,int *,int *,int *,int *) ;
 struct dcn10_link_encoder* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

struct link_encoder *FUNC_2(
 const struct encoder_init_data *VAR_7)
{
 struct dcn10_link_encoder *VAR_8 =
  FUNC_1(sizeof(struct dcn10_link_encoder), VAR_0);

 if (!VAR_8)
  return ((void*)0);

 FUNC_0(VAR_8,
          VAR_7,
          &VAR_4,
          &VAR_6[VAR_7->transmitter],
          &VAR_3[VAR_7->channel - 1],
          &VAR_5[VAR_7->hpd_source],
          &VAR_2,
          &VAR_1);

 return &VAR_8->base;
}
