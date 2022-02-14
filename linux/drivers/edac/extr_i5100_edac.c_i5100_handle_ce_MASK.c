
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int dummy; } ;
typedef int detail ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mem_ctl_info*,int,int ,int ,unsigned long,int,unsigned int,int,char const*,char*) ;
 int FUNC_1 (char*,int,char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_1,
       int VAR_2,
       unsigned VAR_3,
       unsigned VAR_4,
       unsigned long VAR_5,
       unsigned VAR_6,
       unsigned VAR_7,
       const char *VAR_8)
{
 char VAR_9[80];


 FUNC_1(VAR_9, sizeof(VAR_9),
   "bank %u, cas %u, ras %u\n",
   VAR_3, VAR_6, VAR_7);

 FUNC_0(VAR_0, VAR_1, 1,
        0, 0, VAR_5,
        VAR_2, VAR_4, -1,
        VAR_8, VAR_9);
}
