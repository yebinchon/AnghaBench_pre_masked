
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {int* file; scalar_t__ linbuf; scalar_t__* qStatus; } ;
struct TYPE_3__ {int RoQFrameSize; scalar_t__ RoQPlayed; scalar_t__ ROQSize; scalar_t__ holdAtEnd; scalar_t__ status; int roq_id; int numQuads; char roqF0; char roqF1; int samplesPerLine; int ysize; int roq_flags; int inMemory; scalar_t__ looping; int lastTime; int startTime; int silent; int dirty; scalar_t__ screenDelta; scalar_t__ buf; int (* VQ0 ) (int*,int*) ;int * t; int normalBuffer0; int (* VQ1 ) (int*,int*) ;int iFile; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_3 (int*,int,int ) ;






 int FUNC_4 (int*,short*,int,int ,unsigned short) ;
 int FUNC_5 (int*,short*,int,int ,unsigned short) ;
 int FUNC_6 (char,char) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int,int,int,int,int*,float,int) ;
 int FUNC_9 () ;


 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_10 (int*,unsigned short) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int*) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int*,int*) ;
 int FUNC_14 (int*,int*) ;

__attribute__((used)) static void FUNC_15(void)
{
 byte *VAR_9;
        short VAR_10[32768];
        int VAR_11;

 if (VAR_4 < 0) return;

 FUNC_3( VAR_2.file, VAR_3[VAR_4].RoQFrameSize+8, VAR_3[VAR_4].iFile );
 if ( VAR_3[VAR_4].RoQPlayed >= VAR_3[VAR_4].ROQSize ) {
  if (VAR_3[VAR_4].holdAtEnd==VAR_5) {
   if (VAR_3[VAR_4].looping) {
    FUNC_7();
   } else {
    VAR_3[VAR_4].status = VAR_0;
   }
  } else {
   VAR_3[VAR_4].status = VAR_1;
  }
  return;
 }

 VAR_9 = VAR_2.file;



redump:
 switch(VAR_3[VAR_4].roq_id)
 {
  case 130:
   if ((VAR_3[VAR_4].numQuads&1)) {
    VAR_3[VAR_4].normalBuffer0 = VAR_3[VAR_4].t[1];
    FUNC_6( VAR_3[VAR_4].roqF0, VAR_3[VAR_4].roqF1 );
    VAR_3[VAR_4].VQ1( (byte *)VAR_2.qStatus[1], VAR_9);
    VAR_3[VAR_4].buf = VAR_2.linbuf + VAR_3[VAR_4].screenDelta;
   } else {
    VAR_3[VAR_4].normalBuffer0 = VAR_3[VAR_4].t[0];
    FUNC_6( VAR_3[VAR_4].roqF0, VAR_3[VAR_4].roqF1 );
    VAR_3[VAR_4].VQ0( (byte *)VAR_2.qStatus[0], VAR_9 );
    VAR_3[VAR_4].buf = VAR_2.linbuf;
   }
   if (VAR_3[VAR_4].numQuads == 0) {
    FUNC_2(VAR_2.linbuf+VAR_3[VAR_4].screenDelta, VAR_2.linbuf, VAR_3[VAR_4].samplesPerLine*VAR_3[VAR_4].ysize);
   }
   VAR_3[VAR_4].numQuads++;
   VAR_3[VAR_4].dirty = VAR_6;
   break;
  case 135:
   FUNC_10( VAR_9, (unsigned short)VAR_3[VAR_4].roq_flags );
   break;
  case 129:
   if (!VAR_3[VAR_4].silent) {
    VAR_11 = FUNC_4( VAR_9, VAR_10, VAR_3[VAR_4].RoQFrameSize, 0, (unsigned short)VAR_3[VAR_4].roq_flags);
                                FUNC_8(0, VAR_11, 22050, 2, 1, (byte *)VAR_10, 1.0f, -1);
   }
   break;
  case 128:
   if (!VAR_3[VAR_4].silent) {
    if (VAR_3[VAR_4].numQuads == -1) {
     FUNC_9();
     VAR_7[0] = VAR_8;
    }
    VAR_11 = FUNC_5( VAR_9, VAR_10, VAR_3[VAR_4].RoQFrameSize, 0, (unsigned short)VAR_3[VAR_4].roq_flags);
                                FUNC_8(0, VAR_11, 22050, 2, 2, (byte *)VAR_10, 1.0f, -1);
   }
   break;
  case 132:
   if (VAR_3[VAR_4].numQuads == -1) {
    FUNC_11( VAR_9 );
    FUNC_12( 0, 0 );
    VAR_3[VAR_4].startTime = VAR_3[VAR_4].lastTime = FUNC_0();
   }
   if (VAR_3[VAR_4].numQuads != 1) VAR_3[VAR_4].numQuads = 0;
   break;
  case 134:
   VAR_3[VAR_4].inMemory = VAR_3[VAR_4].roq_flags;
   VAR_3[VAR_4].RoQFrameSize = 0;
   break;
  case 133:
   VAR_3[VAR_4].RoQFrameSize = 0;
   break;
  case 131:
   break;
  default:
   VAR_3[VAR_4].status = VAR_0;
   break;
 }



 if ( VAR_3[VAR_4].RoQPlayed >= VAR_3[VAR_4].ROQSize ) {
  if (VAR_3[VAR_4].holdAtEnd==VAR_5) {
   if (VAR_3[VAR_4].looping) {
    FUNC_7();
   } else {
    VAR_3[VAR_4].status = VAR_0;
   }
  } else {
   VAR_3[VAR_4].status = VAR_1;
  }
  return;
 }

 VAR_9 += VAR_3[VAR_4].RoQFrameSize;
 VAR_3[VAR_4].roq_id = VAR_9[0] + VAR_9[1]*256;
 VAR_3[VAR_4].RoQFrameSize = VAR_9[2] + VAR_9[3]*256 + VAR_9[4]*65536;
 VAR_3[VAR_4].roq_flags = VAR_9[6] + VAR_9[7]*256;
 VAR_3[VAR_4].roqF0 = (signed char)VAR_9[7];
 VAR_3[VAR_4].roqF1 = (signed char)VAR_9[6];

 if (VAR_3[VAR_4].RoQFrameSize>65536||VAR_3[VAR_4].roq_id==0x1084) {
  FUNC_1("roq_size>65536||roq_id==0x1084\n");
  VAR_3[VAR_4].status = VAR_0;
  if (VAR_3[VAR_4].looping) {
   FUNC_7();
  }
  return;
 }
 if (VAR_3[VAR_4].inMemory && (VAR_3[VAR_4].status != VAR_0)) { VAR_3[VAR_4].inMemory--; VAR_9 += 8; goto redump; }





 VAR_3[VAR_4].RoQPlayed += VAR_3[VAR_4].RoQFrameSize+8;
}
