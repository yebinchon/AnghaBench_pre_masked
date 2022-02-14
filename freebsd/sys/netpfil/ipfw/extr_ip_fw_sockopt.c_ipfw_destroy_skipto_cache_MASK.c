
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int * idxmap_back; int * idxmap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct ip_fw_chain *VAR_1)
{

 if (VAR_1->idxmap != ((void*)0))
  FUNC_0(VAR_1->idxmap, VAR_0);
 if (VAR_1->idxmap != ((void*)0))
  FUNC_0(VAR_1->idxmap_back, VAR_0);
}
