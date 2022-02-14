
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* codec; } ;
typedef TYPE_2__ snd_stream_t ;
struct TYPE_5__ {int (* close ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(snd_stream_t *VAR_0)
{
 VAR_0->codec->close(VAR_0);
}
