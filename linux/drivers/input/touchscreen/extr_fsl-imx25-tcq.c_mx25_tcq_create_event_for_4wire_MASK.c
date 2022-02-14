
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mx25_tcq_priv {unsigned int pen_threshold; unsigned int sample_count; int idev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mx25_tcq_priv*) ;
 int FUNC_7 (struct mx25_tcq_priv*) ;

__attribute__((used)) static void FUNC_8(struct mx25_tcq_priv *VAR_3,
         u32 *VAR_4,
         unsigned int VAR_5)
{
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  unsigned int VAR_11 = FUNC_1(VAR_4[VAR_10]);
  unsigned int VAR_12 = FUNC_0(VAR_4[VAR_10]);

  switch (VAR_11) {
  case 1:
   VAR_8 = VAR_12;
   break;
  case 2:
   VAR_6 = VAR_12;
   break;
  case 3:
   VAR_7 = VAR_12;
   break;
  case 5:
   VAR_9 = VAR_12;
   break;
  default:
   FUNC_2(VAR_3->dev, "Dropped samples because of invalid index %d\n",
    VAR_11);
   return;
  }
 }

 if (VAR_5 != 0) {




  if (VAR_8 < VAR_3->pen_threshold &&
      VAR_9 < VAR_3->pen_threshold) {

   VAR_6 /= VAR_3->sample_count;
   VAR_7 /= VAR_3->sample_count;
   FUNC_3(VAR_3->idev, VAR_0, VAR_6);
   FUNC_3(VAR_3->idev, VAR_1, VAR_7);
   FUNC_4(VAR_3->idev, VAR_2, 1);
   FUNC_5(VAR_3->idev);


   FUNC_6(VAR_3);
  } else if (VAR_8 >= VAR_3->pen_threshold &&
      VAR_9 >= VAR_3->pen_threshold) {




   FUNC_4(VAR_3->idev, VAR_2, 0);
   FUNC_5(VAR_3->idev);
   FUNC_7(VAR_3);
  } else {






   FUNC_6(VAR_3);
  }
 }
}
