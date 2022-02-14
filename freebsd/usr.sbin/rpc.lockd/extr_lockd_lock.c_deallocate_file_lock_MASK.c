
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct file_lock* n_bytes; } ;
struct TYPE_4__ {struct file_lock* n_bytes; } ;
struct TYPE_5__ {TYPE_1__ oh; } ;
struct file_lock {TYPE_3__ client_cookie; TYPE_2__ client; struct file_lock* addr; } ;


 int FUNC_0 (struct file_lock*) ;

void
FUNC_1(struct file_lock *VAR_0)
{
 FUNC_0(VAR_0->addr);
 FUNC_0(VAR_0->client.oh.n_bytes);
 FUNC_0(VAR_0->client_cookie.n_bytes);
 FUNC_0(VAR_0);
}
