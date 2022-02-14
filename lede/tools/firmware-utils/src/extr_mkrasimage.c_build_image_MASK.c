
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {char* data; int size; } ;
struct TYPE_11__ {char* data; int size; scalar_t__ name; } ;
struct TYPE_10__ {int size; char* data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*,int ) ;
 char* FUNC_3 (TYPE_2__) ;
 char* FUNC_4 (TYPE_3__,int ) ;
 TYPE_2__ VAR_5 ;
 char* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int,int) ;
 TYPE_1__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_10 (TYPE_1__*) ;

int FUNC_11()
{
    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);
    char *VAR_12 = ((void*)0);

    size_t VAR_13;


    if (VAR_5.name)
        FUNC_6(&VAR_5);
    FUNC_6(&VAR_7);
    VAR_8.data = FUNC_0(VAR_8.size, sizeof(char));
    FUNC_7(VAR_8.data, VAR_7.data, VAR_7.size);


    VAR_10 = FUNC_4(VAR_8, VAR_9);
    if (VAR_5.name)
        VAR_11 = FUNC_3(VAR_5);
    VAR_12 = FUNC_2(VAR_11, VAR_10, VAR_4);


    VAR_6.size = VAR_1 + VAR_8.size;
    if (VAR_5.name)
        VAR_6.size += VAR_5.size;
    VAR_6.data = FUNC_5(VAR_6.size);
    FUNC_8(VAR_6.data, 0xFF, VAR_6.size);


    FUNC_7(VAR_6.data, VAR_10, VAR_3);
    FUNC_7(VAR_6.data + VAR_3, VAR_12, VAR_0);
    if (VAR_5.name)
        FUNC_7(VAR_6.data + VAR_3 + VAR_0, VAR_11, VAR_2);
    VAR_13 = VAR_1;
    FUNC_7(VAR_6.data + VAR_13, VAR_8.data, VAR_8.size);
    VAR_13 += VAR_8.size;
    if (VAR_5.name)
        FUNC_7(VAR_6.data + VAR_13, VAR_5.data, VAR_5.size);


    FUNC_10(&VAR_6);


    if (VAR_5.name)
        FUNC_9(&VAR_5);
    FUNC_9(&VAR_7);
    FUNC_1(VAR_6.data);
    FUNC_1(VAR_8.data);

    FUNC_1(VAR_10);
    if (VAR_5.name)
        FUNC_1(VAR_11);
    FUNC_1(VAR_12);

    return 0;
}
