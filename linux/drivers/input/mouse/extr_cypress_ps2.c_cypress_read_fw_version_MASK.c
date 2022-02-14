
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct cytp_data* private; } ;
struct cytp_data {unsigned char fw_version; int tp_metrics_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ FUNC_0 (struct psmouse*,int ,unsigned char*) ;
 int FUNC_1 (struct psmouse*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_4)
{
 struct cytp_data *VAR_5 = VAR_4->private;
 unsigned char VAR_6[3];

 if (FUNC_0(VAR_4, VAR_0, VAR_6))
  return -VAR_1;


 if (VAR_6[0] != 0x33 || VAR_6[1] != 0xCC)
  return -VAR_1;

 VAR_5->fw_version = VAR_6[2] & VAR_2;
 VAR_5->tp_metrics_supported = (VAR_6[2] & VAR_3) ? 1 : 0;





 if (VAR_5->fw_version >= 11)
  VAR_5->tp_metrics_supported = 0;

 FUNC_1(VAR_4, "cytp->fw_version = %d\n", VAR_5->fw_version);
 FUNC_1(VAR_4, "cytp->tp_metrics_supported = %d\n",
   VAR_5->tp_metrics_supported);

 return 0;
}
