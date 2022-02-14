
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct cytp_data* private; } ;
struct cytp_data {int tp_width; int tp_high; int tp_max_abs_x; int tp_max_abs_y; unsigned char tp_min_pressure; unsigned char tp_max_pressure; int tp_res_x; int tp_res_y; int tp_metrics_supported; } ;
typedef int param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 scalar_t__ FUNC_0 (struct psmouse*,int ,unsigned char*) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (struct psmouse*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_17)
{
 struct cytp_data *VAR_18 = VAR_17->private;
 unsigned char VAR_19[8];


 VAR_18->tp_width = VAR_4;
 VAR_18->tp_high = VAR_3;
 VAR_18->tp_max_abs_x = VAR_0;
 VAR_18->tp_max_abs_y = VAR_1;
 VAR_18->tp_min_pressure = VAR_6;
 VAR_18->tp_max_pressure = VAR_5;
 VAR_18->tp_res_x = VAR_18->tp_max_abs_x / VAR_18->tp_width;
 VAR_18->tp_res_y = VAR_18->tp_max_abs_y / VAR_18->tp_high;

 if (!VAR_18->tp_metrics_supported)
  return 0;

 FUNC_1(VAR_19, 0, sizeof(VAR_19));
 if (FUNC_0(VAR_17, VAR_2, VAR_19) == 0) {

  VAR_18->tp_max_abs_x = (VAR_19[1] << 8) | VAR_19[0];
  VAR_18->tp_max_abs_y = (VAR_19[3] << 8) | VAR_19[2];
  VAR_18->tp_min_pressure = VAR_19[4];
  VAR_18->tp_max_pressure = VAR_19[5];
 }

 if (!VAR_18->tp_max_pressure ||
     VAR_18->tp_max_pressure < VAR_18->tp_min_pressure ||
     !VAR_18->tp_width || !VAR_18->tp_high ||
     !VAR_18->tp_max_abs_x ||
     VAR_18->tp_max_abs_x < VAR_18->tp_width ||
     !VAR_18->tp_max_abs_y ||
     VAR_18->tp_max_abs_y < VAR_18->tp_high)
  return -VAR_7;

 VAR_18->tp_res_x = VAR_18->tp_max_abs_x / VAR_18->tp_width;
 VAR_18->tp_res_y = VAR_18->tp_max_abs_y / VAR_18->tp_high;
 return 0;
}
