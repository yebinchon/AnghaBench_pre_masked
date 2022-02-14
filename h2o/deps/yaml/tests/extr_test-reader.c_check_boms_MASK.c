
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* start; } ;
struct TYPE_9__ {char* problem; int problem_offset; int unread; TYPE_1__ buffer; } ;
typedef TYPE_2__ yaml_parser_t ;
struct TYPE_10__ {char* test; char* title; int result; } ;


 char* VAR_0 ;
 TYPE_7__* VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;

int FUNC_6(void)
{
    yaml_parser_t VAR_2;
    int VAR_3 = 0;
    int VAR_4;
    FUNC_1("checking boms...\n");
    for (VAR_4 = 0; VAR_1[VAR_4].test; VAR_4++) {
        char *VAR_5 = VAR_1[VAR_4].title;
        int VAR_6 = VAR_1[VAR_4].result;
        int VAR_7;
        char *VAR_8 = VAR_1[VAR_4].test;
        char *VAR_9 = VAR_8;
        while (*VAR_9 != '!') VAR_9++;
        FUNC_1("\t%s: ", VAR_5);
        FUNC_3(&VAR_2);
        FUNC_4(&VAR_2, (unsigned char *)VAR_8, VAR_9-VAR_8);
        VAR_7 = FUNC_5(&VAR_2, VAR_9-VAR_8);
        if (!VAR_7) {
            FUNC_1("- (reader error: %s at %d)\n", VAR_2.problem, VAR_2.problem_offset);
            VAR_3++;
        }
        else {
            if (VAR_2.unread != VAR_6) {
                FUNC_1("- (length=%d while expected length=%d)\n", VAR_2.unread, VAR_6);
                VAR_3++;
            }
            else if (FUNC_0(VAR_2.buffer.start, VAR_0, VAR_6) != 0) {
                FUNC_1("- (value '%s' does not equal to the original value '%s')\n", VAR_2.buffer.start, VAR_0);
                VAR_3++;
            }
            else {
                FUNC_1("+\n");
            }
        }
        FUNC_2(&VAR_2);
    }
    FUNC_1("checking boms: %d fail(s)\n", VAR_3);
    return VAR_3;
}
