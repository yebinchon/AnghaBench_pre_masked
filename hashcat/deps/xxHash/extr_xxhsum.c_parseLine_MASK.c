
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int digest; } ;
typedef TYPE_2__ XXH64_canonical_t ;
struct TYPE_8__ {int digest; } ;
typedef TYPE_3__ XXH32_canonical_t ;
struct TYPE_6__ {TYPE_2__ xxh64; TYPE_3__ xxh32; } ;
struct TYPE_9__ {char* filename; int xxhBits; TYPE_1__ canonical; } ;
typedef TYPE_4__ ParsedLine ;
typedef int ParseLineResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static ParseLineResult FUNC_2(ParsedLine* VAR_3, const char* VAR_4)
{
    const char* const VAR_5 = FUNC_1(VAR_4, ' ');
    const char* const VAR_6 = VAR_5 + 1;

    VAR_3->filename = ((void*)0);
    VAR_3->xxhBits = 0;

    if (VAR_5 == ((void*)0) || *VAR_6 != ' ') return VAR_1;

    switch (VAR_5 - VAR_4)
    {
    case 8:
        { XXH32_canonical_t* VAR_7 = &VAR_3->canonical.xxh32;
            if (FUNC_0(VAR_7->digest, sizeof(VAR_7->digest), VAR_4)
                != VAR_0) {
                return VAR_1;
            }
            VAR_3->xxhBits = 32;
            break;
        }

    case 16:
        { XXH64_canonical_t* VAR_8 = &VAR_3->canonical.xxh64;
            if (FUNC_0(VAR_8->digest, sizeof(VAR_8->digest), VAR_4)
                != VAR_0) {
                return VAR_1;
            }
            VAR_3->xxhBits = 64;
            break;
        }

    default:
            return VAR_1;
            break;
    }

    VAR_3->filename = VAR_6 + 1;
    return VAR_2;
}
