
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_mii_data {unsigned int phy_id; unsigned int reg_num; unsigned int val_in; int val_out; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,unsigned int,struct ch_mii_data*) ;
 int FUNC_1 (int,char*,char*) ;
 scalar_t__ FUNC_2 (char*,unsigned int*) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, char *VAR_3[], int VAR_4, const char *VAR_5)
{
        struct ch_mii_data VAR_6;
        unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

        if (VAR_2 == VAR_4 + 3)
                VAR_7 = VAR_0;
        else if (VAR_2 == VAR_4 + 4)
                VAR_7 = VAR_1;
        else
                return -1;

        if (FUNC_2(VAR_3[VAR_4], &VAR_8) ||
            FUNC_2(VAR_3[VAR_4 + 1], &VAR_10) ||
            FUNC_2(VAR_3[VAR_4 + 2], &VAR_9) ||
            (VAR_7 == VAR_1 && FUNC_2(VAR_3[VAR_4 + 3], &VAR_11)))
                return -1;

        VAR_6.phy_id = VAR_8 | (VAR_10 << 8);
        VAR_6.reg_num = VAR_9;
        VAR_6.val_in = VAR_11;

        if (FUNC_0(VAR_5, VAR_7, &VAR_6) < 0)
                FUNC_1(1, "MDIO %s", VAR_7 == VAR_0 ? "read" : "write");
        if (VAR_7 == VAR_0)
                FUNC_3("%#x [%u]\n", VAR_6.val_out, VAR_6.val_out);
        return 0;
}
