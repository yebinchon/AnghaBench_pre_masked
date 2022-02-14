
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_quirk_entry {int mq_quirks; int * mq_name; } ;


 struct macio_quirk_entry* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1)
{
        struct macio_quirk_entry *VAR_2;

        for (VAR_2 = VAR_0; VAR_2->mq_name != ((void*)0); VAR_2++)
                if (FUNC_0(VAR_1, VAR_2->mq_name) == 0)
                        return (VAR_2->mq_quirks);
        return (0);
}
