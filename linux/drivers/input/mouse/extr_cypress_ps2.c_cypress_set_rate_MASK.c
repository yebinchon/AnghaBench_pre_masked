
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int rate; int ps2dev; struct cytp_data* private; } ;
struct cytp_data {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*,int ) ;

__attribute__((used)) static void FUNC_1(struct psmouse *VAR_2, unsigned int VAR_3)
{
 struct cytp_data *VAR_4 = VAR_2->private;

 if (VAR_3 >= 80) {
  VAR_2->rate = 80;
  VAR_4->mode |= VAR_0;
 } else {
  VAR_2->rate = 40;
  VAR_4->mode &= ~VAR_0;
 }

 FUNC_0(&VAR_2->ps2dev, (unsigned char *)&VAR_2->rate,
      VAR_1);
}
