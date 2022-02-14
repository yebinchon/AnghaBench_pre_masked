
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_ca_en50221 {struct cxd* data; } ;
struct cxd {int* rbuf; int lock; scalar_t__ dr; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cxd*,int,int*,int) ;
 int FUNC_4 (struct cxd*,int,int*) ;

__attribute__((used)) static int FUNC_5(struct dvb_ca_en50221 *VAR_1, int VAR_2, u8 *VAR_3, int VAR_4)
{
 struct cxd *VAR_5 = VAR_1->data;
 u8 VAR_6, VAR_7;
 u16 VAR_8;

 FUNC_1(&VAR_5->lock);
 FUNC_0(VAR_5);
 FUNC_2(&VAR_5->lock);

 if (!VAR_5->dr)
  return 0;

 FUNC_1(&VAR_5->lock);
 FUNC_4(VAR_5, 0x0f, &VAR_6);
 FUNC_4(VAR_5, 0x10, &VAR_7);
 VAR_8 = ((u16)VAR_6 << 8) | VAR_7;
 if (VAR_8 > VAR_4 || VAR_8 < 2) {

  FUNC_3(VAR_5, 0x12, VAR_5->rbuf, VAR_8);
  FUNC_2(&VAR_5->lock);
  return -VAR_0;
 }
 FUNC_3(VAR_5, 0x12, VAR_3, VAR_8);
 VAR_5->dr = 0;
 FUNC_2(&VAR_5->lock);
 return VAR_8;
}
