
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; struct alps_data* private; } ;
struct alps_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct psmouse*,int) ;
 scalar_t__ FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct psmouse*,int) ;
 scalar_t__ FUNC_3 (struct psmouse*,int,int) ;
 scalar_t__ FUNC_4 (struct psmouse*) ;
 int FUNC_5 (struct psmouse*) ;
 int FUNC_6 (struct psmouse*,int ) ;
 scalar_t__ FUNC_7 (struct ps2dev*,unsigned char*,int ) ;
 int FUNC_8 (struct psmouse*,char*) ;

__attribute__((used)) static int FUNC_9(struct psmouse *VAR_5)
{
 struct alps_data *VAR_6 = VAR_5->private;
 struct ps2dev *VAR_7 = &VAR_5->ps2dev;
 int VAR_8;
 unsigned char VAR_9[4];

 if ((VAR_6->flags & VAR_0) &&
     FUNC_6(VAR_5, VAR_1) == -VAR_2)
  goto error;

 if (FUNC_4(VAR_5) ||
     FUNC_1(VAR_5)) {
  FUNC_8(VAR_5, "Failed to enter absolute mode\n");
  goto error;
 }

 VAR_8 = FUNC_2(VAR_5, 0x0006);
 if (VAR_8 == -1)
  goto error;
 if (FUNC_0(VAR_5, VAR_8 | 0x01))
  goto error;

 VAR_8 = FUNC_2(VAR_5, 0x0007);
 if (VAR_8 == -1)
  goto error;
 if (FUNC_0(VAR_5, VAR_8 | 0x01))
  goto error;

 if (FUNC_2(VAR_5, 0x0144) == -1)
  goto error;
 if (FUNC_0(VAR_5, 0x04))
  goto error;

 if (FUNC_2(VAR_5, 0x0159) == -1)
  goto error;
 if (FUNC_0(VAR_5, 0x03))
  goto error;

 if (FUNC_2(VAR_5, 0x0163) == -1)
  goto error;
 if (FUNC_3(VAR_5, 0x0163, 0x03))
  goto error;

 if (FUNC_2(VAR_5, 0x0162) == -1)
  goto error;
 if (FUNC_3(VAR_5, 0x0162, 0x04))
  goto error;

 FUNC_5(VAR_5);


 VAR_9[0] = 0x64;
 if (FUNC_7(VAR_7, VAR_9, VAR_4) ||
     FUNC_7(VAR_7, ((void*)0), VAR_3)) {
  FUNC_8(VAR_5, "Failed to enable data reporting\n");
  return -1;
 }

 return 0;

error:





 FUNC_5(VAR_5);
 return -1;
}
