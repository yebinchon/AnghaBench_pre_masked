
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcm_area {int is2d; struct tcm* tcm; } ;
struct tcm {int width; scalar_t__ (* reserve_1d ) (struct tcm*,int,struct tcm_area*) ;scalar_t__ height; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct tcm*,int,struct tcm_area*) ;

__attribute__((used)) static inline s32 FUNC_1(struct tcm *VAR_3, u32 VAR_4,
     struct tcm_area *VAR_5)
{

 s32 VAR_6 = VAR_3 == ((void*)0) ? -VAR_1 :
  (VAR_5 == ((void*)0) || VAR_4 == 0) ? -VAR_0 :
  VAR_4 > (VAR_3->width * (u32) VAR_3->height) ? -VAR_2 : 0;

 if (!VAR_6) {
  VAR_5->is2d = 0;
  VAR_6 = VAR_3->reserve_1d(VAR_3, VAR_4, VAR_5);
  VAR_5->tcm = VAR_6 ? ((void*)0) : VAR_3;
 }

 return VAR_6;
}
