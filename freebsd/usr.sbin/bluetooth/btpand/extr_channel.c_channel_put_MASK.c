
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pkthdr_t ;
typedef int packet_t ;
struct TYPE_4__ {int fd; int oactive; int pktlist; int qlen; } ;
typedef TYPE_1__ channel_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;

void
FUNC_3(channel_t *VAR_2, packet_t *VAR_3)
{
 pkthdr_t *VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 == ((void*)0))
  return;

 VAR_2->qlen++;
 FUNC_0(&VAR_2->pktlist, VAR_4, VAR_1);

 if (!VAR_2->oactive)
  FUNC_1(VAR_2->fd, VAR_0, VAR_2);
}
