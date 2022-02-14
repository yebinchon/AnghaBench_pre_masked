
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* pointer; } ;
struct TYPE_8__ {int unread; char* problem; int problem_offset; int eof; TYPE_1__ buffer; } ;
typedef TYPE_2__ yaml_parser_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_7 (TYPE_2__*,int) ;

int FUNC_8(void)
{
    yaml_parser_t VAR_1;
    int VAR_2 = 0;
    int VAR_3;
    int VAR_4 = 0;
    unsigned char VAR_5, VAR_6;
    unsigned char *VAR_7 = FUNC_2(3+VAR_0*2);
    FUNC_0(VAR_7);
    FUNC_3("checking a long utf8 sequence...\n");
    VAR_7[VAR_2++] = '\xef';
    VAR_7[VAR_2++] = '\xbb';
    VAR_7[VAR_2++] = '\xbf';
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3 ++) {
        if (VAR_3 % 2) {
            VAR_7[VAR_2++] = '\xd0';
            VAR_7[VAR_2++] = '\x90';
        }
        else {
            VAR_7[VAR_2++] = '\xd0';
            VAR_7[VAR_2++] = '\xaf';
        }
    }
    FUNC_5(&VAR_1);
    FUNC_6(&VAR_1, VAR_7, 3+VAR_0*2);
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        if (!VAR_1.unread) {
            if (!FUNC_7(&VAR_1, 1)) {
                FUNC_3("\treader error: %s at %d\n", VAR_1.problem, VAR_1.problem_offset);
                VAR_4 = 1;
                break;
            }
        }
        if (!VAR_1.unread) {
            FUNC_3("\tnot enough characters at %d\n", VAR_2);
            VAR_4 = 1;
            break;
        }
        if (VAR_2 % 2) {
            VAR_5 = '\xd0';
            VAR_6 = '\x90';
        }
        else {
            VAR_5 = '\xd0';
            VAR_6 = '\xaf';
        }
        if (VAR_1.buffer.pointer[0] != VAR_5 || VAR_1.buffer.pointer[1] != VAR_6) {
            FUNC_3("\tincorrect UTF-8 sequence: %X %X instead of %X %X\n",
                    (int)VAR_1.buffer.pointer[0], (int)VAR_1.buffer.pointer[1],
                    (int)VAR_5, (int)VAR_6);
            VAR_4 = 1;
            break;
        }
        VAR_1.buffer.pointer += 2;
        VAR_1.unread -= 1;
    }
    if (!VAR_4) {
        if (!FUNC_7(&VAR_1, 1)) {
            FUNC_3("\treader error: %s at %d\n", VAR_1.problem, VAR_1.problem_offset);
            VAR_4 = 1;
        }
        else if (VAR_1.buffer.pointer[0] != '\0') {
            FUNC_3("\texpected NUL, found %X (eof=%d, unread=%d)\n", (int)VAR_1.buffer.pointer[0], VAR_1.eof, VAR_1.unread);
            VAR_4 = 1;
        }
    }
    FUNC_4(&VAR_1);
    FUNC_1(VAR_7);
    FUNC_3("checking a long utf8 sequence: %d fail(s)\n", VAR_4);
    return VAR_4;
}
