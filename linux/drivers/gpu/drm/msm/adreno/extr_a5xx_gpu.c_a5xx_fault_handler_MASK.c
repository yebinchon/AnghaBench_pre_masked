
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (char*,unsigned long,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, unsigned long VAR_2, int VAR_3)
{
 struct msm_gpu *VAR_4 = VAR_1;
 FUNC_2("*** gpu fault: iova=%08lx, flags=%d (%u,%u,%u,%u)\n",
   VAR_2, VAR_3,
   FUNC_1(VAR_4, FUNC_0(4)),
   FUNC_1(VAR_4, FUNC_0(5)),
   FUNC_1(VAR_4, FUNC_0(6)),
   FUNC_1(VAR_4, FUNC_0(7)));

 return -VAR_0;
}
