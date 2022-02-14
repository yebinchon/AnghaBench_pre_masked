
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isl6423_dev {struct isl6423_config* config; } ;
struct isl6423_config {scalar_t__ mod_extern; } ;
struct dvb_frontend {scalar_t__ sec_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct isl6423_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct isl6423_dev *VAR_2 = (struct isl6423_dev *) VAR_1->sec_priv;
 const struct isl6423_config *VAR_3 = VAR_2->config;
 int VAR_4 = 0;
 u8 VAR_5 = 0;

 VAR_5 = 0x01 << 5;

 if (VAR_3->mod_extern)
  VAR_5 |= (1 << 3);
 else
  VAR_5 |= (1 << 4);

 VAR_4 = FUNC_1(VAR_2, VAR_5);
 if (VAR_4 < 0)
  goto exit;
 return 0;

exit:
 FUNC_0(VAR_0, 1, "I/O error <%d>", VAR_4);
 return VAR_4;
}
