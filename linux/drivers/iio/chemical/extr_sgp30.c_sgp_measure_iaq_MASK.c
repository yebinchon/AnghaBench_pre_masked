
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgp_data {int iaq_buffer_state; int iaq_buffer; int measure_iaq_cmd; scalar_t__ iaq_defval_skip_jiffies; scalar_t__ iaq_init_start_jiffies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sgp_data*,int ,int *,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sgp_data *VAR_6)
{
 int VAR_7;

 bool VAR_8 = !FUNC_1(VAR_5, VAR_6->iaq_init_start_jiffies +
       VAR_6->iaq_defval_skip_jiffies);

 VAR_7 = FUNC_0(VAR_6, VAR_6->measure_iaq_cmd, &VAR_6->iaq_buffer,
      VAR_4, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6->iaq_buffer_state = VAR_1;

 if (VAR_8)
  return -VAR_0;

 VAR_6->iaq_buffer_state = VAR_2;

 return 0;
}
