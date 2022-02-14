
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct rm_priotracker {int dummy; } ;
struct in_conninfo {int dummy; } ;
struct TYPE_2__ {size_t newest; int * key; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct rm_priotracker*) ;
 int FUNC_1 (struct rm_priotracker*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,struct in_conninfo*) ;

int
FUNC_4(struct in_conninfo *VAR_5, uint8_t *VAR_6,
    unsigned int VAR_7, uint64_t *VAR_8)
{
 struct rm_priotracker VAR_9;
 unsigned int VAR_10, VAR_11;
 int VAR_12;
 uint64_t VAR_13;

 if (VAR_2) {
  *VAR_8 = 0;
  return (1);
 }

 FUNC_0(&VAR_9);
 if (VAR_7 != VAR_0) {
  if (VAR_4 > 0) {
   *VAR_8 =
       FUNC_3(
    VAR_3.key[VAR_3.newest],
    VAR_5);
   VAR_12 = 0;
  } else
   VAR_12 = -1;
  goto out;
 }




 VAR_11 = VAR_3.newest;
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_13 =
      FUNC_3(VAR_3.key[VAR_11],
   VAR_5);
  if (VAR_10 == 0)
   *VAR_8 = VAR_13;
  VAR_12 = FUNC_2(VAR_6, &VAR_13);
  if (VAR_12)
   goto out;
  if (VAR_11 == 0)
   VAR_11 = VAR_1 - 1;
  else
   VAR_11--;
 }
 VAR_12 = 0;

 out:
 FUNC_1(&VAR_9);
 return (VAR_12);
}
