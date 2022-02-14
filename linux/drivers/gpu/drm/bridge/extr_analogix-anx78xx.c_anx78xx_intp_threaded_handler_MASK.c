
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct anx78xx {TYPE_1__ connector; int lock; int * map; int powered; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct anx78xx*,unsigned int) ;
 int FUNC_2 (struct anx78xx*,unsigned int) ;
 int FUNC_3 (struct anx78xx*,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct anx78xx *VAR_8 = VAR_7;
 bool VAR_9 = 0;
 unsigned int VAR_10;
 int VAR_11;

 FUNC_5(&VAR_8->lock);

 VAR_11 = FUNC_7(VAR_8->map[VAR_1], VAR_4,
     &VAR_10);
 if (VAR_11) {
  FUNC_0("Failed to read DP interrupt 1 status: %d\n", VAR_11);
  goto unlock;
 }

 if (VAR_10)
  FUNC_2(VAR_8, VAR_10);

 VAR_11 = FUNC_7(VAR_8->map[VAR_1],
     VAR_3, &VAR_10);
 if (VAR_11) {
  FUNC_0("Failed to read common interrupt 4 status: %d\n",
     VAR_11);
  goto unlock;
 }

 if (VAR_10)
  VAR_9 = FUNC_1(VAR_8, VAR_10);


 if (!VAR_8->powered)
  goto unlock;

 VAR_11 = FUNC_7(VAR_8->map[VAR_0], VAR_5,
     &VAR_10);
 if (VAR_11) {
  FUNC_0("Failed to read HDMI int 1 status: %d\n", VAR_11);
  goto unlock;
 }

 if (VAR_10)
  FUNC_3(VAR_8, VAR_10);

unlock:
 FUNC_6(&VAR_8->lock);

 if (VAR_9)
  FUNC_4(VAR_8->connector.dev);

 return VAR_2;
}
