
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct rtas_ext_event_log_v6 {unsigned char* vendor_log; } ;
struct rtas_error_log {unsigned char* buffer; } ;
struct pseries_errorlog {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct pseries_errorlog*) ;
 int FUNC_1 (struct pseries_errorlog*) ;
 int FUNC_2 (struct rtas_error_log*) ;
 int FUNC_3 (struct rtas_ext_event_log_v6*) ;
 scalar_t__ FUNC_4 (struct rtas_ext_event_log_v6*) ;

struct pseries_errorlog *FUNC_5(struct rtas_error_log *VAR_2,
           uint16_t VAR_3)
{
 struct rtas_ext_event_log_v6 *VAR_4 =
  (struct rtas_ext_event_log_v6 *)VAR_2->buffer;
 struct pseries_errorlog *VAR_5;
 unsigned char *VAR_6, *VAR_7;
 uint32_t VAR_8 = FUNC_2(VAR_2);
 uint8_t VAR_9 = FUNC_4(VAR_4);
 uint32_t VAR_10 = FUNC_3(VAR_4);


 if (VAR_8 < sizeof(struct rtas_ext_event_log_v6) ||
     VAR_9 != VAR_1 ||
     VAR_10 != VAR_0)
  return ((void*)0);

 VAR_7 = VAR_2->buffer + VAR_8;
 VAR_6 = VAR_4->vendor_log;

 while (VAR_6 < VAR_7) {
  VAR_5 = (struct pseries_errorlog *)VAR_6;
  if (FUNC_0(VAR_5) == VAR_3)
   return VAR_5;
  VAR_6 += FUNC_1(VAR_5);
 }

 return ((void*)0);
}
