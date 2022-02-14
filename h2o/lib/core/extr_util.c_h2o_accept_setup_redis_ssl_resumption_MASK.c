
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int destroy; int create; } ;
struct TYPE_4__ {void* prefix; int port; void* host; } ;
struct TYPE_5__ {unsigned int expiration; TYPE_1__ redis; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int *,char const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_2(const char *VAR_7, uint16_t VAR_8, unsigned VAR_9, const char *VAR_10)
{
    VAR_2.redis.host = FUNC_1(((void*)0), VAR_7, VAR_0);
    VAR_2.redis.port = VAR_8;
    VAR_2.redis.prefix = FUNC_1(((void*)0), VAR_10, VAR_0);
    VAR_2.expiration = VAR_9;

    FUNC_0(VAR_5, VAR_6);

    VAR_1.create = VAR_3;
    VAR_1.destroy = VAR_4;
}
