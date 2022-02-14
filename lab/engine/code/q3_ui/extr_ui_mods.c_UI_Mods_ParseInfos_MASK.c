
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t numitems; int * itemnames; } ;
struct TYPE_4__ {TYPE_1__ list; int fs_gamePtr; int descriptionPtr; int * descriptionList; int * fs_gameList; } ;


 int FUNC_0 (int ,char*,int) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2( char *VAR_1, char *VAR_2 ) {
 VAR_0.fs_gameList[VAR_0.list.numitems] = VAR_0.fs_gamePtr;
 FUNC_0( VAR_0.fs_gamePtr, VAR_1, 16 );

 VAR_0.descriptionList[VAR_0.list.numitems] = VAR_0.descriptionPtr;
 FUNC_0( VAR_0.descriptionPtr, VAR_2, 48 );

 VAR_0.list.itemnames[VAR_0.list.numitems] = VAR_0.descriptionPtr;
 VAR_0.descriptionPtr += FUNC_1( VAR_0.descriptionPtr ) + 1;
 VAR_0.fs_gamePtr += FUNC_1( VAR_0.fs_gamePtr ) + 1;
 VAR_0.list.numitems++;
}
