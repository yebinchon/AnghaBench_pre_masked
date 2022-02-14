
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int number_entry; } ;
typedef TYPE_1__ unz_global_info ;
struct TYPE_9__ {scalar_t__ uncompressed_size; void* crc; } ;
typedef TYPE_2__ unz_file_info ;
typedef int unzFile ;
struct TYPE_10__ {int hashSize; char* pakFilename; char* pakBasename; int numfiles; TYPE_4__* buildBuffer; void* pure_checksum; void* checksum; TYPE_4__** hashTable; int handle; } ;
typedef TYPE_3__ pack_t ;
typedef int filename_inzip ;
struct TYPE_11__ {char* name; scalar_t__ len; struct TYPE_11__* next; int pos; } ;
typedef TYPE_4__ fileInPack_t ;


 void* FUNC_0 (int*,int) ;
 long FUNC_1 (char*,int) ;
 void* FUNC_2 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,int) ;
 int VAR_2 ;
 int FUNC_6 (int*) ;
 void* FUNC_7 (int) ;
 void* VAR_3 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,TYPE_2__*,char*,int,int *,int ,int *,int ) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static pack_t *FUNC_16(const char *VAR_4, const char *VAR_5)
{
 fileInPack_t *VAR_6;
 pack_t *VAR_7;
 unzFile VAR_8;
 int VAR_9;
 unz_global_info VAR_10;
 char VAR_11[VAR_1];
 unz_file_info VAR_12;
 int VAR_13, VAR_14;
 long VAR_15;
 int VAR_16;
 int *VAR_17;
 char *VAR_18;

 VAR_16 = 0;

 VAR_8 = FUNC_15(VAR_4);
 VAR_9 = FUNC_11 (VAR_8,&VAR_10);

 if (VAR_9 != VAR_2)
  return ((void*)0);

 VAR_14 = 0;
 FUNC_13(VAR_8);
 for (VAR_13 = 0; VAR_13 < VAR_10.number_entry; VAR_13++)
 {
  VAR_9 = FUNC_10(VAR_8, &VAR_12, VAR_11, sizeof(VAR_11), ((void*)0), 0, ((void*)0), 0);
  if (VAR_9 != VAR_2) {
   break;
  }
  VAR_14 += FUNC_9(VAR_11) + 1;
  FUNC_14(VAR_8);
 }

 VAR_6 = FUNC_7( (VAR_10.number_entry * sizeof( fileInPack_t )) + VAR_14 );
 VAR_18 = ((char *) VAR_6) + VAR_10.number_entry * sizeof( fileInPack_t );
 VAR_17 = FUNC_7( ( VAR_10.number_entry + 1 ) * sizeof(int) );
 VAR_17[ VAR_16++ ] = FUNC_2( VAR_3 );



 for (VAR_13 = 1; VAR_13 <= VAR_0; VAR_13 <<= 1) {
  if (VAR_13 > VAR_10.number_entry) {
   break;
  }
 }

 VAR_7 = FUNC_7( sizeof( pack_t ) + VAR_13 * sizeof(fileInPack_t *) );
 VAR_7->hashSize = VAR_13;
 VAR_7->hashTable = (fileInPack_t **) (((char *) VAR_7) + sizeof( pack_t ));
 for(VAR_13 = 0; VAR_13 < VAR_7->hashSize; VAR_13++) {
  VAR_7->hashTable[VAR_13] = ((void*)0);
 }

 FUNC_5( VAR_7->pakFilename, VAR_4, sizeof( VAR_7->pakFilename ) );
 FUNC_5( VAR_7->pakBasename, VAR_5, sizeof( VAR_7->pakBasename ) );


 if ( FUNC_9( VAR_7->pakBasename ) > 4 && !FUNC_3( VAR_7->pakBasename + FUNC_9( VAR_7->pakBasename ) - 4, ".pk3" ) ) {
  VAR_7->pakBasename[FUNC_9( VAR_7->pakBasename ) - 4] = 0;
 }

 VAR_7->handle = VAR_8;
 VAR_7->numfiles = VAR_10.number_entry;
 FUNC_13(VAR_8);

 for (VAR_13 = 0; VAR_13 < VAR_10.number_entry; VAR_13++)
 {
  VAR_9 = FUNC_10(VAR_8, &VAR_12, VAR_11, sizeof(VAR_11), ((void*)0), 0, ((void*)0), 0);
  if (VAR_9 != VAR_2) {
   break;
  }
  if (VAR_12.uncompressed_size > 0) {
   VAR_17[VAR_16++] = FUNC_2(VAR_12.crc);
  }
  FUNC_4( VAR_11 );
  VAR_15 = FUNC_1(VAR_11, VAR_7->hashSize);
  VAR_6[VAR_13].name = VAR_18;
  FUNC_8( VAR_6[VAR_13].name, VAR_11 );
  VAR_18 += FUNC_9(VAR_11) + 1;

  VAR_6[VAR_13].pos = FUNC_12(VAR_8);
  VAR_6[VAR_13].len = VAR_12.uncompressed_size;
  VAR_6[VAR_13].next = VAR_7->hashTable[VAR_15];
  VAR_7->hashTable[VAR_15] = &VAR_6[VAR_13];
  FUNC_14(VAR_8);
 }

 VAR_7->checksum = FUNC_0( &VAR_17[ 1 ], sizeof(*VAR_17) * ( VAR_16 - 1 ) );
 VAR_7->pure_checksum = FUNC_0( VAR_17, sizeof(*VAR_17) * VAR_16 );
 VAR_7->checksum = FUNC_2( VAR_7->checksum );
 VAR_7->pure_checksum = FUNC_2( VAR_7->pure_checksum );

 FUNC_6(VAR_17);

 VAR_7->buildBuffer = VAR_6;
 return VAR_7;
}
