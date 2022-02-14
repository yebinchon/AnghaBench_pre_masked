
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scpi_sensor_info {int sensor_id; } ;
struct _scpi_sensor_info {int sensor_id; } ;
typedef int id ;
typedef int _info ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scpi_sensor_info*,struct _scpi_sensor_info*,int) ;
 int FUNC_3 (int ,int *,int,struct _scpi_sensor_info*,int) ;

__attribute__((used)) static int FUNC_4(u16 VAR_1, struct scpi_sensor_info *VAR_2)
{
 __le16 VAR_3 = FUNC_0(VAR_1);
 struct _scpi_sensor_info VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0, &VAR_3, sizeof(VAR_3),
    &VAR_4, sizeof(VAR_4));
 if (!VAR_5) {
  FUNC_2(VAR_2, &VAR_4, sizeof(*VAR_2));
  VAR_2->sensor_id = FUNC_1(VAR_4.sensor_id);
 }

 return VAR_5;
}
