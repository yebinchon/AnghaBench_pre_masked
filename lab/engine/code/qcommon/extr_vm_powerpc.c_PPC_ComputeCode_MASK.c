
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {unsigned char* codeBase; size_t codeLength; scalar_t__ instructionPointers; int dataMask; } ;
typedef TYPE_2__ vm_t ;
struct TYPE_15__ {scalar_t__* function; int env; int toc; } ;
struct TYPE_17__ {scalar_t__* iPointers; int dataLength; int codeLength; int floatBase; int * data; int dataMask; scalar_t__ BlockCopy; scalar_t__ AsmCall; TYPE_1__ opd; } ;
typedef TYPE_3__ vm_data_t ;
struct TYPE_18__ {unsigned long length; unsigned long i_count; size_t jump_to; int ext; long bo; long count; struct TYPE_18__* jump; struct TYPE_18__* next; int * data; int bi; void* parent; struct TYPE_18__* nextJump; int * code; } ;
typedef TYPE_4__ symbolic_jump_t ;
typedef scalar_t__ ppc_instruction_t ;
typedef int powerpc_iname_t ;
struct TYPE_19__ {scalar_t__ function; int env; int toc; } ;
typedef TYPE_5__ opd_t ;
typedef TYPE_4__ local_data_t ;
typedef TYPE_4__ dest_instruction_t ;


 int FUNC_0 (char*) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (int ,...) ;
 int VAR_1 ;
 unsigned char* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_3__) ;
 long VAR_8 ;
 int VAR_9 ;


 TYPE_3__* VAR_10 ;
 int VAR_11 ;
 TYPE_4__* VAR_12 ;
 TYPE_4__* VAR_13 ;
 void** VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (scalar_t__*,int *,int) ;
 unsigned char* FUNC_5 (int *,size_t,int,int,int,int ) ;
 TYPE_4__* VAR_20 ;

__attribute__((used)) static void
FUNC_6( vm_t *VAR_21 )
{
 dest_instruction_t *VAR_22 = VAR_13;

 unsigned long int VAR_23 = 0;

 while ( (VAR_22 = VAR_22->next ) )
  VAR_23 += VAR_22->length;

 size_t VAR_24 = sizeof( vm_data_t )
  + sizeof( unsigned int ) * VAR_11
  + sizeof( ppc_instruction_t ) * VAR_23;



 unsigned char *VAR_25 = FUNC_5( ((void*)0), VAR_24,
  VAR_4|VAR_5, VAR_3|VAR_1, -1, 0 );

 if (VAR_25 == VAR_2)
  FUNC_0( "Not enough memory" );

 ppc_instruction_t *VAR_26, *VAR_27;
 VAR_26 = VAR_27 = (ppc_instruction_t *)( VAR_25 + FUNC_3( VAR_10[ VAR_11 ] ) );

 ppc_instruction_t VAR_28 = FUNC_1( VAR_19 );




 VAR_22 = VAR_13;
 while ( (VAR_22 = VAR_22->next ) ) {
  unsigned long int VAR_29 = VAR_22->i_count;
  if ( VAR_29 != VAR_0 ) {
   if ( ! VAR_14[ VAR_29 ] )
    VAR_14[ VAR_29 ] = (void *) VAR_26;
  }

  if ( VAR_22->jump == ((void*)0) ) {
   FUNC_4( VAR_26, &(VAR_22->code[0]), VAR_22->length * sizeof( ppc_instruction_t ) );
   VAR_26 += VAR_22->length;
  } else {
   long int VAR_30;
   symbolic_jump_t *VAR_31;
   for ( VAR_30 = 0; VAR_30 < VAR_22->length; VAR_30++ )
    VAR_26[ VAR_30 ] = VAR_28;
   VAR_26 += VAR_22->length;

   VAR_31 = VAR_22->jump;

   VAR_31->parent = (void *)(VAR_26 - 1);
  }
 }


 symbolic_jump_t *VAR_32 = VAR_20;
 while ( (VAR_32 = VAR_32->nextJump ) ) {
  ppc_instruction_t *VAR_33 = (void *) VAR_32->parent;
  ppc_instruction_t *VAR_34 = (void *) VAR_14[ VAR_32->jump_to ];
  signed long int VAR_35 = VAR_34 - VAR_33;


  if ( VAR_35 >= - 8192 && VAR_35 < 8192 ) {
   powerpc_iname_t VAR_36 = VAR_32->ext & VAR_9 ? VAR_17 : VAR_16;
   *VAR_33 = FUNC_1( VAR_36, VAR_32->bo, VAR_32->bi, VAR_35 * 4 );
   continue;
  }





  *VAR_33 = FUNC_1( (VAR_32->ext & VAR_9 ? VAR_18 : VAR_15), VAR_35 * 4 );
  if ( VAR_32->bo == VAR_8 )
   continue;


  if ( VAR_33[ -1 ] != VAR_28 )
   FUNC_0( "additional space for long jump not prepared" );


  long int VAR_37 = 0;
  switch ( VAR_32->bo ) {
   case 128:
    VAR_37 = 129;
    break;
   case 129:
    VAR_37 = 128;
    break;
   default:
    FUNC_0( "unrecognized branch type" );
    break;
  }



  VAR_33[ -1 ] = FUNC_1( VAR_16, VAR_37, VAR_32->bi, +2*4 );
 }

 VAR_21->codeBase = VAR_25;
 VAR_21->codeLength = VAR_24;

 vm_data_t *VAR_38 = (vm_data_t *)VAR_25;
 VAR_38->AsmCall = VAR_6;
 VAR_38->BlockCopy = VAR_7;


 VAR_38->dataMask = VAR_21->dataMask;
 VAR_38->iPointers = (ppc_instruction_t *)VAR_21->instructionPointers;
 VAR_38->dataLength = FUNC_3( VAR_38[ VAR_11 ] );
 VAR_38->codeLength = ( VAR_26 - VAR_27 ) * sizeof( ppc_instruction_t );
 VAR_38->floatBase = 0x59800004;



 {
  local_data_t *VAR_39, *VAR_40 = VAR_12;
  long int VAR_41 = 0;

  do {
   long int VAR_42;
   for ( VAR_42 = 0; VAR_42 < VAR_40->count; VAR_42++ )
    VAR_38->data[ VAR_41 + VAR_42 ] = VAR_40->data[ VAR_42 ];

   VAR_41 += VAR_40->count;
   VAR_39 = VAR_40->next;
   FUNC_2( VAR_40 );

   if ( !VAR_39 )
    break;
   VAR_40 = VAR_39;
  } while (1);
  VAR_12 = ((void*)0);
 }


 {
  VAR_22 = VAR_13->next;
  FUNC_2( VAR_13 );
  FUNC_2( VAR_20 );

  while ( VAR_22 ) {
   VAR_13 = VAR_22->next;
   if ( VAR_22->jump )
    FUNC_2( VAR_22->jump );
   FUNC_2( VAR_22 );
   VAR_22 = VAR_13;
  }
 }
}
