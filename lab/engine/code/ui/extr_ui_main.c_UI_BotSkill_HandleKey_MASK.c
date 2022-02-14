
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {scalar_t__ skillIndex; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static qboolean FUNC_1(int VAR_4, float *VAR_5, int VAR_6) {
 int VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 != 0) {
  VAR_3.skillIndex += VAR_7;

  if (VAR_3.skillIndex >= VAR_0) {
   VAR_3.skillIndex = 0;
  } else if (VAR_3.skillIndex < 0) {
   VAR_3.skillIndex = VAR_0-1;
  }
  return VAR_2;
 }
 return VAR_1;
}
