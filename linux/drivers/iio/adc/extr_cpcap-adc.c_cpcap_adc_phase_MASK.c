
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_adc_request {int channel; int bank_index; scalar_t__ result; struct cpcap_adc_phasing_tbl* phase_tbl; struct cpcap_adc_conversion_tbl* conv_tbl; } ;
struct cpcap_adc_phasing_tbl {scalar_t__ multiplier; scalar_t__ divider; scalar_t__ min; scalar_t__ max; int offset; } ;
struct cpcap_adc_conversion_tbl {int align_offset; int cal_offset; } ;





 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cpcap_adc_request *VAR_1)
{
 const struct cpcap_adc_conversion_tbl *VAR_2 = VAR_1->conv_tbl;
 const struct cpcap_adc_phasing_tbl *VAR_3 = VAR_1->phase_tbl;
 int VAR_4 = VAR_1->channel;


 switch (VAR_1->channel) {
 case 129:
 case 128:
  VAR_4 = VAR_1->bank_index;
  VAR_1->result -= VAR_3[VAR_4].offset;
  VAR_1->result -= VAR_0;
  VAR_1->result *= VAR_3[VAR_4].multiplier;
  if (VAR_3[VAR_4].divider == 0)
   return;
  VAR_1->result /= VAR_3[VAR_4].divider;
  VAR_1->result += VAR_0;
  break;
 case 130:
  VAR_4 = VAR_1->bank_index;

 default:
  VAR_1->result += VAR_2[VAR_4].cal_offset;
  VAR_1->result += VAR_2[VAR_4].align_offset;
  VAR_1->result *= VAR_3[VAR_4].multiplier;
  if (VAR_3[VAR_4].divider == 0)
   return;
  VAR_1->result /= VAR_3[VAR_4].divider;
  VAR_1->result += VAR_3[VAR_4].offset;
  break;
 }

 if (VAR_1->result < VAR_3[VAR_4].min)
  VAR_1->result = VAR_3[VAR_4].min;
 else if (VAR_1->result > VAR_3[VAR_4].max)
  VAR_1->result = VAR_3[VAR_4].max;
}
