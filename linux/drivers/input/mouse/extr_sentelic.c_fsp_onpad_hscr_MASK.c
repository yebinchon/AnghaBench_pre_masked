
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct fsp_data* private; } ;
struct fsp_data {int hscroll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct psmouse*,int ,int*) ;
 scalar_t__ FUNC_1 (struct psmouse*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_8, bool VAR_9)
{
 struct fsp_data *VAR_10 = VAR_8->private;
 int VAR_11, VAR_12;

 if (FUNC_0(VAR_8, VAR_6, &VAR_11))
  return -VAR_0;

 if (FUNC_0(VAR_8, VAR_7, &VAR_12))
  return -VAR_0;

 VAR_10->hscroll = VAR_9;

 if (VAR_9) {
  VAR_11 |= (VAR_4 | VAR_5);
  VAR_12 |= VAR_1;
 } else {
  VAR_11 &= ~VAR_4;
  VAR_12 &= ~(VAR_1 | VAR_2 | VAR_3);
 }

 if (FUNC_1(VAR_8, VAR_6, VAR_11))
  return -VAR_0;


 if (FUNC_1(VAR_8, VAR_7, VAR_12))
  return -VAR_0;

 return 0;
}
