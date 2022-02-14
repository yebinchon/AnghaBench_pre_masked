
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {unsigned char* packet; } ;
struct cytp_report_data {int contact_cnt; int tap; int left; int right; int middle; TYPE_1__* contacts; } ;
struct cytp_data {int mode; } ;
struct TYPE_2__ {unsigned char x; unsigned char y; unsigned char z; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (struct cytp_report_data*,int ,int) ;
 int FUNC_2 (struct psmouse*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_5,
    struct cytp_data *VAR_6, struct cytp_report_data *VAR_7)
{
 unsigned char *VAR_8 = VAR_5->packet;
 unsigned char VAR_9 = VAR_8[0];

 FUNC_1(VAR_7, 0, sizeof(struct cytp_report_data));

 VAR_7->contact_cnt = FUNC_0(VAR_9);
 VAR_7->tap = (VAR_9 & VAR_0) ? 1 : 0;

 if (VAR_7->contact_cnt == 1) {
  VAR_7->contacts[0].x =
   ((VAR_8[1] & 0x70) << 4) | VAR_8[2];
  VAR_7->contacts[0].y =
   ((VAR_8[1] & 0x07) << 8) | VAR_8[3];
  if (VAR_6->mode & VAR_3)
   VAR_7->contacts[0].z = VAR_8[4];

 } else if (VAR_7->contact_cnt >= 2) {
  VAR_7->contacts[0].x =
   ((VAR_8[1] & 0x70) << 4) | VAR_8[2];
  VAR_7->contacts[0].y =
   ((VAR_8[1] & 0x07) << 8) | VAR_8[3];
  if (VAR_6->mode & VAR_3)
   VAR_7->contacts[0].z = VAR_8[4];

  VAR_7->contacts[1].x =
   ((VAR_8[5] & 0xf0) << 4) | VAR_8[6];
  VAR_7->contacts[1].y =
   ((VAR_8[5] & 0x0f) << 8) | VAR_8[7];
  if (VAR_6->mode & VAR_3)
   VAR_7->contacts[1].z = VAR_7->contacts[0].z;
 }

 VAR_7->left = (VAR_9 & VAR_1) ? 1 : 0;
 VAR_7->right = (VAR_9 & VAR_2) ? 1 : 0;







 if (VAR_7->tap)
  VAR_7->left = 0;
 return 0;
}
