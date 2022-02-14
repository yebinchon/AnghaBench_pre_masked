
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int * jstring ;
typedef int jobject ;
struct TYPE_13__ {int what; int arg1; int arg2; scalar_t__ obj; } ;
struct TYPE_12__ {int * (* NewStringUTF ) (TYPE_1__**,char*) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef int IjkMediaPlayer ;
typedef TYPE_2__ AVMessage ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__**,int **) ;
 int FUNC_2 (int ,TYPE_1__**,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_2__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__**,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__**,int ,int ,int ,int ,int *) ;
 int * FUNC_10 (TYPE_1__**,char*) ;
 int * FUNC_11 (TYPE_1__**,char*) ;

__attribute__((used)) static void FUNC_12(JNIEnv *VAR_26, IjkMediaPlayer *VAR_27)
{
    jobject VAR_28 = (jobject) FUNC_6(VAR_27);
    FUNC_2(VAR_28, VAR_26, ((void*)0), "mpjni: message_loop_n: null weak_thiz", VAR_0);

    while (1) {
        AVMessage VAR_29;

        int VAR_30 = FUNC_5(VAR_27, &VAR_29, 1);
        if (VAR_30 < 0)
            break;


        FUNC_4(VAR_30 > 0);

        switch (VAR_29.what) {
        case 140:
            FUNC_3("FFP_MSG_FLUSH:\n");
            FUNC_8(VAR_26, VAR_28, VAR_19, 0, 0);
            break;
        case 142:
            FUNC_3("FFP_MSG_ERROR: %d\n", VAR_29.arg1);
            FUNC_8(VAR_26, VAR_28, VAR_2, VAR_3, VAR_29.arg1);
            break;
        case 136:
            FUNC_3("FFP_MSG_PREPARED:\n");
            FUNC_8(VAR_26, VAR_28, VAR_21, 0, 0);
            break;
        case 144:
            FUNC_3("FFP_MSG_COMPLETED:\n");
            FUNC_8(VAR_26, VAR_28, VAR_20, 0, 0);
            break;
        case 128:
            FUNC_3("FFP_MSG_VIDEO_SIZE_CHANGED: %d, %d\n", VAR_29.arg1, VAR_29.arg2);
            FUNC_8(VAR_26, VAR_28, VAR_24, VAR_29.arg1, VAR_29.arg2);
            break;
        case 135:
            FUNC_3("FFP_MSG_SAR_CHANGED: %d, %d\n", VAR_29.arg1, VAR_29.arg2);
            FUNC_8(VAR_26, VAR_28, VAR_23, VAR_29.arg1, VAR_29.arg2);
            break;
        case 131:
            FUNC_3("FFP_MSG_VIDEO_RENDERING_START:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_16, 0);
            break;
        case 151:
            FUNC_3("FFP_MSG_AUDIO_RENDERING_START:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_7, 0);
            break;
        case 130:
            FUNC_3("FFP_MSG_VIDEO_ROTATION_CHANGED: %d\n", VAR_29.arg1);
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_17, VAR_29.arg1);
            break;
        case 152:
            FUNC_3("FFP_MSG_AUDIO_DECODED_START:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_6, 0);
            break;
        case 132:
            FUNC_3("FFP_MSG_VIDEO_DECODED_START:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_15, 0);
            break;
        case 138:
            FUNC_3("FFP_MSG_OPEN_INPUT:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_14, 0);
            break;
        case 141:
            FUNC_3("FFP_MSG_FIND_STREAM_INFO:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_12, 0);
            break;
        case 143:
            FUNC_3("FFP_MSG_COMPONENT_OPEN:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_11, 0);
            break;
        case 147:
            FUNC_3("FFP_MSG_BUFFERING_START:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_10, VAR_29.arg1);
            break;
        case 148:
            FUNC_3("FFP_MSG_BUFFERING_END:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_9, VAR_29.arg1);
            break;
        case 145:

            FUNC_8(VAR_26, VAR_28, VAR_1, VAR_29.arg1, VAR_29.arg2);
            break;
        case 149:
            break;
        case 146:
            break;
        case 134:
            FUNC_3("FFP_MSG_SEEK_COMPLETE:\n");
            FUNC_8(VAR_26, VAR_28, VAR_22, 0, 0);
            break;
        case 153:
            FUNC_3("FFP_MSG_ACCURATE_SEEK_COMPLETE:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_13, VAR_29.arg1);
            break;
        case 137:
            break;
        case 133:
            if (VAR_29.obj) {
                jstring VAR_31 = (*VAR_26)->NewStringUTF(VAR_26, (char *)VAR_29.obj);
                FUNC_9(VAR_26, VAR_28, VAR_25, 0, 0, VAR_31);
                FUNC_1(VAR_26, &VAR_31);
            }
            else {
                FUNC_9(VAR_26, VAR_28, VAR_25, 0, 0, ((void*)0));
            }
            break;
        case 139:
            if (VAR_29.obj) {
                jstring VAR_32 = (*VAR_26)->NewStringUTF(VAR_26, (char *)VAR_29.obj);
                FUNC_9(VAR_26, VAR_28, VAR_4, VAR_29.arg1, VAR_29.arg2, VAR_32);
                FUNC_1(VAR_26, &VAR_32);
            }
            else {
                FUNC_9(VAR_26, VAR_28, VAR_4, VAR_29.arg1, VAR_29.arg2, ((void*)0));
            }
            break;
        case 129:
            FUNC_3("FFP_MSG_VIDEO_SEEK_RENDERING_START:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_18, VAR_29.arg1);
            break;
        case 150:
            FUNC_3("FFP_MSG_AUDIO_SEEK_RENDERING_START:\n");
            FUNC_8(VAR_26, VAR_28, VAR_5, VAR_8, VAR_29.arg1);
            break;
        default:
            FUNC_0("unknown FFP_MSG_xxx(%d)\n", VAR_29.what);
            break;
        }
        FUNC_7(&VAR_29);
    }

LABEL_RETURN:
    ;
}
