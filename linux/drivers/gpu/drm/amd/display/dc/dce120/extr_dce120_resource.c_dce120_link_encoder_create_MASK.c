
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_encoder {int dummy; } ;
struct encoder_init_data {size_t transmitter; int channel; size_t hpd_source; } ;
struct dce110_link_encoder {struct link_encoder base; } ;


 int VAR_0 ;
 int FUNC_0 (struct dce110_link_encoder*,struct encoder_init_data const*,int *,int *,int *,int *) ;
 struct dce110_link_encoder* FUNC_1 (int,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static struct link_encoder *FUNC_2(
 const struct encoder_init_data *VAR_5)
{
 struct dce110_link_encoder *VAR_6 =
  FUNC_1(sizeof(struct dce110_link_encoder), VAR_0);

 if (!VAR_6)
  return ((void*)0);

 FUNC_0(VAR_6,
          VAR_5,
          &VAR_2,
          &VAR_4[VAR_5->transmitter],
          &VAR_1[VAR_5->channel - 1],
          &VAR_3[VAR_5->hpd_source]);

 return &VAR_6->base;
}
