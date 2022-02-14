
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int pktcnt; unsigned char* packet; struct cytp_data* private; } ;
struct cytp_data {int pkt_size; int mode; } ;
typedef int psmouse_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (struct psmouse*,int) ;
 int FUNC_2 (struct psmouse*,int) ;

__attribute__((used)) static psmouse_ret_t FUNC_3(struct psmouse *VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_5->pktcnt - 1;
 unsigned char *VAR_8 = VAR_5->packet;
 struct cytp_data *VAR_9 = VAR_5->private;

 if (VAR_7 < 0 || VAR_7 > VAR_9->pkt_size)
  return VAR_2;

 if (VAR_7 == 0 && (VAR_8[0] & 0xfc) == 0) {

  FUNC_1(VAR_5, 1);
  return VAR_3;
 }





 if (VAR_7 != 0)
  return VAR_4;





 if ((VAR_9->mode & VAR_1) == 0)
  return VAR_4;

 if ((VAR_8[0] & 0x08) == 0x08)
  return VAR_2;

 VAR_6 = FUNC_0(VAR_8[0]);
 if (VAR_9->mode & VAR_0)
  FUNC_2(VAR_5, VAR_6 == 2 ? 7 : 4);
 else
  FUNC_2(VAR_5, VAR_6 == 2 ? 8 : 5);

 return VAR_4;
}
