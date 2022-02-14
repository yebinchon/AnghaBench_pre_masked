
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mdp5_interface {scalar_t__ type; scalar_t__ mode; int num; } ;
struct mdp5_hw_mixer {int pp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline uint32_t FUNC_0(struct mdp5_hw_mixer *VAR_9,
       struct mdp5_interface *VAR_10)
{






 if ((VAR_10->type == VAR_0) &&
   (VAR_10->mode == VAR_2))
  return VAR_7 << VAR_9->pp;

 if (VAR_10->type == VAR_1)
  return VAR_8;

 switch (VAR_10->num) {
 case 0: return VAR_3;
 case 1: return VAR_4;
 case 2: return VAR_5;
 case 3: return VAR_6;
 default: return 0;
 }
}
