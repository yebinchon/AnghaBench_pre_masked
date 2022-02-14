
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int wait; } ;
struct psmouse {int state; int pktcnt; int packet; struct ps2dev ps2dev; } ;
typedef enum psmouse_state { ____Placeholder_psmouse_state } psmouse_state ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ps2dev*) ;
 int FUNC_5 (struct ps2dev*) ;
 int FUNC_6 (struct psmouse*,char*,unsigned char,int,unsigned char*) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct psmouse *VAR_3,
           unsigned char VAR_4,
           unsigned char *VAR_5)
{
 int VAR_6;
 struct ps2dev *VAR_7 = &VAR_3->ps2dev;
 enum psmouse_state VAR_8;
 int VAR_9;

 FUNC_4(VAR_7);

 VAR_8 = VAR_3->state;
 VAR_3->state = VAR_2;
 VAR_3->pktcnt = 0;

 VAR_9 = (VAR_4 == VAR_0) ? 8 : 3;
 FUNC_2(VAR_5, 0, VAR_9);

 VAR_6 = FUNC_0(VAR_3, 0xe9);
 if (VAR_6 < 0)
  goto out;

 FUNC_7(VAR_7->wait,
   (VAR_3->pktcnt >= VAR_9),
   FUNC_3(VAR_1));

 FUNC_1(VAR_5, VAR_3->packet, VAR_9);

 FUNC_6(VAR_3, "Command 0x%02x response data (0x): %*ph\n",
   VAR_4, VAR_9, VAR_5);

out:
 VAR_3->state = VAR_8;
 VAR_3->pktcnt = 0;

 FUNC_5(VAR_7);

 return VAR_6;
}
