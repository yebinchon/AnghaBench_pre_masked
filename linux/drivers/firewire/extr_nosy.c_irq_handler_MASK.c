
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcilynx {int rcv_start_pcl_bus; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pcilynx*) ;
 int FUNC_1 (struct pcilynx*) ;
 int FUNC_2 (struct pcilynx*,int ) ;
 int FUNC_3 (struct pcilynx*,int ,int) ;
 int FUNC_4 (struct pcilynx*,int ,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_8, void *VAR_9)
{
 struct pcilynx *VAR_10 = VAR_9;
 u32 VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_7);

 if (VAR_11 == ~0)

  return VAR_1;

 if ((VAR_11 & VAR_5) == 0)

  return VAR_1;

 if ((VAR_11 & VAR_6) != 0) {
  u32 VAR_12;

  VAR_12 = FUNC_2(VAR_10, VAR_3);
  FUNC_3(VAR_10, VAR_3, VAR_12);

  if ((VAR_12 & VAR_2) > 0)
   FUNC_0(VAR_10);
 }





 FUNC_3(VAR_10, VAR_7, VAR_11);

 if ((VAR_11 & VAR_4) > 0) {
  FUNC_1(VAR_10);
  FUNC_4(VAR_10, VAR_10->rcv_start_pcl_bus, 0);
 }

 return VAR_0;
}
