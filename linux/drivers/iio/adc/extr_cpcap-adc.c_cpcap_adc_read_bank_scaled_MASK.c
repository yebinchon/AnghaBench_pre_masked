
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpcap_adc_request {int bank_index; int result; } ;
struct cpcap_adc {scalar_t__ vendor; int reg; } ;
struct TYPE_2__ {short cal_offset; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (struct cpcap_adc_request*) ;
 int FUNC_1 (struct cpcap_adc_request*) ;
 int FUNC_2 (int ,int,int*) ;

__attribute__((used)) static int FUNC_3(struct cpcap_adc *VAR_7,
          struct cpcap_adc_request *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 if (VAR_7->vendor == VAR_5) {
  VAR_10 = FUNC_2(VAR_7->reg, VAR_2,
        &VAR_9);
  if (VAR_10)
   return VAR_10;
  VAR_6[VAR_1].cal_offset =
   ((short)VAR_9 * -1) + 512;

  VAR_10 = FUNC_2(VAR_7->reg, VAR_3,
        &VAR_9);
  if (VAR_10)
   return VAR_10;
  VAR_6[VAR_0].cal_offset =
   ((short)VAR_9 * -1) + 512;
 }

 VAR_11 = VAR_4 + VAR_8->bank_index * 4;

 VAR_10 = FUNC_2(VAR_7->reg, VAR_11, &VAR_8->result);
 if (VAR_10)
  return VAR_10;

 VAR_8->result &= 0x3ff;
 FUNC_1(VAR_8);
 FUNC_0(VAR_8);

 return 0;
}
