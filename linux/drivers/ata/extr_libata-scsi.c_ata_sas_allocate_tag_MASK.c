
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int sas_last_tag; int sas_tag_allocated; TYPE_1__* host; } ;
struct TYPE_2__ {unsigned int n_tags; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int *) ;

int FUNC_2(struct ata_port *VAR_0)
{
 unsigned int VAR_1 = VAR_0->host->n_tags;
 unsigned int VAR_2, VAR_3;

 for (VAR_2 = 0, VAR_3 = VAR_0->sas_last_tag + 1; VAR_2 < VAR_1; VAR_2++, VAR_3++) {
  VAR_3 = VAR_3 < VAR_1 ? VAR_3 : 0;


  if (FUNC_0(VAR_3))
   continue;

  if (!FUNC_1(VAR_3, &VAR_0->sas_tag_allocated)) {
   VAR_0->sas_last_tag = VAR_3;
   return VAR_3;
  }
 }
 return -1;
}
