
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct da9150_gpadc {int dev; int lock; int da9150; int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int,int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct da9150_gpadc *VAR_9, int VAR_10)
{
 u8 VAR_11[2];
 int VAR_12;

 FUNC_4(&VAR_9->lock);


 FUNC_1(VAR_9->da9150, VAR_1,
    (VAR_0 |
     VAR_10 << VAR_2));


 FUNC_6(&VAR_9->complete);


 FUNC_7(&VAR_9->complete, FUNC_3(5));


 FUNC_0(VAR_9->da9150, VAR_3, 2, VAR_11);

 FUNC_5(&VAR_9->lock);


 if (VAR_11[1] & VAR_7) {
  FUNC_2(VAR_9->dev, "Timeout on channel %d of GPADC\n",
   VAR_10);
  return -VAR_8;
 }


 VAR_12 = (VAR_11[1] & VAR_5) >>
   VAR_6;

 VAR_12 |= VAR_11[0] << VAR_4;

 return VAR_12;
}
