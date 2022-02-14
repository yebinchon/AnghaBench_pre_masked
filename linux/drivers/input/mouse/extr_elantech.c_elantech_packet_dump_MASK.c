
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int packet; int pktsize; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct psmouse*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct psmouse *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, "PS/2 packet [%*ph]\n",
         VAR_1->pktsize, VAR_1->packet);
}
