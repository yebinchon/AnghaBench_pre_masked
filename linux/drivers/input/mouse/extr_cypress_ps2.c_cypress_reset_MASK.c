
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct cytp_data* private; } ;
struct cytp_data {scalar_t__ mode; } ;


 int FUNC_0 (struct psmouse*) ;

__attribute__((used)) static void FUNC_1(struct psmouse *VAR_0)
{
 struct cytp_data *VAR_1 = VAR_0->private;

 VAR_1->mode = 0;

 FUNC_0(VAR_0);
}
