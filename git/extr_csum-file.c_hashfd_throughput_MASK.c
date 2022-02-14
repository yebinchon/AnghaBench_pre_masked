
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct progress {int dummy; } ;
struct hashfile {int fd; int check_fd; char const* name; int ctx; scalar_t__ do_crc; struct progress* tp; scalar_t__ total; scalar_t__ offset; } ;
struct TYPE_2__ {int (* init_fn ) (int *) ;} ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 struct hashfile* FUNC_1 (int) ;

struct hashfile *FUNC_2(int VAR_1, const char *VAR_2, struct progress *VAR_3)
{
 struct hashfile *VAR_4 = FUNC_1(sizeof(*VAR_4));
 VAR_4->fd = VAR_1;
 VAR_4->check_fd = -1;
 VAR_4->offset = 0;
 VAR_4->total = 0;
 VAR_4->tp = VAR_3;
 VAR_4->name = VAR_2;
 VAR_4->do_crc = 0;
 VAR_0->init_fn(&VAR_4->ctx);
 return VAR_4;
}
