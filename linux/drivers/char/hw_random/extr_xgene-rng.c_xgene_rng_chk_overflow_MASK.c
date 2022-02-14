
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_rng_dev {int failure_cnt; scalar_t__ csr_base; void* failure_ts; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 void* VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (void*,void*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct xgene_rng_dev*,int) ;
 int FUNC_5 (struct xgene_rng_dev*) ;

__attribute__((used)) static void FUNC_6(struct xgene_rng_dev *VAR_11)
{
 u32 VAR_12;

 VAR_12 = FUNC_1(VAR_11->csr_base + VAR_6);
 if (VAR_12 & VAR_2)





  FUNC_0(VAR_11->dev, "test monobit failure error 0x%08X\n", VAR_12);
 if (VAR_12 & VAR_4)






  FUNC_0(VAR_11->dev, "test poker failure error 0x%08X\n", VAR_12);
 if (VAR_12 & VAR_1)




  FUNC_0(VAR_11->dev, "test long run failure error 0x%08X\n", VAR_12);
 if (VAR_12 & VAR_7)





  FUNC_0(VAR_11->dev, "test run failure error 0x%08X\n", VAR_12);
 if (VAR_12 & VAR_3)

  FUNC_0(VAR_11->dev, "noise failure error 0x%08X\n", VAR_12);
 if (VAR_12 & VAR_9)




  FUNC_0(VAR_11->dev, "stuck out failure error 0x%08X\n", VAR_12);

 if (VAR_12 & VAR_8) {
  u32 VAR_13;


  if (++VAR_11->failure_cnt == 1) {

   VAR_11->failure_ts = VAR_10;
   VAR_13 = FUNC_1(VAR_11->csr_base + VAR_5);
   FUNC_4(VAR_11, VAR_13);





   FUNC_5(VAR_11);
  } else {

   if (FUNC_2(VAR_11->failure_ts + 60 * VAR_0, VAR_10)) {
    FUNC_0(VAR_11->dev,
     "FRO shutdown failure error 0x%08X\n",
     VAR_12);
   } else {

    VAR_11->failure_ts = VAR_10;
    VAR_11->failure_cnt = 1;





    FUNC_5(VAR_11);
   }
   VAR_13 = FUNC_1(VAR_11->csr_base + VAR_5);
   FUNC_4(VAR_11, VAR_13);
  }
 }

 FUNC_3(VAR_12, VAR_11->csr_base + VAR_6);
}
