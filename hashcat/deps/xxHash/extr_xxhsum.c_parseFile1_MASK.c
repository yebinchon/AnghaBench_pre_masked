
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int parsedLine ;
typedef int XXH64_hash_t ;
typedef int XXH32_hash_t ;
struct TYPE_8__ {int xxh64; int xxh32; } ;
struct TYPE_9__ {int quit; scalar_t__ xxhBits; int filename; int nMismatchedChecksums; int nOpenOrReadFailures; TYPE_1__ canonical; int nProperlyFormattedLines; int nMixedFormatLines; int nImproperlyFormattedLines; } ;
struct TYPE_10__ {char* inFileName; int statusOnly; int quiet; int blockSize; int blockBuf; scalar_t__ warn; int lineBuf; int inFile; int lineMax; TYPE_2__ report; } ;
typedef TYPE_2__ ParsedLine ;
typedef TYPE_2__ ParseFileReport ;
typedef TYPE_4__ ParseFileArg ;
typedef int LineStatus ;
typedef int GetLineResult ;
typedef int FILE ;


 int FUNC_0 (int *,int ,int *,int ,int ) ;
 int FUNC_1 (char*,char const* const,...) ;
 int FUNC_2 (char*,char const* const,...) ;







 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (TYPE_2__* const,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_10(ParseFileArg* VAR_3)
{
    const char* const VAR_4 = VAR_3->inFileName;
    ParseFileReport* const VAR_5 = &VAR_3->report;

    unsigned long VAR_6 = 0;
    FUNC_8(VAR_5, 0, sizeof(*VAR_5));

    while (!VAR_5->quit) {
        FILE* VAR_7 = ((void*)0);
        LineStatus VAR_8 = 129;
        GetLineResult VAR_9;
        ParsedLine VAR_10;
        FUNC_8(&VAR_10, 0, sizeof(VAR_10));

        VAR_6++;
        if (VAR_6 == 0) {


            FUNC_1("%s : too many checksum lines\n", VAR_4);
            VAR_5->quit = 1;
            break;
        }

        VAR_9 = FUNC_7(&VAR_3->lineBuf, &VAR_3->lineMax,
                                VAR_3->inFile);
        if (VAR_9 != 132) {
            if (VAR_9 == 134) break;

            switch (VAR_9)
            {
            case 132:
            case 134:


                break;

            default:
                FUNC_1("%s : %lu: unknown error\n", VAR_4, VAR_6);
                break;

            case 133:
                FUNC_1("%s : %lu: too long line\n", VAR_4, VAR_6);
                break;

            case 131:
                FUNC_1("%s : %lu: out of memory\n", VAR_4, VAR_6);
                break;
            }
            VAR_5->quit = 1;
            break;
        }

        if (FUNC_9(&VAR_10, VAR_3->lineBuf) != VAR_0) {
            VAR_5->nImproperlyFormattedLines++;
            if (VAR_3->warn) {
                FUNC_1("%s : %lu: improperly formatted XXHASH checksum line\n"
                    , VAR_4, VAR_6);
            }
            continue;
        }

        if (VAR_5->xxhBits != 0 && VAR_5->xxhBits != VAR_10.xxhBits) {

            VAR_5->nImproperlyFormattedLines++;
            VAR_5->nMixedFormatLines++;
            if (VAR_3->warn) {
                FUNC_1("%s : %lu: improperly formatted XXHASH checksum line (XXH32/64)\n"
                    , VAR_4, VAR_6);
            }
            continue;
        }

        VAR_5->nProperlyFormattedLines++;
        if (VAR_5->xxhBits == 0) {
            VAR_5->xxhBits = VAR_10.xxhBits;
        }

        VAR_7 = FUNC_6(VAR_10.filename, "rb");
        if (VAR_7 == ((void*)0)) {
            VAR_8 = 130;
        } else {
            VAR_8 = 129;
            switch (VAR_10.xxhBits)
            {
            case 32:
                { XXH32_hash_t VAR_11;
                    FUNC_0(&VAR_11, VAR_1, VAR_7, VAR_3->blockBuf, VAR_3->blockSize);
                    if (VAR_11 == FUNC_3(&VAR_10.canonical.xxh32)) {
                        VAR_8 = 128;
                } }
                break;

            case 64:
                { XXH64_hash_t VAR_12;
                    FUNC_0(&VAR_12, VAR_2, VAR_7, VAR_3->blockBuf, VAR_3->blockSize);
                    if (VAR_12 == FUNC_4(&VAR_10.canonical.xxh64)) {
                        VAR_8 = 128;
                } }
                break;

            default:
                break;
            }
            FUNC_5(VAR_7);
        }

        switch (VAR_8)
        {
        default:
            FUNC_1("%s : unknown error\n", VAR_4);
            VAR_5->quit = 1;
            break;

        case 130:
            VAR_5->nOpenOrReadFailures++;
            if (!VAR_3->statusOnly) {
                FUNC_2("%s : %lu: FAILED open or read %s\n"
                    , VAR_4, VAR_6, VAR_10.filename);
            }
            break;

        case 128:
        case 129:
            { int VAR_13 = 1;
                if (VAR_8 == 128) {

                    if (VAR_3->quiet) VAR_13 = 0;
                } else {
                    VAR_5->nMismatchedChecksums++;
                }

                if (VAR_13 && !VAR_3->statusOnly) {
                    FUNC_2("%s: %s\n", VAR_10.filename
                        , VAR_8 == 128 ? "OK" : "FAILED");
            } }
            break;
        }
    }
}
