
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashfile_checkpoint {scalar_t__ offset; int ctx; } ;
struct hashfile {scalar_t__ offset; int ctx; scalar_t__ total; int fd; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;

int FUNC_2(struct hashfile *VAR_1, struct hashfile_checkpoint *VAR_2)
{
 off_t VAR_3 = VAR_2->offset;

 if (FUNC_0(VAR_1->fd, VAR_3) ||
     FUNC_1(VAR_1->fd, VAR_3, VAR_0) != VAR_3)
  return -1;
 VAR_1->total = VAR_3;
 VAR_1->ctx = VAR_2->ctx;
 VAR_1->offset = 0;
 return 0;
}
