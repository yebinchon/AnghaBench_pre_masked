
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dirlist ;
struct TYPE_4__ {size_t modCount; TYPE_1__* modList; } ;
struct TYPE_3__ {void* modDescr; void* modName; } ;


 size_t VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_3( void ) {
 int VAR_2;
 char VAR_3[2048];
 char *VAR_4;
  char *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_1.modCount = 0;
 VAR_2 = FUNC_2( "$modlist", "", VAR_3, sizeof(VAR_3) );
 VAR_4 = VAR_3;
 for( VAR_6 = 0; VAR_6 < VAR_2; VAR_6++ ) {
  VAR_7 = FUNC_1( VAR_4 ) + 1;
    VAR_5 = VAR_4 + VAR_7;
  VAR_1.modList[VAR_1.modCount].modName = FUNC_0(VAR_4);
  VAR_1.modList[VAR_1.modCount].modDescr = FUNC_0(VAR_5);
    VAR_4 += VAR_7 + FUNC_1(VAR_5) + 1;
  VAR_1.modCount++;
  if (VAR_1.modCount >= VAR_0) {
   break;
  }
 }

}
