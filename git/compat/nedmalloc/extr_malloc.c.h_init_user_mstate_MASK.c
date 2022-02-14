
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct malloc_state {int dummy; } ;
typedef TYPE_2__* mstate ;
typedef TYPE_3__* mchunkptr ;
struct TYPE_19__ {int default_mflags; int magic; } ;
struct TYPE_18__ {size_t head; } ;
struct TYPE_16__ {char* base; size_t size; } ;
struct TYPE_17__ {char* least_addr; size_t footprint; size_t max_footprint; int top; scalar_t__ exts; scalar_t__ extp; int mflags; int release_checks; int magic; TYPE_1__ seg; int mutex; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,size_t) ;
 TYPE_5__ VAR_4 ;
 TYPE_3__* FUNC_9 (int ) ;
 size_t FUNC_10 (int) ;

__attribute__((used)) static mstate FUNC_11(char* VAR_5, size_t VAR_6) {
  size_t VAR_7 = FUNC_10(sizeof(struct malloc_state));
  mchunkptr VAR_8;
  mchunkptr VAR_9 = FUNC_1(VAR_5);
  mstate VAR_10 = (mstate)(FUNC_3(VAR_9));
  FUNC_8(VAR_10, 0, VAR_7);
  (void)FUNC_0(&VAR_10->mutex);
  VAR_9->head = (VAR_7|VAR_2|VAR_0);
  VAR_10->seg.base = VAR_10->least_addr = VAR_5;
  VAR_10->seg.size = VAR_10->footprint = VAR_10->max_footprint = VAR_6;
  VAR_10->magic = VAR_4.magic;
  VAR_10->release_checks = VAR_1;
  VAR_10->mflags = VAR_4.default_mflags;
  VAR_10->extp = 0;
  VAR_10->exts = 0;
  FUNC_4(VAR_10);
  FUNC_5(VAR_10);
  VAR_8 = FUNC_9(FUNC_7(VAR_10));
  FUNC_6(VAR_10, VAR_8, (size_t)((VAR_5 + VAR_6) - (char*)VAR_8) - VAR_3);
  FUNC_2(VAR_10, VAR_10->top);
  return VAR_10;
}
