
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_sensor_common {int timestamp_ns_scale; } ;
typedef int int64_t ;



int64_t FUNC_0(struct hid_sensor_common *VAR_0,
         int64_t VAR_1)
{
 return VAR_0->timestamp_ns_scale * VAR_1;
}
