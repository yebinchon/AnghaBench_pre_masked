
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int line ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_11__ {int guid; TYPE_1__ member_0; } ;
typedef TYPE_2__ _GLFWmapping ;
struct TYPE_12__ {int mapping; scalar_t__ present; } ;
typedef TYPE_3__ _GLFWjoystick ;
struct TYPE_13__ {int mappingCount; TYPE_3__* joysticks; TYPE_2__* mappings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_9__ VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,char const*,size_t const) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*,int) ;
 size_t FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*,char*) ;

int FUNC_9(const char* VAR_4)
{
    int VAR_5;
    const char* VAR_6 = VAR_4;

    FUNC_1(VAR_4 != ((void*)0));

    FUNC_0(VAR_0);

    while (*VAR_6)
    {
        if ((*VAR_6 >= '0' && *VAR_6 <= '9') ||
            (*VAR_6 >= 'a' && *VAR_6 <= 'f') ||
            (*VAR_6 >= 'A' && *VAR_6 <= 'F'))
        {
            char VAR_7[1024];

            const size_t VAR_8 = FUNC_7(VAR_6, "\r\n");
            if (VAR_8 < sizeof(VAR_7))
            {
                _GLFWmapping VAR_9 = {0};

                FUNC_4(VAR_7, VAR_6, VAR_8);
                VAR_7[VAR_8] = '\0';

                if (FUNC_5(&VAR_9, VAR_7))
                {
                    _GLFWmapping* VAR_10 = FUNC_2(VAR_9.guid);
                    if (VAR_10)
                        *VAR_10 = VAR_9;
                    else
                    {
                        VAR_3.mappingCount++;
                        VAR_3.mappings =
                            FUNC_6(VAR_3.mappings,
                                    sizeof(_GLFWmapping) * VAR_3.mappingCount);
                        VAR_3.mappings[VAR_3.mappingCount - 1] = VAR_9;
                    }
                }
            }

            VAR_6 += VAR_8;
        }
        else
        {
            VAR_6 += FUNC_7(VAR_6, "\r\n");
            VAR_6 += FUNC_8(VAR_6, "\r\n");
        }
    }

    for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++)
    {
        _GLFWjoystick* VAR_11 = VAR_3.joysticks + VAR_5;
        if (VAR_11->present)
            VAR_11->mapping = FUNC_3(VAR_11);
    }

    return VAR_2;
}
