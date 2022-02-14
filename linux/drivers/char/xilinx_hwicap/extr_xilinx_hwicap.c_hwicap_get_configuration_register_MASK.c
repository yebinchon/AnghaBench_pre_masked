
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hwicap_drvdata {TYPE_1__* config; } ;
struct TYPE_2__ {int (* set_configuration ) (struct hwicap_drvdata*,int*,int) ;int (* get_status ) (struct hwicap_drvdata*) ;int (* get_configuration ) (struct hwicap_drvdata*,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hwicap_drvdata*,int*,int) ;
 int FUNC_2 (struct hwicap_drvdata*) ;
 int FUNC_3 (struct hwicap_drvdata*,int*,int) ;
 int FUNC_4 (struct hwicap_drvdata*,int*,int) ;

__attribute__((used)) static int FUNC_5(struct hwicap_drvdata *VAR_5,
  u32 VAR_6, u32 *VAR_7)
{
 int VAR_8;
 u32 VAR_9[6];
 u32 VAR_10 = 0;




 VAR_9[VAR_10++] = VAR_1;
 VAR_9[VAR_10++] = VAR_2;
 VAR_9[VAR_10++] = VAR_4;
 VAR_9[VAR_10++] = VAR_2;
 VAR_9[VAR_10++] = VAR_2;





 VAR_8 = VAR_5->config->set_configuration(VAR_5,
          &VAR_9[0], VAR_10);
 if (VAR_8)
  return VAR_8;


 VAR_8 = VAR_5->config->get_status(VAR_5);
 if ((VAR_8 & VAR_3) != VAR_3)
  return -VAR_0;

 VAR_10 = 0;
 VAR_9[VAR_10++] = FUNC_0(VAR_6) | 1;
 VAR_9[VAR_10++] = VAR_2;
 VAR_9[VAR_10++] = VAR_2;





 VAR_8 = VAR_5->config->set_configuration(VAR_5,
   &VAR_9[0], VAR_10);
 if (VAR_8)
  return VAR_8;




 VAR_8 = VAR_5->config->get_configuration(VAR_5, VAR_7, 1);
 if (VAR_8)
  return VAR_8;

 return 0;
}
