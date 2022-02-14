
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct intel_hdcp {int cp_irq_count; int cp_irq_count_cached; } ;
struct intel_dp {int aux; TYPE_1__* attached_connector; } ;
struct intel_digital_port {struct intel_dp dp; } ;
struct hdcp2_dp_msg_data {unsigned int offset; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct intel_hdcp hdcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int,void*,int) ;
 struct hdcp2_dp_msg_data* FUNC_2 (int ) ;

__attribute__((used)) static
int FUNC_3(struct intel_digital_port *VAR_2,
        void *VAR_3, size_t VAR_4)
{
 struct intel_dp *VAR_5 = &VAR_2->dp;
 struct intel_hdcp *VAR_6 = &VAR_5->attached_connector->hdcp;
 unsigned int VAR_7;
 u8 *VAR_8 = VAR_3;
 ssize_t VAR_9, VAR_10, VAR_11;
 const struct hdcp2_dp_msg_data *VAR_12;

 VAR_12 = FUNC_2(*VAR_8);
 if (!VAR_12)
  return -VAR_1;

 VAR_7 = VAR_12->offset;


 VAR_10 = VAR_4 - 1;
 VAR_8++;

 VAR_6->cp_irq_count_cached = FUNC_0(&VAR_6->cp_irq_count);

 while (VAR_10) {
  VAR_11 = VAR_10 > VAR_0 ?
    VAR_0 : VAR_10;

  VAR_9 = FUNC_1(&VAR_2->dp.aux,
     VAR_7, (void *)VAR_8, VAR_11);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_10 -= VAR_9;
  VAR_8 += VAR_9;
  VAR_7 += VAR_9;
 }

 return VAR_4;
}
