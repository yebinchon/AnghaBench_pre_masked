
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ endianess ;
typedef void* U32 ;
struct TYPE_4__ {scalar_t__ nProperlyFormattedLines; scalar_t__ nImproperlyFormattedLines; scalar_t__ nOpenOrReadFailures; scalar_t__ nMismatchedChecksums; scalar_t__ quit; } ;
struct TYPE_5__ {char const* inFileName; char* lineBuf; int blockSize; char* blockBuf; void* quiet; void* warn; void* statusOnly; void* strictMode; scalar_t__ lineMax; int * inFile; TYPE_1__ report; } ;
typedef TYPE_1__ ParseFileReport ;
typedef TYPE_2__ ParseFileArg ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ const VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (TYPE_2__* const) ;
 int * VAR_2 ;
 char const* VAR_3 ;

__attribute__((used)) static int FUNC_7(const char* VAR_4,
                     const endianess VAR_5,
                     U32 VAR_6,
                     U32 VAR_7,
                     U32 VAR_8,
                     U32 VAR_9)
{
    int VAR_10 = 0;
    FILE* VAR_11 = ((void*)0);
    ParseFileArg VAR_12;
    ParseFileArg* const VAR_13 = &VAR_12;
    ParseFileReport* const VAR_14 = &VAR_13->report;

    if (VAR_5 != VAR_1) {

        FUNC_0( "Check file mode doesn't support little endian\n" );
        return 0;
    }


    if (VAR_4 == VAR_3) {


        VAR_11 = VAR_2;
    } else {
        VAR_11 = FUNC_3( VAR_4, "rt" );
    }

    if (VAR_11 == ((void*)0)) {
        FUNC_0( "Pb opening %s\n", VAR_4);
        return 0;
    }

    VAR_13->inFileName = VAR_4;
    VAR_13->inFile = VAR_11;
    VAR_13->lineMax = VAR_0;
    VAR_13->lineBuf = (char*) FUNC_5((size_t) VAR_13->lineMax);
    VAR_13->blockSize = 64 * 1024;
    VAR_13->blockBuf = (char*) FUNC_5(VAR_13->blockSize);
    VAR_13->strictMode = VAR_6;
    VAR_13->statusOnly = VAR_7;
    VAR_13->warn = VAR_8;
    VAR_13->quiet = VAR_9;

    FUNC_6(VAR_13);

    FUNC_4(VAR_13->blockBuf);
    FUNC_4(VAR_13->lineBuf);

    if (VAR_11 != VAR_2) FUNC_2(VAR_11);



    if (VAR_14->nProperlyFormattedLines == 0) {
        FUNC_0("%s: no properly formatted XXHASH checksum lines found\n", VAR_4);
    } else if (!VAR_7) {
        if (VAR_14->nImproperlyFormattedLines) {
            FUNC_1("%lu lines are improperly formatted\n"
                , VAR_14->nImproperlyFormattedLines);
        }
        if (VAR_14->nOpenOrReadFailures) {
            FUNC_1("%lu listed files could not be read\n"
                , VAR_14->nOpenOrReadFailures);
        }
        if (VAR_14->nMismatchedChecksums) {
            FUNC_1("%lu computed checksums did NOT match\n"
                , VAR_14->nMismatchedChecksums);
    } }



    VAR_10 = VAR_14->nProperlyFormattedLines != 0
            && VAR_14->nMismatchedChecksums == 0
            && VAR_14->nOpenOrReadFailures == 0
            && (!VAR_6 || VAR_14->nImproperlyFormattedLines == 0)
            && VAR_14->quit == 0;
    return VAR_10;
}
