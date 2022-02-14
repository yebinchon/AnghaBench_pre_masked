
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_bay_info {int content_id; int state; } ;
struct macio_driver {int (* mediabay_event ) (struct macio_dev*,int) ;} ;
struct macio_dev {int dummy; } ;
struct device {scalar_t__ driver; int * bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct macio_dev*,int) ;
 struct macio_dev* FUNC_1 (struct device*) ;
 struct macio_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, void *VAR_6)
{
 struct media_bay_info* VAR_7 = VAR_6;
 struct macio_dev *VAR_8;
 struct macio_driver *VAR_9;
 int VAR_10;

 if (VAR_5->bus != &VAR_3)
  return 0;

 VAR_10 = VAR_7->state == VAR_4 ? VAR_7->content_id : VAR_2;
 if (VAR_10 == VAR_1)
  VAR_10 = VAR_0;
 VAR_8 = FUNC_1(VAR_5);
 VAR_9 = FUNC_2(VAR_5->driver);
 if (VAR_5->driver && VAR_9->mediabay_event)
  VAR_9->mediabay_event(VAR_8, VAR_10);
 return 0;
}
