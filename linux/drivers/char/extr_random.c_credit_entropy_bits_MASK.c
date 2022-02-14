
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entropy_store {int entropy_count; int initialized; int push_work; TYPE_1__* poolinfo; int name; } ;
struct TYPE_2__ {int poolfracbits; int poolbitshift; int poolbytes; } ;


 int FUNC_0 (struct entropy_store*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 struct entropy_store VAR_4 ;
 int FUNC_3 (int*,int,int) ;
 int VAR_5 ;
 int FUNC_4 (int *,struct entropy_store*) ;
 int VAR_6 ;
 struct entropy_store VAR_7 ;
 int FUNC_5 (int *,int ,int ) ;
 unsigned int FUNC_6 (int,int const) ;
 int FUNC_7 (char*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int,int,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct entropy_store *VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15 = 0;
 const int VAR_16 = VAR_11->poolinfo->poolfracbits;
 int VAR_17 = VAR_12 << VAR_0;

 if (!VAR_12)
  return;

retry:
 VAR_13 = VAR_14 = FUNC_1(VAR_11->entropy_count);
 if (VAR_17 < 0) {

  VAR_13 += VAR_17;
 } else {
  int VAR_18 = VAR_17;
  const int VAR_19 = VAR_11->poolinfo->poolbitshift + VAR_0 + 2;


  do {
   unsigned int VAR_20 = FUNC_6(VAR_18, VAR_16/2);
   unsigned int VAR_21 =
    ((VAR_16 - VAR_13)*VAR_20*3) >> VAR_19;

   VAR_13 += VAR_21;
   VAR_18 -= VAR_20;
  } while (FUNC_10(VAR_13 < VAR_16-2 && VAR_18));
 }

 if (FUNC_10(VAR_13 < 0)) {
  FUNC_7("random: negative entropy/overflow: pool %s count %d\n",
   VAR_11->name, VAR_13);
  FUNC_2(1);
  VAR_13 = 0;
 } else if (VAR_13 > VAR_16)
  VAR_13 = VAR_16;
 if ((VAR_11 == &VAR_4) && !VAR_11->initialized &&
     (VAR_13 >> VAR_0) > 128)
  VAR_15 = 1;
 if (FUNC_3(&VAR_11->entropy_count, VAR_14, VAR_13) != VAR_14)
  goto retry;

 if (VAR_15) {
  VAR_11->initialized = 1;
  FUNC_11(&VAR_9);
  FUNC_5(&VAR_6, VAR_2, VAR_1);
 }

 FUNC_9(VAR_11->name, VAR_12,
      VAR_13 >> VAR_0, VAR_3);

 if (VAR_11 == &VAR_7) {
  int VAR_22 = VAR_13 >> VAR_0;
  struct entropy_store *VAR_23 = &VAR_4;

  if (VAR_5 < 2) {
   if (VAR_22 < 128)
    return;
   FUNC_4(&VAR_8, VAR_11);
   VAR_22 = VAR_11->entropy_count >> VAR_0;
  }


  if (VAR_22 >= VAR_10 &&
      !VAR_23->initialized) {
   FUNC_8(&VAR_23->push_work);
   return;
  }


  if (VAR_22 >= VAR_10 &&
      FUNC_13(&VAR_9)) {
   FUNC_11(&VAR_9);
   FUNC_5(&VAR_6, VAR_2, VAR_1);
  }




  if (!FUNC_12(&VAR_23->push_work) &&
      (FUNC_0(VAR_11) > 6 * VAR_11->poolinfo->poolbytes) &&
      (FUNC_0(VAR_23) <= 6 * VAR_23->poolinfo->poolbytes))
   FUNC_8(&VAR_23->push_work);
 }
}
