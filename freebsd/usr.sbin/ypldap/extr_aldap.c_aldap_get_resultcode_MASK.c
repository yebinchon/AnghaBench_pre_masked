
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rescode; } ;
struct TYPE_4__ {TYPE_1__ res; } ;
struct aldap_message {TYPE_2__ body; } ;



int
FUNC_0(struct aldap_message *VAR_0)
{
 return VAR_0->body.res.rescode;
}
