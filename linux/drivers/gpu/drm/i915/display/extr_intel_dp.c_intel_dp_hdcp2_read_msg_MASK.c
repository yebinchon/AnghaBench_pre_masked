
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int aux; } ;
struct intel_digital_port {TYPE_1__ dp; } ;
struct hdcp2_dp_msg_data {unsigned int offset; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,unsigned int,void*,int) ;
 struct hdcp2_dp_msg_data* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct intel_digital_port*) ;
 int FUNC_4 (struct intel_digital_port*,struct hdcp2_dp_msg_data const*) ;

__attribute__((used)) static
int FUNC_5(struct intel_digital_port *VAR_3,
       u8 VAR_4, void *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7;
 u8 *VAR_8 = VAR_5;
 ssize_t VAR_9, VAR_10, VAR_11;
 const struct hdcp2_dp_msg_data *VAR_12;

 VAR_12 = FUNC_2(VAR_4);
 if (!VAR_12)
  return -VAR_1;
 VAR_7 = VAR_12->offset;

 VAR_9 = FUNC_4(VAR_3, VAR_12);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_4 == VAR_2) {
  VAR_9 = FUNC_3(VAR_3);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_6 = VAR_9;
 }
 VAR_10 = VAR_6 - 1;


 VAR_8++;

 while (VAR_10) {
  VAR_11 = VAR_10 > VAR_0 ?
        VAR_0 : VAR_10;

  VAR_9 = FUNC_1(&VAR_3->dp.aux, VAR_7,
           (void *)VAR_8, VAR_11);
  if (VAR_9 < 0) {
   FUNC_0("msg_id %d, ret %zd\n", VAR_4, VAR_9);
   return VAR_9;
  }

  VAR_10 -= VAR_9;
  VAR_8 += VAR_9;
  VAR_7 += VAR_9;
 }
 VAR_8 = VAR_5;
 *VAR_8 = VAR_4;

 return VAR_6;
}
