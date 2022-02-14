
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card {int split_timeout_hi; int split_timeout_lo; unsigned int split_timeout_cycles; int split_timeout_jiffies; } ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct fw_card *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = VAR_1->split_timeout_hi * 8000 + (VAR_1->split_timeout_lo >> 19);


 VAR_2 = FUNC_1(VAR_2, 800u, 3u * 8000u);

 VAR_1->split_timeout_cycles = VAR_2;
 VAR_1->split_timeout_jiffies = FUNC_0(VAR_2 * VAR_0, 8000);
}
