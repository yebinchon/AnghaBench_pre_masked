
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_4__ {int * semaphore; } ;
struct TYPE_5__ {int endidx; int* seq; TYPE_1__ act; } ;
typedef TYPE_2__ hp_sdc_transaction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int64_t FUNC_4 (uint8_t VAR_10, int VAR_11)
{
 hp_sdc_transaction VAR_12;
 uint8_t VAR_13[26] = {
  VAR_2 | VAR_1 | VAR_0,
  0,
  VAR_4, 2, 0, 0,
  VAR_1 | VAR_0,
  VAR_5, 2, 0, 0,
  VAR_1 | VAR_0,
  VAR_6, 2, 0, 0,
  VAR_1 | VAR_0,
  VAR_7, 2, 0, 0,
  VAR_1 | VAR_0,
  VAR_8, 2, 0, 0
 };

 VAR_12.endidx = VAR_11 * 5;

 VAR_13[1] = VAR_10;
 VAR_13[VAR_12.endidx - 4] |= VAR_3;

 VAR_12.seq = VAR_13;
 VAR_12.act.semaphore = &VAR_9;


 if (FUNC_0(FUNC_1(&VAR_9)))
  return -1;

 if (FUNC_2(&VAR_12)) {
  FUNC_3(&VAR_9);
  return -1;
 }


 if (FUNC_0(FUNC_1(&VAR_9)))
  return -1;

 FUNC_3(&VAR_9);

 return (VAR_13[5] |
  ((uint64_t)(VAR_13[10]) << 8) | ((uint64_t)(VAR_13[15]) << 16) |
  ((uint64_t)(VAR_13[20]) << 24) | ((uint64_t)(VAR_13[25]) << 32));
}
