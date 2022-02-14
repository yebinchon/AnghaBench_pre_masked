
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct alps_data* private; } ;
struct alps_data {int x_res; int x_max; int y_res; int y_max; } ;


 int FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (struct psmouse*,char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 struct alps_data *VAR_9 = VAR_0->private;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = (char)(VAR_2 << 4) >> 4;
 VAR_3 = 50 + 2 * VAR_3;

 VAR_4 = (char)VAR_2 >> 4;
 VAR_4 = 36 + 2 * VAR_4;

 VAR_2 = FUNC_0(VAR_0, VAR_1 + 1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_5 = (char)(VAR_2 << 4) >> 4;
 VAR_5 = 17 + VAR_5;

 VAR_6 = (char)VAR_2 >> 4;
 VAR_6 = 13 + VAR_6;

 VAR_7 = VAR_3 * (VAR_5 - 1);
 VAR_8 = VAR_4 * (VAR_6 - 1);

 VAR_9->x_res = VAR_9->x_max * 10 / VAR_7;
 VAR_9->y_res = VAR_9->y_max * 10 / VAR_8;

 FUNC_1(VAR_0,
      "pitch %dx%d num-electrodes %dx%d physical size %dx%d mm res %dx%d\n",
      VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7 / 10, VAR_8 / 10, VAR_9->x_res, VAR_9->y_res);

 return 0;
}
