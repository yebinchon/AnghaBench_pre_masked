
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {scalar_t__ pktcnt; struct cytp_data* private; } ;
struct cytp_data {scalar_t__ pkt_size; } ;
typedef int psmouse_ret_t ;


 int VAR_0 ;
 int FUNC_0 (struct psmouse*,int ) ;
 int FUNC_1 (struct psmouse*) ;

__attribute__((used)) static psmouse_ret_t FUNC_2(struct psmouse *VAR_1)
{
 struct cytp_data *VAR_2 = VAR_1->private;

 if (VAR_1->pktcnt >= VAR_2->pkt_size) {
  FUNC_0(VAR_1, 0);
  return VAR_0;
 }

 return FUNC_1(VAR_1);
}
