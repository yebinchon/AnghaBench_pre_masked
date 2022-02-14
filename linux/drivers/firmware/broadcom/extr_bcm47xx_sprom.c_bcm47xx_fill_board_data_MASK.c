
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_sprom {int boardflags2_hi; int boardflags2_lo; int boardflags_hi; int boardflags_lo; } ;


 int FUNC_0 (char const*,char*,int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct ssb_sprom *VAR_0, const char *VAR_1,
        bool VAR_2)
{
 FUNC_0(VAR_1, "boardflags", &VAR_0->boardflags_lo,
    &VAR_0->boardflags_hi, VAR_2);
 FUNC_0(VAR_1, "boardflags2", &VAR_0->boardflags2_lo,
    &VAR_0->boardflags2_hi, VAR_2);
}
