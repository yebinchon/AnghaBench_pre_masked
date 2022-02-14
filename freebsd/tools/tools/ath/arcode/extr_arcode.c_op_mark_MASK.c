
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct athregrec {size_t reg; int val; } ;


 size_t VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char const*,size_t,int) ;

__attribute__((used)) static void
FUNC_1(struct athregrec *VAR_2)
{
        const char *VAR_3 = "UNKNOWN";
        if (VAR_2->reg <= VAR_0)
                VAR_3 = VAR_1[VAR_2->reg];

 FUNC_0("mark\t%s (%d): %d\n", VAR_3, VAR_2->reg, VAR_2->val);
}
