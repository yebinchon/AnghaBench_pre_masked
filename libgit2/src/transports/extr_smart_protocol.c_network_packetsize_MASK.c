
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct network_packetsize_payload {scalar_t__ last_fired_bytes; int payload; TYPE_1__* stats; scalar_t__ (* callback ) (TYPE_1__*,int ) ;} ;
struct TYPE_2__ {scalar_t__ received_bytes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(size_t VAR_2, void *VAR_3)
{
 struct network_packetsize_payload *VAR_4 = (struct network_packetsize_payload*)VAR_3;


 VAR_4->stats->received_bytes += VAR_2;


 if ((VAR_4->stats->received_bytes - VAR_4->last_fired_bytes) > VAR_1) {
  VAR_4->last_fired_bytes = VAR_4->stats->received_bytes;

  if (VAR_4->callback(VAR_4->stats, VAR_4->payload))
   return VAR_0;
 }

 return 0;
}
