
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;


 int FUNC_0 (char*,int,char const*,int,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, const char *VAR_1, int VAR_2, uint64_t VAR_3,
    uint64_t VAR_4)
{

 FUNC_0("    window[%02x] = type %s, range %2d, addr %#jx-%#jx, %s\n",
     VAR_0, VAR_1, VAR_2, (uintmax_t)VAR_3, (uintmax_t)VAR_4,
     VAR_3 < VAR_4 ? "enabled" : "disabled");
}
