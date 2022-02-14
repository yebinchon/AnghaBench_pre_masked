
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_gpu {int name; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (struct msm_gpu*,int ,int) ;
 int FUNC_3 (struct msm_gpu*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct msm_gpu *VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_3);
 FUNC_0("%s: Int status %08x", VAR_5->name, VAR_6);

 if (VAR_6 & VAR_0) {
  uint32_t VAR_7 = FUNC_1(VAR_5, VAR_2);
  FUNC_4("CP | Protected mode error| %s | addr=%x\n",
   VAR_7 & (1 << 24) ? "WRITE" : "READ",
   (VAR_7 & 0xFFFFF) >> 2);
 }

 FUNC_2(VAR_5, VAR_4, VAR_6);

 FUNC_3(VAR_5);

 return VAR_1;
}
