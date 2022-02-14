
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sline {unsigned long* p_lno; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct sline *VAR_0, unsigned long VAR_1, unsigned long VAR_2, int VAR_3, unsigned long VAR_4)
{
 VAR_1 = VAR_0[VAR_1].p_lno[VAR_3];
 VAR_2 = VAR_0[VAR_2].p_lno[VAR_3];
 FUNC_0(" -%lu,%lu", VAR_1, VAR_2-VAR_1-VAR_4);
}
