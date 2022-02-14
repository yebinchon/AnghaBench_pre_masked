
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dln2_adc_demux_table {unsigned int from; unsigned int length; unsigned int to; } ;
struct dln2_adc {int demux_count; struct dln2_adc_demux_table* demux; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dln2_adc *VAR_1,
 unsigned int VAR_2, unsigned int VAR_3,
 unsigned int VAR_4)
{
 struct dln2_adc_demux_table *VAR_5 = VAR_1->demux_count ?
  &VAR_1->demux[VAR_1->demux_count - 1] : ((void*)0);

 if (VAR_5 && VAR_5->from + VAR_5->length == VAR_2 &&
  VAR_5->to + VAR_5->length == VAR_3) {
  VAR_5->length += VAR_4;
 } else if (VAR_1->demux_count < VAR_0) {
  VAR_5 = &VAR_1->demux[VAR_1->demux_count++];
  VAR_5->from = VAR_2;
  VAR_5->to = VAR_3;
  VAR_5->length = VAR_4;
 }
}
