
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pending_req {scalar_t__ operation; int pendcnt; void* status; TYPE_2__* ring; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_4__ {TYPE_1__* blkif; } ;
struct TYPE_3__ {int be; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct pending_req*) ;

__attribute__((used)) static void FUNC_5(struct pending_req *VAR_6,
  blk_status_t VAR_7)
{

 if (VAR_6->operation == VAR_0 &&
     VAR_7 == VAR_4) {
  FUNC_1("flush diskcache op failed, not supported\n");
  FUNC_3(VAR_5, VAR_6->ring->blkif->be, 0);
  VAR_6->status = VAR_2;
 } else if (VAR_6->operation == VAR_1 &&
     VAR_7 == VAR_4) {
  FUNC_1("write barrier op failed, not supported\n");
  FUNC_2(VAR_5, VAR_6->ring->blkif->be, 0);
  VAR_6->status = VAR_2;
 } else if (VAR_7) {
  FUNC_1("Buffer not up-to-date at end of operation,"
    " error=%d\n", VAR_7);
  VAR_6->status = VAR_3;
 }






 if (FUNC_0(&VAR_6->pendcnt))
  FUNC_4(VAR_6);
}
