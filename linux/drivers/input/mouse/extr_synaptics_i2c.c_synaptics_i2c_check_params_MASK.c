
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synaptics_i2c {scalar_t__ scan_rate_param; scalar_t__ no_decel_param; scalar_t__ no_filter_param; scalar_t__ reduce_report_param; int client; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct synaptics_i2c*,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct synaptics_i2c *VAR_4)
{
 bool VAR_5 = 0;

 if (VAR_3 != VAR_4->scan_rate_param)
  FUNC_0(VAR_4, VAR_3);

 if (VAR_0 != VAR_4->no_decel_param) {
  VAR_4->no_decel_param = VAR_0;
  VAR_5 = 1;
 }

 if (VAR_1 != VAR_4->no_filter_param) {
  VAR_4->no_filter_param = VAR_1;
  VAR_5 = 1;
 }

 if (VAR_2 != VAR_4->reduce_report_param) {
  VAR_4->reduce_report_param = VAR_2;
  VAR_5 = 1;
 }

 if (VAR_5)
  FUNC_1(VAR_4->client);
}
