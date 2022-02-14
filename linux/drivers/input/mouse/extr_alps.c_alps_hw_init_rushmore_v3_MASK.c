
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
 scalar_t__ FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (struct psmouse*,int) ;
 scalar_t__ FUNC_2 (struct psmouse*,int,int) ;
 scalar_t__ FUNC_3 (struct psmouse*) ;
 int FUNC_4 (struct psmouse*) ;
 scalar_t__ FUNC_5 (struct psmouse*,int) ;
 int FUNC_6 (struct psmouse*,int ) ;
 int FUNC_7 (struct ps2dev*,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct psmouse *VAR_4)
{
 struct alps_data *VAR_5 = VAR_4->private;
 struct ps2dev *VAR_6 = &VAR_4->ps2dev;
 int VAR_7, VAR_8 = -1;

 if (VAR_5->flags & VAR_0) {
  VAR_7 = FUNC_6(VAR_4,
         VAR_1);
  if (VAR_7 == -VAR_2)
   goto error;
 }

 if (FUNC_3(VAR_4) ||
     FUNC_1(VAR_4, 0xc2d9) == -1 ||
     FUNC_2(VAR_4, 0xc2cb, 0x00))
  goto error;

 if (FUNC_5(VAR_4, 0xc2da))
  goto error;

 VAR_7 = FUNC_1(VAR_4, 0xc2c6);
 if (VAR_7 == -1)
  goto error;
 if (FUNC_0(VAR_4, VAR_7 & 0xfd))
  goto error;

 if (FUNC_2(VAR_4, 0xc2c9, 0x64))
  goto error;


 VAR_7 = FUNC_1(VAR_4, 0xc2c4);
 if (VAR_7 == -1)
  goto error;
 if (FUNC_0(VAR_4, VAR_7 | 0x02))
  goto error;

 FUNC_4(VAR_4);
 return FUNC_7(VAR_6, ((void*)0), VAR_3);

error:
 FUNC_4(VAR_4);
 return VAR_8;
}
