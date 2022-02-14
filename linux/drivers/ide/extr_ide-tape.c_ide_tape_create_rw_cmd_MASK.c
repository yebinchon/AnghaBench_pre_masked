
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct request {int dummy; } ;
struct ide_atapi_pc {int* c; int flags; } ;
struct TYPE_4__ {int blk_size; scalar_t__ buffer_size; } ;
typedef TYPE_1__ idetape_tape_t ;
struct TYPE_5__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct ide_atapi_pc*) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int ,unsigned int*) ;
 TYPE_2__* FUNC_6 (struct request*) ;

__attribute__((used)) static void FUNC_7(idetape_tape_t *VAR_4,
       struct ide_atapi_pc *VAR_5, struct request *VAR_6,
       u8 VAR_7)
{
 unsigned int VAR_8 = FUNC_1(VAR_6) / (VAR_4->blk_size >> 9);

 FUNC_3(VAR_5);
 FUNC_5(FUNC_2(VAR_8), (unsigned int *) &VAR_5->c[1]);
 VAR_5->c[1] = 1;

 if (FUNC_0(VAR_6) == VAR_4->buffer_size)
  VAR_5->flags |= VAR_0;

 if (VAR_7 == VAR_2)
  VAR_5->c[0] = VAR_2;
 else if (VAR_7 == VAR_3) {
  VAR_5->c[0] = VAR_3;
  VAR_5->flags |= VAR_1;
 }

 FUNC_4(FUNC_6(VAR_6)->cmd, VAR_5->c, 12);
}
