
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dtv_frontend_properties {scalar_t__ delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cxd2880_priv* demodulator_priv; } ;
struct cxd2880_priv {int spi_mutex; int tnrdmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_3,
     u16 *VAR_4)
{
 int VAR_5;
 struct cxd2880_priv *VAR_6 = ((void*)0);
 struct dtv_frontend_properties *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (!VAR_3 || !VAR_4) {
  FUNC_5("invalid arg\n");
  return -VAR_0;
 }

 VAR_6 = VAR_3->demodulator_priv;
 VAR_7 = &VAR_3->dtv_property_cache;

 FUNC_2(VAR_6->spi_mutex);
 if (VAR_7->delivery_system == VAR_1 ||
     VAR_7->delivery_system == VAR_2) {
  VAR_5 = FUNC_1(&VAR_6->tnrdmd, &VAR_8);
 } else {
  FUNC_4("invalid system\n");
  FUNC_3(VAR_6->spi_mutex);
  return -VAR_0;
 }
 FUNC_3(VAR_6->spi_mutex);

 VAR_8 /= 125;





 VAR_8 = FUNC_0(VAR_8, -840, -240);

 *VAR_4 = ((VAR_8 + 840) * 0xffff) / (-240 + 840);

 if (VAR_5)
  FUNC_4("ret = %d\n", VAR_5);

 return VAR_5;
}
