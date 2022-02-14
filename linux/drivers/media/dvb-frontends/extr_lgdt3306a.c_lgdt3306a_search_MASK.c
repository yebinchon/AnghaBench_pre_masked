
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {int dummy; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
typedef enum dvbfe_search { ____Placeholder_dvbfe_search } dvbfe_search ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;
 int FUNC_2 (struct dvb_frontend*) ;

__attribute__((used)) static enum dvbfe_search FUNC_3(struct dvb_frontend *VAR_4)
{
 enum fe_status VAR_5 = 0;
 int VAR_6;


 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  goto error;

 VAR_6 = FUNC_1(VAR_4, &VAR_5);
 if (VAR_6)
  goto error;


 if (VAR_5 & VAR_3)
  return VAR_2;
 else
  return VAR_0;

error:
 FUNC_0("failed (%d)\n", VAR_6);
 return VAR_1;
}
