
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVStream ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char const*) ;
 int FUNC_1 (int *,int *,char const*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, AVStream *VAR_2, const char *VAR_3)
{
    int VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
    if (VAR_4 < 0)
        FUNC_0(VAR_1, VAR_0, "Invalid stream specifier: %s.\n", VAR_3);
    return VAR_4;
}
