
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* mchunkptr ;
struct TYPE_17__ {int granularity; } ;
struct TYPE_16__ {size_t prev_foot; size_t head; } ;
struct TYPE_15__ {char* least_addr; size_t footprint; size_t max_footprint; } ;
struct TYPE_14__ {int head; } ;


 scalar_t__ FUNC_0 (char*,size_t,size_t,int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 TYPE_10__* FUNC_2 (TYPE_2__*,size_t) ;
 size_t FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,size_t) ;
 size_t FUNC_6 (scalar_t__) ;
 TYPE_3__ VAR_8 ;

__attribute__((used)) static mchunkptr FUNC_7(mstate VAR_9, mchunkptr VAR_10, size_t VAR_11) {
  size_t VAR_12 = FUNC_3(VAR_10);
  if (FUNC_4(VAR_11))
    return 0;

  if (VAR_12 >= VAR_11 + VAR_7 &&
      (VAR_12 - VAR_11) <= (VAR_8.granularity << 1))
    return VAR_10;
  else {
    size_t VAR_13 = VAR_10->prev_foot & ~VAR_4;
    size_t VAR_14 = VAR_12 + VAR_13 + VAR_5;
    size_t VAR_15 = FUNC_6(VAR_11 + VAR_6 + VAR_0);
    char* VAR_16 = (char*)FUNC_0((char*)VAR_10 - VAR_13,
      VAR_14, VAR_15, 1);
    if (VAR_16 != VAR_2) {
      mchunkptr VAR_17 = (mchunkptr)(VAR_16 + VAR_13);
      size_t VAR_18 = VAR_15 - VAR_13 - VAR_5;
      VAR_17->head = (VAR_18|VAR_1);
      FUNC_5(VAR_9, VAR_17, VAR_18);
      FUNC_2(VAR_17, VAR_18)->head = VAR_3;
      FUNC_2(VAR_17, VAR_18+VAR_7)->head = 0;

      if (VAR_16 < VAR_9->least_addr)
 VAR_9->least_addr = VAR_16;
      if ((VAR_9->footprint += VAR_15 - VAR_14) > VAR_9->max_footprint)
 VAR_9->max_footprint = VAR_9->footprint;
      FUNC_1(VAR_9, VAR_17);
      return VAR_17;
    }
  }
  return 0;
}
