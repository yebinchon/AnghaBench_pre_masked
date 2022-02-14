
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_bay_info {int content_id; scalar_t__ state; } ;
struct macio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct media_bay_info* FUNC_0 (struct macio_dev*) ;
 scalar_t__ VAR_3 ;

int FUNC_1(struct macio_dev *VAR_4)
{
 struct media_bay_info* VAR_5;
 int VAR_6;

 if (VAR_4 == ((void*)0))
  return VAR_2;






 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 == ((void*)0))
  return VAR_2;
 VAR_6 = VAR_5->content_id;
 if (VAR_5->state != VAR_3)
  return VAR_2;
 if (VAR_6 == VAR_1)
  return VAR_0;
 return VAR_6;
}
