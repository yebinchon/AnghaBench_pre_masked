
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_digital_port {int dummy; } ;
struct hdcp2_dp_errata_stream_type {int stream_type; int msg_id; } ;
typedef int stream_type_msg ;


 int VAR_0 ;
 int FUNC_0 (struct intel_digital_port*,struct hdcp2_dp_errata_stream_type*,int) ;

__attribute__((used)) static
int FUNC_1(struct intel_digital_port *VAR_1,
          bool VAR_2, u8 VAR_3)
{
 struct hdcp2_dp_errata_stream_type VAR_4;

 if (VAR_2)
  return 0;
 VAR_4.msg_id = VAR_0;
 VAR_4.stream_type = VAR_3;

 return FUNC_0(VAR_1, &VAR_4,
     sizeof(VAR_4));
}
