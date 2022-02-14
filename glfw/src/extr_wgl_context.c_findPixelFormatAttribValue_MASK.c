
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(const int* VAR_1,
                                      int VAR_2,
                                      const int* VAR_3,
                                      int VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
        if (VAR_1[VAR_5] == VAR_4)
            return VAR_3[VAR_5];
    }

    FUNC_0(VAR_0,
                         "WGL: Unknown pixel format attribute requested");
    return 0;
}
