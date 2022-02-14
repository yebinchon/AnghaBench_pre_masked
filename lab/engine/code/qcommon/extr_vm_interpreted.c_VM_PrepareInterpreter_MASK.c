
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int codeLength; int* instructionPointers; int instructionCount; scalar_t__ codeBase; } ;
typedef TYPE_1__ vm_t ;
struct TYPE_6__ {int codeOffset; int instructionCount; int codeLength; } ;
typedef TYPE_2__ vmHeader_t ;
typedef scalar_t__ byte ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*) ;

void FUNC_3( vm_t *VAR_2, vmHeader_t *VAR_3 ) {
 int VAR_4;
 int VAR_5;
 int VAR_6;
 byte *VAR_7;
 int VAR_8;
 int *VAR_9;

 VAR_2->codeBase = FUNC_1( VAR_2->codeLength*4, VAR_1 );




 VAR_6 = VAR_5 = 0;
 VAR_8 = 0;
 VAR_7 = (byte *)VAR_3 + VAR_3->codeOffset;
 VAR_9 = (int *)VAR_2->codeBase;


 while ( VAR_8 < VAR_3->instructionCount ) {
  VAR_2->instructionPointers[ VAR_8 ] = VAR_6;
  VAR_8++;

  VAR_4 = (int)VAR_7[ VAR_5 ];
  VAR_9[VAR_6] = VAR_4;
  if(VAR_5 > VAR_3->codeLength)
   FUNC_0(VAR_0, "VM_PrepareInterpreter: pc > header->codeLength");

  VAR_5++;
  VAR_6++;


  switch ( VAR_4 ) {
  case 146:
  case 147:
  case 133:
  case 137:
  case 145:
  case 129:
  case 131:
  case 135:
  case 139:
  case 142:
  case 130:
  case 134:
  case 138:
  case 141:
  case 144:
  case 128:
  case 132:
  case 136:
  case 140:
  case 143:
  case 148:
   VAR_9[VAR_6] = FUNC_2(&VAR_7[VAR_5]);
   VAR_5 += 4;
   VAR_6++;
   break;
  case 149:
   VAR_9[VAR_6] = (int)VAR_7[VAR_5];
   VAR_5++;
   VAR_6++;
   break;
  default:
   break;
  }

 }
 VAR_6 = 0;
 VAR_8 = 0;



 while ( VAR_8 < VAR_3->instructionCount ) {
  VAR_4 = VAR_9[ VAR_6 ];
  VAR_8++;
  VAR_6++;

  switch ( VAR_4 ) {

  case 145:
  case 129:
  case 131:
  case 135:
  case 139:
  case 142:
  case 130:
  case 134:
  case 138:
  case 141:
  case 144:
  case 128:
  case 132:
  case 136:
  case 140:
  case 143:
   if(VAR_9[VAR_6] < 0 || VAR_9[VAR_6] > VAR_2->instructionCount)
    FUNC_0(VAR_0, "VM_PrepareInterpreter: Jump to invalid instruction number");



   VAR_9[VAR_6] = VAR_2->instructionPointers[VAR_9[VAR_6]];
   VAR_6++;
   break;


  case 146:
  case 147:
  case 133:
  case 137:
  case 148:
  case 149:
   VAR_6++;
   break;

  default:
   break;
  }

 }
}
