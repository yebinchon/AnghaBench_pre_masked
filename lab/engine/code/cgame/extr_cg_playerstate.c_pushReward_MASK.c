
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sfxHandle_t ;
typedef int qhandle_t ;
struct TYPE_2__ {int rewardStack; int* rewardCount; int * rewardShader; int * rewardSound; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_0(sfxHandle_t VAR_2, qhandle_t VAR_3, int VAR_4) {
 if (VAR_1.rewardStack < (VAR_0-1)) {
  VAR_1.rewardStack++;
  VAR_1.rewardSound[VAR_1.rewardStack] = VAR_2;
  VAR_1.rewardShader[VAR_1.rewardStack] = VAR_3;
  VAR_1.rewardCount[VAR_1.rewardStack] = VAR_4;
 }
}
