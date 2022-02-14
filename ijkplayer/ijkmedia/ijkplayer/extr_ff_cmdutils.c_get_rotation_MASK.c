
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_7__ {scalar_t__* value; } ;
struct TYPE_6__ {int metadata; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,char*,int *,int ) ;
 double FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int * FUNC_3 (TYPE_1__*,int ,int *) ;
 double FUNC_4 (scalar_t__*,char**) ;
 int FUNC_5 (double) ;
 int FUNC_6 (double) ;
 int FUNC_7 (double) ;
 scalar_t__ FUNC_8 (scalar_t__*,char*) ;

double FUNC_9(AVStream *VAR_2)
{
    AVDictionaryEntry *VAR_3 = FUNC_0(VAR_2->metadata, "rotate", ((void*)0), 0);
    uint8_t* VAR_4 = FUNC_3(VAR_2,
                                                     VAR_1, ((void*)0));
    double VAR_5 = 0;

    if (VAR_3 && *VAR_3->value && FUNC_8(VAR_3->value, "0")) {
        char *VAR_6;
        VAR_5 = FUNC_4(VAR_3->value, &VAR_6);
        if (*VAR_6)
            VAR_5 = 0;
    }
    if (VAR_4 && !VAR_5)
        VAR_5 = -FUNC_1((int32_t*) VAR_4);

    VAR_5 -= 360*FUNC_6(VAR_5/360 + 0.9/360);

    if (FUNC_5(VAR_5 - 90*FUNC_7(VAR_5/90)) > 2)
        FUNC_2(((void*)0), VAR_0, "Odd rotation angle.\n"
               "If you want to help, upload a sample "
               "of this file to ftp://upload.ffmpeg.org/incoming/ "
               "and contact the ffmpeg-devel mailing list. (ffmpeg-devel@ffmpeg.org)");

    return VAR_5;
}
