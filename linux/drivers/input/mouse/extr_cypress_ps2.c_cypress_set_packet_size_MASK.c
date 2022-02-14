
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct cytp_data* private; } ;
struct cytp_data {unsigned int pkt_size; } ;



__attribute__((used)) static void FUNC_0(struct psmouse *VAR_0, unsigned int VAR_1)
{
 struct cytp_data *VAR_2 = VAR_0->private;
 VAR_2->pkt_size = VAR_1;
}
