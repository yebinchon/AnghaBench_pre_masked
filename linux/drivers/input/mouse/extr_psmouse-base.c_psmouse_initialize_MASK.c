
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int (* set_scale ) (struct psmouse*,int ) ;int resolution; int (* set_resolution ) (struct psmouse*,int ) ;int rate; int (* set_rate ) (struct psmouse*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct psmouse*,int ) ;
 int FUNC_1 (struct psmouse*,int ) ;
 int FUNC_2 (struct psmouse*,int ) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_3)
{



 if (VAR_2 != VAR_0) {
  VAR_3->set_rate(VAR_3, VAR_3->rate);
  VAR_3->set_resolution(VAR_3, VAR_3->resolution);
  VAR_3->set_scale(VAR_3, VAR_1);
 }
}
