
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int netsrc_t ;
typedef int netadr_t ;
struct TYPE_5__ {int send; TYPE_1__* msgs; } ;
typedef TYPE_2__ loopback_t ;
struct TYPE_4__ {int datalen; int data; } ;


 int FUNC_0 (int ,void const*,int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_1 (netsrc_t VAR_2, int VAR_3, const void *VAR_4, netadr_t VAR_5)
{
 int VAR_6;
 loopback_t *VAR_7;

 VAR_7 = &VAR_1[VAR_2^1];

 VAR_6 = VAR_7->send & (VAR_0-1);
 VAR_7->send++;

 FUNC_0 (VAR_7->msgs[VAR_6].data, VAR_4, VAR_3);
 VAR_7->msgs[VAR_6].datalen = VAR_3;
}
