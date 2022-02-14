
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct cytp_data* private; } ;
struct cytp_data {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct psmouse*,int ,unsigned char*) ;
 int FUNC_1 (struct psmouse*,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_3)
{
 struct cytp_data *VAR_4 = VAR_3->private;
 unsigned char VAR_5[3];

 if (FUNC_0(VAR_3, VAR_2, VAR_5) < 0)
  return -1;

 VAR_4->mode = (VAR_4->mode & ~VAR_1)
   | VAR_0;
 FUNC_1(VAR_3, 5);

 return 0;
}
