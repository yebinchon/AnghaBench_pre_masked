
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entropy_store {int input_rotate; unsigned long add_ptr; int* pool; TYPE_1__* poolinfo; } ;
typedef int __u32 ;
struct TYPE_2__ {int poolwords; unsigned long tap1; unsigned long tap2; unsigned long tap3; unsigned long tap4; unsigned long tap5; } ;


 int FUNC_0 (int ,int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct entropy_store *VAR_1, const void *VAR_2,
       int VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;
 int VAR_11 = VAR_1->poolinfo->poolwords - 1;
 const char *VAR_12 = VAR_2;
 __u32 VAR_13;

 VAR_5 = VAR_1->poolinfo->tap1;
 VAR_6 = VAR_1->poolinfo->tap2;
 VAR_7 = VAR_1->poolinfo->tap3;
 VAR_8 = VAR_1->poolinfo->tap4;
 VAR_9 = VAR_1->poolinfo->tap5;

 VAR_10 = VAR_1->input_rotate;
 VAR_4 = VAR_1->add_ptr;


 while (VAR_3--) {
  VAR_13 = FUNC_0(*VAR_12++, VAR_10);
  VAR_4 = (VAR_4 - 1) & VAR_11;


  VAR_13 ^= VAR_1->pool[VAR_4];
  VAR_13 ^= VAR_1->pool[(VAR_4 + VAR_5) & VAR_11];
  VAR_13 ^= VAR_1->pool[(VAR_4 + VAR_6) & VAR_11];
  VAR_13 ^= VAR_1->pool[(VAR_4 + VAR_7) & VAR_11];
  VAR_13 ^= VAR_1->pool[(VAR_4 + VAR_8) & VAR_11];
  VAR_13 ^= VAR_1->pool[(VAR_4 + VAR_9) & VAR_11];


  VAR_1->pool[VAR_4] = (VAR_13 >> 3) ^ VAR_0[VAR_13 & 7];







  VAR_10 = (VAR_10 + (VAR_4 ? 7 : 14)) & 31;
 }

 VAR_1->input_rotate = VAR_10;
 VAR_1->add_ptr = VAR_4;
}
