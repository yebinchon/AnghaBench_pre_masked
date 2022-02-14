
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs_offset {int offset; int * name; } ;


 int VAR_0 ;
 struct pt_regs_offset* VAR_1 ;
 int FUNC_0 (int *,char const*) ;

int FUNC_1(const char *VAR_2)
{
        const struct pt_regs_offset *VAR_3;
        for (VAR_3 = VAR_1; VAR_3->name != ((void*)0); VAR_3++)
                if (!FUNC_0(VAR_3->name, VAR_2))
                        return VAR_3->offset;
        return -VAR_0;
}
