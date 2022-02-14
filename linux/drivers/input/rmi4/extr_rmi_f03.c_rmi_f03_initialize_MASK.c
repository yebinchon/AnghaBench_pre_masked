
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ query_base_addr; } ;
struct device {int dummy; } ;
struct rmi_function {TYPE_1__ fd; int rmi_dev; struct device dev; } ;
struct f03_data {int device_count; int rx_queue_length; struct rmi_function* fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int ,scalar_t__,int*,size_t) ;

__attribute__((used)) static int FUNC_3(struct f03_data *VAR_4)
{
 struct rmi_function *VAR_5 = VAR_4->fn;
 struct device *VAR_6 = &VAR_5->dev;
 int VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 u8 VAR_10[VAR_2 * VAR_0];
 size_t VAR_11;

 VAR_7 = FUNC_1(VAR_5->rmi_dev, VAR_5->fd.query_base_addr, &VAR_9);
 if (VAR_7) {
  FUNC_0(VAR_6, "Failed to read query register (%d).\n", VAR_7);
  return VAR_7;
 }

 VAR_4->device_count = VAR_9 & VAR_2;
 VAR_8 = (VAR_9 >> VAR_1) &
    VAR_0;

 VAR_11 = VAR_4->device_count * VAR_8;





 if (VAR_11 < 1) {
  VAR_4->device_count = 1;
  VAR_4->rx_queue_length = 7;
 } else {
  VAR_7 = FUNC_2(VAR_5->rmi_dev, VAR_5->fd.query_base_addr + 1,
           VAR_10, VAR_11);
  if (VAR_7) {
   FUNC_0(VAR_6,
    "Failed to read second set of query registers (%d).\n",
    VAR_7);
   return VAR_7;
  }

  VAR_4->rx_queue_length = VAR_10[0] & VAR_3;
 }

 return 0;
}
