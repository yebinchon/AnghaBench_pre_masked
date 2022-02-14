
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int file; } ;
struct TYPE_3__ {int status; int iFile; int fileName; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 () ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4( void ) {

 if (VAR_3 < 0) return;

 FUNC_0( VAR_2[VAR_3].iFile );
 FUNC_1 (VAR_2[VAR_3].fileName, &VAR_2[VAR_3].iFile, VAR_4);

 FUNC_2 (VAR_1.file, 16, VAR_2[VAR_3].iFile);
 FUNC_3();
 VAR_2[VAR_3].status = VAR_0;
}
