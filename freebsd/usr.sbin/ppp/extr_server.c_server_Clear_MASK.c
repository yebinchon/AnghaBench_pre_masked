
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bundle {int dummy; } ;
struct TYPE_3__ {char* sockname; scalar_t__ mask; scalar_t__ port; } ;
struct TYPE_4__ {int fd; TYPE_1__ cfg; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct bundle*) ;

int
FUNC_1(struct bundle *VAR_1)
{
  int VAR_2;

  VAR_2 = FUNC_0(VAR_1);

  VAR_0.fd = -1;
  VAR_0.cfg.port = 0;
  *VAR_0.cfg.sockname = '\0';
  VAR_0.cfg.mask = 0;

  return VAR_2;
}
