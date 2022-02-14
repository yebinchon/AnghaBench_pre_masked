
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_adc_request {int channel; int result; struct cpcap_adc_conversion_tbl* conv_tbl; } ;
struct cpcap_adc_conversion_tbl {scalar_t__ conv_type; scalar_t__ conv_offset; int divider; int multiplier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct cpcap_adc_request *VAR_5)
{
 const struct cpcap_adc_conversion_tbl *VAR_6 = VAR_5->conv_tbl;
 int VAR_7 = VAR_5->channel;


 switch (VAR_5->channel) {
 case 128:
  VAR_7 = VAR_3;
  break;
 case 129:
  VAR_7 = VAR_2;
  break;
 default:
  break;
 }


 if (VAR_6[VAR_7].conv_type == VAR_4)
  return;


 if ((VAR_5->channel == VAR_0) ||
     (VAR_5->channel == VAR_1)) {
  VAR_5->result =
   FUNC_0(VAR_5->result);

  return;
 }


 VAR_5->result *= VAR_6[VAR_7].multiplier;
 if (VAR_6[VAR_7].divider == 0)
  return;
 VAR_5->result /= VAR_6[VAR_7].divider;
 VAR_5->result += VAR_6[VAR_7].conv_offset;
}
