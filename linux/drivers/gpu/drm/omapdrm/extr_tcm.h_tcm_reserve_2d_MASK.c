
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct tcm_area {int is2d; struct tcm* tcm; } ;
struct tcm {scalar_t__ height; scalar_t__ width; scalar_t__ (* reserve_2d ) (struct tcm*,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,struct tcm_area*) ;} ;
typedef scalar_t__ s32 ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct tcm*,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,struct tcm_area*) ;

__attribute__((used)) static inline s32 FUNC_1(struct tcm *VAR_3, u16 VAR_4, u16 VAR_5,
    u16 VAR_6, s16 VAR_7, u16 VAR_8,
    struct tcm_area *VAR_9)
{

 s32 VAR_10 = VAR_3 == ((void*)0) ? -VAR_1 :
  (VAR_9 == ((void*)0) || VAR_4 == 0 || VAR_5 == 0 ||

   (VAR_6 & (VAR_6 - 1))) ? -VAR_0 :
  (VAR_5 > VAR_3->height || VAR_4 > VAR_3->width) ? -VAR_2 : 0;

 if (!VAR_10) {
  VAR_9->is2d = 1;
  VAR_10 = VAR_3->reserve_2d(VAR_3, VAR_5, VAR_4, VAR_6, VAR_7,
     VAR_8, VAR_9);
  VAR_9->tcm = VAR_10 ? ((void*)0) : VAR_3;
 }

 return VAR_10;
}
