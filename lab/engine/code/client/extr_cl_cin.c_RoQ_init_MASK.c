
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* file; } ;
struct TYPE_3__ {int RoQPlayed; int roqFPS; int numQuads; int roq_id; int RoQFrameSize; int roq_flags; int lastTime; int startTime; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_1( void )
{
 VAR_1[VAR_2].startTime = VAR_1[VAR_2].lastTime = FUNC_0();

 VAR_1[VAR_2].RoQPlayed = 24;


 VAR_1[VAR_2].roqFPS = VAR_0.file[ 6] + VAR_0.file[ 7]*256;

 if (!VAR_1[VAR_2].roqFPS) VAR_1[VAR_2].roqFPS = 30;

 VAR_1[VAR_2].numQuads = -1;

 VAR_1[VAR_2].roq_id = VAR_0.file[ 8] + VAR_0.file[ 9]*256;
 VAR_1[VAR_2].RoQFrameSize = VAR_0.file[10] + VAR_0.file[11]*256 + VAR_0.file[12]*65536;
 VAR_1[VAR_2].roq_flags = VAR_0.file[14] + VAR_0.file[15]*256;

 if (VAR_1[VAR_2].RoQFrameSize > 65536 || !VAR_1[VAR_2].RoQFrameSize) {
  return;
 }

}
