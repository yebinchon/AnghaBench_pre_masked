
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* stringOffsets; scalar_t__ stringData; } ;
struct TYPE_4__ {TYPE_1__ gameState; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(int VAR_4, char *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_4 < 0 || VAR_4 >= VAR_0)
  return VAR_2;

 VAR_7 = VAR_1.gameState.stringOffsets[VAR_4];
 if (!VAR_7) {
  if( VAR_6 ) {
   VAR_5[0] = 0;
  }
  return VAR_2;
 }

 FUNC_0( VAR_5, VAR_1.gameState.stringData+VAR_7, VAR_6);

 return VAR_3;
}
